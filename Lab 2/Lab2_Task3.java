package books;

public class MyBook
{
    private String name;
    private String author;
    private int year;
    private String publisher;
    private String isbn_code;
    private String country;
    MyBook()
    {
        name = "не назначено";
        author = "не назначено";
        year = -1;
        publisher = "не назначено";
        isbn_code = "не назначено";
        country = "не назначено";
    }
    MyBook(String n, String a, int y, String p, String isbn, String c)
    {
        name = n;
        author = a;
        year = y;
        publisher = p;
        isbn_code = isbn;
        country = c;
    }
    public String getName()
    {
        return name;
    }
    public String getAuthor()
    {
        return author;
    }
    public int getYear()
    {
        return year;
    }
    public String getP()
    {
        return publisher;
    }
    public String getISBN_code()
    {
        return isbn_code;
    }
    public String getCountry()
    {
        return country;
    }
    public void setName(String n)
    {
        name = n;
    }
    public void setAuthor(String a)
    {
        author = a;
    }
    public void setYear(int y)
    {
        year = y;
    }
    public void setPublisher(String p)
    {
        publisher = p;
    }
    public void setISBN_code(String c)
    {
        isbn_code = c;
    }
    public void setCountry(String co)
    {
        country = co;
    }
    public void showInfo()
    {
        System.out.print("Название книги: ");
        System.out.println(name);
        System.out.print("Автор: ");
        System.out.println(author);
        System.out.print("Год выпуска: ");
        if (year == -1)
            System.out.println("не назначено");
        else
            System.out.println(year);
        System.out.print("Издательство: ");
        System.out.println(publisher);
        System.out.print("Код ISBN: ");
        System.out.println(isbn_code);
        System.out.print("Страна: ");
        System.out.println(country);
    }
}
