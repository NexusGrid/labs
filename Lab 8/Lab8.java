pacakge ru.mirea.leo;

import java.io.*;

public class ShowFile
{
    public static void main(String[] args)
    {
        if (args.length < 1)
        {
            System.out.println("Usage: ShowFile.exe <path to file>");
            return;
        }
        try (FileReader reader = new FileReader(args[0])) {
            int c;
            while ((c = reader.read()) != -1)
            {
                System.out.print((char) c);
            }
        } catch (IOException ex) {
            System.out.println(ex.getMessage());
        }
    }
}
