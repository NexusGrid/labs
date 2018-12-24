package author;

import java.lang.System;

public class AuthorTest
{
    public static void main(String[] args)
    {
        Author auth = new Author("John", "mynameisjohn@john.com", 'M');
        String info = auth.toString();
        System.out.println(info);
        Author auth1 = new Author();
        String hisname = auth1.getName();
        System.out.print("Имя автора: ");
        System.out.println(hisname);
        auth1.setEmail("newmail@default.com");
        String info2 = auth1.toString();
        System.out.println(info2);
    }
}
