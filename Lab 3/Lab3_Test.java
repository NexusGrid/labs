package mydishes;

public class Test
{
    public static void main(String[] args)
    {
        System.out.println("Базовый класс - посуда");
        System.out.println("Создание чашки...");
        Cup cup = new Cup(50, true);
        System.out.println("Получение информации о чашке...");
        cup.displayInfo();
        System.out.println("Создание тарелки...");
        Plate plate = new Plate(30, false);
        System.out.println("Получение информации о тарелке...");
        plate.displayInfo();
    }
}
