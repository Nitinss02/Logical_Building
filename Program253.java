
import java.util.*;

public class Program253 {

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        String str = null;
        System.out.println("enter your name");
        str = sobj.nextLine();
        sobj.close();
        int iCnt = 0;
        for (iCnt = 0; iCnt < str.length(); iCnt++) {
            System.out.println(str.charAt(iCnt));
        }

    }

}
