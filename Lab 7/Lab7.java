package ru.mirea.nexus;

import java.util.ArrayList;

public class Collect
{
    public static void main(String[] args) {
        ArrayList<String> cities = new ArrayList<String>();
        System.out.println("Создан список элементов типа String. Добавляем в него новые элементы...");
        cities.add("Moscow");
        cities.add("Brussels");
        cities.add("New York");
        cities.add("Toronto");
        cities.add("Kingston");
        cities.add("Minsk");
        System.out.println("Выведем все элементы списка");
        for (int i = 0; i < cities.size(); i++)
        {
            System.out.println(cities.get(i));
        }
        System.out.println("Получаем и выводим содержимое второго и третьего элементов списка...");
        String city = cities.get(2);
        String city1 = cities.get(3);
        System.out.println("Город под индексом 2: " + city);
        System.out.println("Город под индексом 3:" + city1);
        System.out.println("Пробуем получить индекс элемента Toronto...");
        System.out.println("Индекс города Toronto: " + cities.lastIndexOf("Toronto"));
        System.out.println("Удаляем из списка города Kingston и Brussels, выводим отредактированный список...");
        cities.remove("Brussels");
        cities.remove("Kingston");
        for (int i = 0; i < cities.size(); i++)
            System.out.println(cities.get(i));
        System.out.println("Заменим один из элементов и выведем новый список...");
        cities.set(3, "London");
        for (int i = 0; i < cities.size(); i++)
            System.out.println(cities.get(i));
        System.out.println("Тестирование успешно завершено!");
    }
}
