package ru.mirea.nexus;

import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.util.concurrent.ThreadLocalRandom;

public class Game extends JFrame
{
    int number;
    int tr;
    JButton btn;
    JTextField txt;
    Game()
    {
        super("Game");
        setSize(500, 500);
        number = ThreadLocalRandom.current().nextInt(0, 21);
        tr = 3;
        btn = new JButton("Ввести");
        txt = new JTextField(3);
        btn.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                super.mouseClicked(e);
                if (tr != 1) {
                    if (Integer.parseInt(txt.getText()) == number) {
                        System.out.println("Вы угадали число!");
                        System.exit(0);
                    } else {
                        if (Integer.parseInt(txt.getText()) > number) {
                            tr--;
                            System.out.println("Вы не угадали число. Загаданное число меньше, чем введенное. Осталось " + tr + " попыток");
                        } else {
                            tr--;
                            System.out.println("Вы не угадали число. Загаданное число больше, чем введенное. Осталось " + tr + " попыток");
                        }
                    }
                }
                else
                {
                    System.out.println("Вы не угадали число с трех раз");
                    System.exit(0);
                }
            }
        });
        setLayout(new FlowLayout());
        add(btn);
        add(txt);
        setVisible(true);

    }

    public int getTr()
    {
        return tr;
    }

    public static void main(String[] args)
    {
        Game game = new Game();
    }
}
