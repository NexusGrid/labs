package mypackage;

public class Circle extends Shape
{
    protected double radius;
    Circle()
    {
        color = "not defined";
        filled = false;
        radius = 0;
    }
    Circle(double radius)
    {
        this.radius = radius;
    }
    Circle(double radius, String color, boolean filled)
    {
        this.radius = radius;
        this.color = color;
        this.filled = filled;
    }
    public double getRadius()
    {
        return radius;
    }
    public void setRadius(double radius)
    {
        this.radius = radius;
    }
    public double getArea()
    {
        return radius * radius * 3.14;
    }
    public double getPerimeter()
    {
        return 2 * 3.14 * radius;
    }
    public String toString_()
    {
        String s = "Radius of this circle is " + String.valueOf(radius) + ", area = " + String.valueOf(getArea()) + ", perimeter = " + String.valueOf(getPerimeter());
        return s;
    }
}
