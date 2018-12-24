package ru.mirea.nexus;

public class Computer implements Lab4_Priceable
{
    private int price;
    Computer(int price)
    {
        this.price = price;
    }
    public int getPrice() {
        return price;
    }
}
