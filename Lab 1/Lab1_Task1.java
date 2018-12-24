package program;

//Lab 1, task 1

import java.util.Scanner;

public class Cyclesinput
{
       public static void main(String[] args)
       {
           System.out.print("Введите количество элементов: ");
           Scanner sc = new Scanner(System.in);
           int q = 0;
           q = sc.nextInt();
           int [] arr = new int[q];
           for (int i = 0; i < q; i++)
               arr[i] = sc.nextInt();
           System.out.println("Вывод циклом for");
           for (int i = 0; i < q; i++)
               System.out.println(arr[i]);
           System.out.println("Вывод циклом while");
           int temp = 0;
           while (temp < q)
           {
               System.out.println(arr[temp]);
               temp++;
           }
           temp = 0;
           System.out.println("Вывод циклом do while");
           do {
               System.out.println(arr[temp]);
               temp++;
           } while (temp < q);
           System.out.println("Вывод завершен!");
       }
}
