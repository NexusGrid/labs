package arguments;

//Lab 1, task 2

public class GetArgs {

    public static void main(String[] args)
    {
        int s = args.length;
        System.out.println(s);
        for (int i = 0; i < s; s++)
            System.out.println(args[i]);
        System.out.println("Вывод завершен");
    }
}
