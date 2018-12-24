package paket;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class IntClass extends JFrame
{
    JButton btn1 = new JButton("AC Milan");
    JButton btn2 = new JButton("Real Madrid");
    JLabel lbl1 = new JLabel("0 X 0");
    JLabel lbl2 = new JLabel("Last Scorer: Not available");
    JLabel lbl3 = new JLabel("Winner: DRAW");
    int milan_score;
    int real_score;
    IntClass()
    {
        super("Example");
        milan_score = 0;
        real_score = 0;
        setLayout(new FlowLayout());
        setSize(300,150);
        btn1.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                super.mouseClicked(e);
                milan_score++;
                lbl1.setText(String.valueOf(milan_score) + " X " + String.valueOf(real_score));
                lbl2.setText("Last scorer: AC Milan");
                if (milan_score > real_score)
                    lbl3.setText("Winner: AC Milan");
                if (real_score > milan_score)
                    lbl3.setText("Winner: Real Madrid");
                if (real_score == milan_score)
                    lbl3.setText("Winner: DRAW");
            }
        });
        btn2.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                super.mouseClicked(e);
                real_score++;
                lbl1.setText(String.valueOf(milan_score) + " X " + String.valueOf(real_score));
                lbl2.setText("Last scorer: Real Madrid");
                if (milan_score > real_score)
                    lbl3.setText("Winner: AC Milan");
                if (real_score > milan_score)
                    lbl3.setText("Winner: Real Madrid");
                if (real_score == milan_score)
                    lbl3.setText("Winner: DRAW");
            }
        });
        add(btn1);
        add(btn2);
        add(lbl1);
        add(lbl2);
        add(lbl3);
        setVisible(true);
    }
    public static void main(String[] args)
    {
        new IntClass();
    }
}

