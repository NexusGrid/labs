package mydishes;

public class Cup extends Dish
{
    private double amount;
    private boolean transparent;
    Cup()
    {
        super();
        amount = 0;
        transparent = false;
    }
    Cup(double amount, boolean transparent)
    {
        super("ceramic", "red", false);
        this.amount = amount;
        this.transparent = transparent;
    }
    public void setAmount(double amount)
    {
        this.amount = amount;
    }
    public double getAmount()
    {
        return amount;
    }
    public void displayInfo()
    {
        String s = "Material is " + material + ", color is " + color + ", amount = " + String.valueOf(amount) + ", ";
        if (transparent)
            s = s + "transpaernt, ";
                    else
                        s = s + "not transparent, ";
        if (old_fashioned)
            s = s + "old fashioned";
        else
            s = s + "not old fashioned";
        System.out.println(s);
    }
}
