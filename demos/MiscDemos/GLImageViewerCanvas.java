import gl4java.*;
import gl4java.awt.*;
import gl4java.utils.textures.*;

import java.awt.*;
import java.awt.event.*;
import java.net.*;

public class GLImageViewerCanvas extends Frame 
    implements ActionListener, ItemListener
{
    GLImageCanvas glImageCanvas = null;

    private Choice fileTypeChoice = null;
    private Button loadButton = null;
    private Button saveButton = null;
    private Button normalButton = null;
    private Checkbox aspectCheck = null;

    public GLImageViewerCanvas(String title)
    {
        super(title);
	setSize(500, 300);
        Dimension d = getSize();
        setLayout(new BorderLayout());

	addWindowListener( new WindowAdapter()
			{
				public void windowClosed(WindowEvent e)
				{
					System.exit(0);
				}
				public void windowClosing(WindowEvent e)
				{
					windowClosed(e);
				}
			}
		);

	Panel filePanel = new Panel();
	filePanel.setLayout(new FlowLayout(FlowLayout.CENTER));

	fileTypeChoice = new Choice();
	fileTypeChoice.add("any");
	fileTypeChoice.add("tga");
	fileTypeChoice.add("png");
	fileTypeChoice.add("ppm");
	filePanel.add(fileTypeChoice);

        loadButton = new Button("load..");
	loadButton.addActionListener(this);
	filePanel.add(loadButton);

        saveButton = new Button("save..");
	saveButton.addActionListener(this);
	filePanel.add(saveButton);

        normalButton = new Button("normal");
	normalButton.addActionListener(this);
	filePanel.add(normalButton);

	aspectCheck = new Checkbox("aspect", true);
	aspectCheck.addItemListener(this);
	filePanel.add(aspectCheck);
        add("North", filePanel);

	glImageCanvas = new GLImageCanvas(d.width, d.height);
	glImageCanvas.setName("GLImageCanvas");
	glImageCanvas.setKeepAspectRatio(aspectCheck.getState());
        add("Center", glImageCanvas);

	pack();
	setVisible(true);
    }

    public void actionPerformed(ActionEvent e)
    {
    	Object src = e.getSource();
	if(src.equals(loadButton)) 
	{
	    FileDialog fd = new FileDialog(this,"Bitmap Load Menu",
	    				   FileDialog.LOAD);
	    fd.show();
	    String fname = fd.getDirectory() + fd.getFile() ;
	    fname = fname.replace('\\','/');
	    fname = fname.trim();

	    setTitle(fname);
	    glImageCanvas.loadTexture(fname, 
	    		              fileTypeChoice.getSelectedItem() );
	    repaint();
	} else if(src.equals(saveButton)) 
	{
	    FileDialog fd = new FileDialog(this,"TGA-Image Save Menu",
	    				   FileDialog.SAVE);
	    fd.show();
	    String fname = fd.getDirectory() + fd.getFile() ;
	    fname = fname.replace('\\','/');
	    fname = fname.trim();

	    setTitle(fname);
	    glImageCanvas.snapshot( new TGATextureGrabber(glImageCanvas.gl),
		                    fname);
	    repaint();
	} else if(src.equals(normalButton)) 
	{
	    glImageCanvas.setOriginalSize();
	}
    }

    public void itemStateChanged(ItemEvent e)
    {
	if(aspectCheck.equals(e.getItemSelectable()))
	{
		glImageCanvas.setKeepAspectRatio(aspectCheck.getState());
	}
    }

	public static void main( String args[] ) 
	{
                GLContext.gljNativeDebug = true;
                GLContext.gljClassDebug = true;
		GLImageViewerCanvas applet = 
			new GLImageViewerCanvas("GLImageViewerCanvas");
	}
}
