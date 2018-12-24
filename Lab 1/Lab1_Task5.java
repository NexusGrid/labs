package fact;

//Lab 1, task 5

import java.util.Scanner;

public class Calculate {
    public static void main(String[] args)
    {
        System.out.print("Введите число: ");
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();
        int result = calculator(n);
        System.out.print("Результат: ");
        System.out.print(result);
    }

    private static int calculator(int num)
    {
        int res = 1;
        for (int i = 1; i <= num; i++)
            res = res * i;
        return res;
    }
}
