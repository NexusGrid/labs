package mypackage;

public class Test {
    public static void main(String[] args) {
        System.out.println("Создание круга...");
        Circle circ = new Circle(5, "Red", true);
        System.out.println("Получение информации о круге...");
        String s = circ.toString_();
        System.out.println(s);
        System.out.println("Создание прямоугольника...");
        Rectangle rect = new Rectangle(10, 2);
        System.out.println("Получение информации о прямоугольнике...");
        s = rect.toString_();
        System.out.println(s);
        System.out.println("Создание квадрата...");
        Square sq = new Square(10, "Blue", false);
        System.out.println("Получение информации о квадрате...");
        s = sq.toString_();
        System.out.println(s);
    }
}
