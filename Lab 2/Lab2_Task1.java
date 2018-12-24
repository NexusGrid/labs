package circles;

public class Circle

{
    private float r;
    private float d;
    private float s;
    public Circle()
    {
        r = -1;
        d = -1;
        s = -1;
    }
    public Circle(float rad)
    {
        r = rad;
    }
    public void setRadius(float r_)
    {
        r = r_;
    }
    public float getRadius()
    {
        return r;
    }
    public void calculateDiameter()
    {
        if (r != -1)
            d = r * 2;
        else
            System.out.println("Значение радиуса не назначено, невозможно вычислить диаметр");
    }
    public void calculateArea()
    {
        if (r != -1)
            s = 3.14f * r * r;
        else
            System.out.println("Значение радиуса не задано, невозможно вычислить площадь");
    }
    public float getArea()
    {
        if (s != -1)
            return s;
        else
            return -1;
    }
    public float getDiameter()
    {
        if (d != -1)
            return d;
        else
            return -1;
    }
}
