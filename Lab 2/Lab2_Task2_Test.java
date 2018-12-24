package myhuman;

import java.util.Scanner;

public class Human
{
    public static void main (String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Hand new_hand = new Hand();
        Head new_head = new Head();
        Leg new_leg = new Leg();
        System.out.println("Созданы по одному экземпляру классов Hand, Head и Leg. Присвоение полям значений...");
        System.out.print("Длина головы: ");
        int l = scan.nextInt();
        new_head.setLength(l);
        System.out.print("Длина руки: ");
        l = scan.nextInt();
        new_hand.setLength(l);
        System.out.print("Длина ноги: ");
        l = scan.nextInt();
        new_leg.setLength(l);
        System.out.println("Вывод полученной информации");
        System.out.print("Длина головы: ");
        l = new_head.getLength();
        System.out.println(l);
        System.out.print("Длина руки: ");
        l = new_hand.getLength();
        System.out.println(l);
        System.out.print("Длина ноги: ");
        l = new_leg.getLength();
        System.out.println(l);
        System.out.println("Тестирование завершено");
    }
}
