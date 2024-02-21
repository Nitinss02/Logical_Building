import marvellous.Addition;
import java.util.*;

public class Program240 {

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;
        System.out.println("Enter first number");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second number");
        iNo2 = sobj.nextInt();
        Artimatic aobj = new Artimatic(iNo1, iNo2);
        iAns = aobj.Addition();
        System.out.println("Addition is : " + iAns);
        sobj.close();
    }

}

/*
 * 
 * 1 : javac -d . Artimatic.java
 * 
 * 2 : javac program240.java
 * 
 * 3 : java program240
 */