package sort;

//Lab 1, task 4

import java.time.format.SignStyle;
import java.util.Random;
import java.util.Scanner;

public class LetsDoIt {
    public static void main(String[] args)
    {
        Random rnd = new Random(System.currentTimeMillis());
        Scanner scan = new Scanner(System.in);
        int size;
        System.out.print("Размер массива: ");
        size = scan.nextInt();
        int arr [] = new int [size];
        System.out.println("Исходный массив");
        for (int i = 0; i < size; i++) {
            arr[i] = 1 + rnd.nextInt(10 - 1 + 1);
            System.out.print(arr[i]);
            System.out.print(" ");
        }
        System.out.println("");
        for (int i = 1; i < size; i++) {
            for (int j = 1; j < size; j++) {
                if (arr[j] > arr[j - 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
        System.out.println("Отсортированный массив");
        for (int i = 0; i < size; i++)
        {
            System.out.print(arr[i]);
            System.out.print(" ");
        }
    }
}
