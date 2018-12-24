package mypackage;

public class Square extends Rectangle
{
    protected double side;
    Square()
    {
        color = "not defined";
        filled = false;
        side = 0;
    }
    Square(double side)
    {
        color = "not defined";
        filled = false;
        this.side = side;
    }
    Square(double side, String color, boolean filled)
    {
        color = "not defined";
        filled = false;
        this.side = side;
        this.color = color;
        this.filled = filled;
    }

    public double getSide() {
        return side;
    }

    public void setSide(double side) {
        this.side = side;
    }
    public String toString_()
    {
        String s = "Side = " + String.valueOf(side);
        return s;
    }
}
