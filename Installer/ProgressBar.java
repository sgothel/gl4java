import java.awt.*;

//
//
// ProgressBar JavaBean v1.00
//
// Written by             : David Reilly
// Release details        : Public domain source/binary
// Last modification date : Tuesday, October 28, 1997
//
public class ProgressBar extends Canvas
{
	int min, max, val;
	protected float m_percentage;

	protected Color m_textColor = Color.black;
	protected boolean m_displayText = true;

	public ProgressBar()
	{
		m_percentage = 0;
	}

	public void setMin(int v)
	{ min=v; }

	public void setMax(int v)
	{ max=v; }

	public void setValue(int v)
	{ 
	  if( min <= v && v <= max )
	  {
		  val=v; 
		  m_percentage= (float)(val-min)/(float)(max-min);
		  repaint();
          }		  
	}

	public float getPercent()
	{
		return m_percentage;
	}

	public void setPercent( float percent )
	{
		if ( ( percent <= 1.0f ) && ( percent >= 0.0f) )
		{
			m_percentage = percent;	
			val = (int)((max-min)*m_percentage+(float)min+0.5);
		}

		repaint();
	}

	public boolean getDisplayText()
	{
		return m_displayText;
	}

	public boolean isDisplayText()
	{
		return m_displayText;
	}

	public void setDisplayText(boolean b)
	{
		m_displayText = b;
	}

	public Color getTextColor()
	{
		return m_textColor;
	}

	public void setTextColor(Color set_text)
	{
		m_textColor = set_text;
	}

	public void toggleDisplayText()
	{
		m_displayText = !m_displayText;
	}


	public void paint( Graphics g )
	{
		// Local variables
		Color background;
		Color foreground;

		int width = getSize().width;
		int height = getSize().height;
		
		// Pixel per pecent
		int pixels;

		background = getBackground();
		foreground = getForeground();

		// Draw background
		g.setColor ( background );
		g.fillRect ( 0, 0, width, height);

		// Draw top left border
		g.setColor ( Color.gray );
		g.drawLine ( 0, 0, width, 0); // top left to top right
		g.drawLine ( 0, 0 , 0, height ); // top left to bottom left

		g.setColor ( Color.black.brighter() );
		g.drawLine ( 1, 1, width-1, 1 ); // near top left to near top right
		g.drawLine ( 1, 1, 1, height-1 ); // near top left to near bottom left

		// Draw bottom right border
		g.setColor ( Color.lightGray.darker() );
		g.drawLine ( 2, height-1, width-1, height-1); // bottom left to bottom right
		g.drawLine ( width-1, height-1, width-1, 1 ); // bottom right to top right

		g.setColor ( Color.lightGray );
		g.drawLine ( 2, height-2, width-2, height-2); // near bottom left to near bottom right
		g.drawLine ( width-2, height-2, width-2, 2 ); // near bottom right to near top right

		// Calculate bar pixels
		pixels = (int) ( width * m_percentage);
		if (pixels > width-3)
			pixels = width-3;

		// Draw bar
		g.setColor ( foreground );
		g.fillRect ( 2, 2, pixels , height - 3);

		// If display text is required
		if (m_displayText)
		{
			g.setColor (m_textColor);

			// Get color information
			FontMetrics f = g.getFontMetrics();
			String percentString = 
			  String.valueOf((int)(m_percentage*100.0)); 
			g.drawString ( percentString , (width - f.stringWidth (percentString) ) / 2,
				           (height )  / 2 + f.getHeight() /2 );
		}
	}

	// Returns minimum bean size
	public Dimension getMinimumSize()
	{
		return getSize();
	}

	// Returns preferred bean size
	public Dimension getPreferredSize()
	{
		return getMinimumSize();
	}

}

