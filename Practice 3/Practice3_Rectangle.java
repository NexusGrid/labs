package mypackage;

import org.w3c.dom.css.Rect;

public class Rectangle extends Shape
{
    protected double width;
    protected double length;
    Rectangle()
    {
        width = 0;
        length = 0;
    }
    Rectangle(double width, double length)
    {
        this.width = width;
        this.length = length;
    }
    Rectangle(double width, double length, String color, boolean filled)
    {
        this.width = width;
        this.length = length;
        this.color = color;
        this.filled = filled;
    }

    public double getWidth() {
        return width;
    }
    public void setWidth(double width)
    {
        this.width = width;
    }
    public double getLength()
    {
        return length;
    }
    public void setLength(double length)
    {
        this.length = length;
    }
    public double getArea()
    {
        return width * length;
    }
    public double getPerimeter()
    {
        return width * 2 + length * 2;
    }
    public String toString_()
    {
        String s = "Width = " + String.valueOf(width) + ", length = " + String.valueOf(length) + ", perimeter = " + String.valueOf(getPerimeter()) + ", area = " + String.valueOf(getArea());
        return s;
    }
}
