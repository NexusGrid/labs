package ru.mirea.nexus;

import java.util.Scanner;

public class Recursion
{
    public static void recursion(int n)
    {
        if (n > 1)
            recursion(n - 1);
        System.out.print(n + ", ");
    }
    public static void main(String[] args)
    {
        System.out.println("Введите n");
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        recursion(n);
    }
}
