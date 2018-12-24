package ru.mirea.nexus;

import java.util.Scanner;
import java.util.Random;

public class Test
{
    public static void main(String[] args) {
        System.out.print("Количество студентов: ");
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        Random rnd = new Random(System.currentTimeMillis());
        Student[] stud = new Student[q];
        for (int i = 0; i < q; i++)
            stud[i] = new Student();
        int IDs[] = new int[q];
        for (int i = 0; i < q; i++) {
            stud[i].setID(1 + rnd.nextInt(1000));
            IDs[i] = stud[i].getID();
        }
        System.out.println("Исходный список ID студентов:");
        for (int i = 0; i < q; i++)
            System.out.println(IDs[i]);
        IDs = Student.sortMerge(IDs);
        System.out.println("Отсортированный список ID студентов");
        for (int i = 0; i < q; i++)
            System.out.println(IDs[i]);
    }
}
