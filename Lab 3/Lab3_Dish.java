package mydishes;

public abstract class Dish
{
    String material;
    boolean old_fashioned;
    String color;
    Dish()
    {
        material = "not specified";
        color = "not specified";
        old_fashioned = false;
    }
    Dish(String material, String color, boolean of)
    {
        this.material = material;
        this.color = color;
        old_fashioned = of;
    }
    public abstract void displayInfo();
}
