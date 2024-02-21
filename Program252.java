
import java.util.*;

public class Program252 {

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        String str = null;
        System.out.println("enter your name");
        str = sobj.nextLine();

        System.out.println("Your Name is : " + str);

        System.out.println("Lenght of your name is : " + str.length());

        sobj.close();

    }

}
