package ru.mirea.nexus
public class UOP
{
    public static void main(String[] args) {
        Computer comp = new Computer(1000);
        Car car = new Car(100000);
        Horse horse = new Horse(20000);
        int compp = comp.getPrice();
        int carp = car.getPrice();
        int horsep = horse.getPrice();
        System.out.println("Цена компьютера: $" + String.valueOf(compp));
        System.out.println("Цена машины: $" + String.valueOf(carp));
        System.out.println("Цена лошади: $" + String.valueOf(horsep));
    }
}
