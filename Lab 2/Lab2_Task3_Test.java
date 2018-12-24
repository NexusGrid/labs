package books;

import java.util.Scanner;

public class BookTest
{
    public static void main(String[] args) {
        MyBook book1 = new MyBook();
        Scanner scan = new Scanner(System.in);
        System.out.println("Создание книги без заранее заданных параметров. Получение сведения о ней...");
        book1.showInfo();
        System.out.print("Заполнение информации о книге вручную\nВведите название книги: ");
        String name = scan.nextLine();
        book1.setName(name);
        System.out.print("Введите имя автора: ");
        String athr = scan.nextLine();
        book1.setAuthor(athr);
        System.out.print("Введите год издания: ");
        int yr = scan.nextInt();
        book1.setYear(yr);
        System.out.print("Введите название издательства: ");
        scan.nextLine();
        String pbl = scan.nextLine();
        book1.setPublisher(pbl);
        System.out.print("Введите код ISBN: ");
        String isbn = scan.nextLine();
        book1.setISBN_code(isbn);
        System.out.print("Введите страну издательству: ");
        String cou = scan.nextLine();
        book1.setCountry(cou);
        System.out.println("Получение информации о книге");
        book1.showInfo();
        System.out.println("Создано несколько переменных\nПолучение значений каждого поля по отдельности");
        String name_ = book1.getName();
        String au = book1.getAuthor();
        int y = book1.getYear();
        String publ = book1.getP();
        String isbn_ = book1.getISBN_code();
        String cntr = book1.getCountry();
        System.out.print("Вывод полученной информации\n");
        System.out.println("Название книги: " + name_);
        System.out.println("Автор: " + au);
        System.out.println("Год издания: " + y);
        System.out.println("Издательство: " + publ);
        System.out.println("Код ISBN: " + isbn_);
        System.out.println("Страна издательства: " + cntr);
        System.out.println("Создание еще одного экземпляра класса с передачей параметров через конструктор");
        MyBook book2 = new MyBook("Java for Dummies", "Barry Berd", 2011, "Dialektika", "00023125-234", "USA");
        System.out.println("Вывод полной информации о второй книге");
        book2.showInfo();
        System.out.println("Тестирование завершено");
    }
}
