package circles;

import java.util.Scanner;

public class CircleTest
{
    public static void main(String[] args)
    {
        Circle my_circ = new Circle(10);
        System.out.println("Создана окружность с радиусом 10. Пробуем получить значение радиуса");
        float r_ = my_circ.getRadius();
        System.out.print("Радиус: ");
        System.out.println(r_);
        System.out.println("Пробуем вычислить диаметр и площадь");
        my_circ.calculateDiameter();
        my_circ.calculateArea();
        System.out.println("Пробуем получить результаты вычислений");
        float dd = my_circ.getDiameter();
        if (dd == -1)
            System.out.println("Диаметр еще не вычислен. Воспользуйтесь командой для его вычисления и повторите попытку.");
        else {
            System.out.print("Диаметр: ");
            System.out.println(my_circ.getDiameter());
        }
        float aa = my_circ.getArea();
        if (aa == -1)
            System.out.println("Площадь еще не вычислена. Воспользуйтесь командой для ее вычисления и повторите попытку");
        else
        {
            System.out.print("Площадь: ");
            System.out.println(my_circ.getArea());
        }
        Scanner scan = new Scanner(System.in);
        Circle my_circ1 = new Circle();
        System.out.print("Создана новая окружность. Введите радиус: ");
        float rr = scan.nextFloat();
        my_circ1.setRadius(rr);
        System.out.println("Пробуем получить значение радиуса");
        System.out.print("Радиус: ");
        System.out.println(my_circ1.getRadius());
        System.out.println("Вычисляем диаметр и площадь окружности и выводим данные на экран");
        my_circ1.calculateDiameter();
        my_circ1.calculateArea();
        dd = my_circ1.getDiameter();
        aa = my_circ1.getArea();
        System.out.print("Диаметр: ");
        System.out.println(dd);
        System.out.print("Площадь: ");
        System.out.println(aa);
        System.out.println("Тестирование успешно завершено!");
    }
}
