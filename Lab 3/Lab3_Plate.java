package mydishes;

public class Plate extends Dish
{
    private double area;
    private boolean images;
    Plate()
    {
        super();
        area = 0;
        images = false;
    }
    Plate(double area, boolean images)
    {
        super("glass", "blue", false);
        this.area = area;
        this.images = images;
    }
    public double getArea()
    {
        return area;
    }
    public void displayInfo()
    {
        String s = "Area = " + String.valueOf(area) + ", material is " + material + ", color is " + color + ", ";
        if (old_fashioned)
            s = s + "old fashioned, ";
        else
            s = s + "not old fashioned, ";
        if (images)
            s = s + "there are images";
        else
            s = s + "there are no images";
        System.out.println(s);
    }
}
