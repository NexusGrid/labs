package ru.mirea.nexus;

public class Car implements Lab4_Priceable
{
    int price;
    Car(int price)
    {
        this.price = price;
    }
    public int getPrice()
    {
        return price;
    }
}
