package ru.mirea.nexus;

import java.util.ArrayDeque;
import java.util.Scanner;

public class DrunkMan
{
    public static void main(String[] args) {
        ArrayDeque<Integer>player1 = new ArrayDeque<>();
        ArrayDeque<Integer>player2 = new ArrayDeque<>();
        Scanner scanner = new Scanner(System.in);
        System.out.println("First player's cards: ");
        for (int i = 0; i < 5; i++) {
            int val = scanner.nextInt();
            player1.add(val);
        }
        System.out.println("Second player's cards: ");
        for (int i = 0; i < 5; i++) {
            int val = scanner.nextInt();
            player2.add(val);
        }
        int moves = 0;
        while ((moves != 106) && (!player1.isEmpty()) && (!player2.isEmpty()))
        {
            int card1, card2;
            card1 = player1.pollFirst();
            card2 = player2.pollFirst();
            if (card1 < card2)
            {
                if ((card1 == 0) && (card2 == 9))
                {
                    player1.add(card1);
                    player1.add(card2);
                }
                else
                {
                    player2.add(card1);
                    player2.add(card2);
                }
            }
            else
            {
                if ((card2 == 0) && (card1 == 9))
                {
                    player2.add(card1);
                    player2.add(card2);
                }
                else
                {
                    player1.add(card1);
                    player1.add(card2);
                }
            }
            moves++;
        }
        if (moves == 106)
        {
            System.out.println("botva");
            return;
        }
        if (player1.isEmpty())
        {
            System.out.println("second " + moves);
            return;
        }
        if (player2.isEmpty())
        {
            System.out.println("first " + moves);
            return;
        }
        return;
    }
}
