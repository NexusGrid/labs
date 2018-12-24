import javax.swing.*;
import java.awt.*;

public class Image extends JFrame {
    private java.awt.Image img;

    Image() {
        super("My image");
        setLayout(new FlowLayout());
        setSize(500, 500);
        setVisible(true);
    }

    public void loadImg(String src) {
        img = new ImageIcon(src).getImage();
    }

    public void showPicture() {
        Graphics graph = getGraphics();
        graph.drawImage(img, 0, 0, 500, 500, null);
    }

    public static void main(String[] args)
    {
        if (args.length < 1)
        {
            System.out.println("Usage: Lab5.exe <path to picture>");
            return;
        }
        Image myimg = new Image();
        myimg.loadImg(args[0]);
        myimg.showPicture();
    }
}