package gl4java.drawable.utils;

import gl4java.drawable.GLDrawable;
import gl4java.drawable.GLEventListener;
import java.util.EventListener;

/** Helper class for implementing a list of GLEventListeners. This is
    only needed because we can not use the JDK 1.2 collection classes
    since we have to be backward compatible with JDK 1.1. */

public class GLEventListenerList {
    private GLEventListener[] data = new GLEventListener[2];
    private int nextFreeIdx = 0;

    public GLEventListenerList() {
    }

    public void add(GLEventListener listener) {
        if (nextFreeIdx == data.length) {
            grow();
        }
        data[nextFreeIdx++] = listener;
    }

    public void remove(GLEventListener listener) {
        for (int i = 0; i < nextFreeIdx; i++) {
            if (data[i] == listener) {
                for (int j = i; j < nextFreeIdx - 1; j++) {
                    data[j] = data[j+1];
                }
                data[nextFreeIdx - 1] = null;
                --nextFreeIdx;
                return;
            }
        }
    }

    public void sendInitEvent(GLDrawable from) {
        for (int i = 0; i < nextFreeIdx; i++) {
            data[i].init(from);
        }
    }

    public void sendPreDisplayEvent(GLDrawable from) {
        for (int i = 0; i < nextFreeIdx; i++) {
            data[i].preDisplay(from);
        }
    }

    public void sendDisplayEvent(GLDrawable from) {
        for (int i = 0; i < nextFreeIdx; i++) {
            data[i].display(from);
        }
    }

    public void sendPostDisplayEvent(GLDrawable from) {
        for (int i = 0; i < nextFreeIdx; i++) {
            data[i].postDisplay(from);
        }
    }

    public void sendCleanupEvent(GLDrawable from) {
        for (int i = 0; i < nextFreeIdx; i++) {
            data[i].cleanup(from);
        }
    }

    public void sendReshapeEvent(GLDrawable from, int width, int height) {
        for (int i = 0; i < nextFreeIdx; i++) {
            data[i].reshape(from, width, height);
        }
    }

    public EventListener[] getListeners()
    {
        GLEventListener[] _new = new GLEventListener[nextFreeIdx];
        System.arraycopy(data, 0, _new, 0, nextFreeIdx);
	return _new;
    }

    public int size()
    { return nextFreeIdx; }

    private void grow() {
        GLEventListener[] newData = new GLEventListener[2 * data.length];
        System.arraycopy(data, 0, newData, 0, data.length);
        data = newData;
    }
}
