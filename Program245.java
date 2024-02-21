
// Input = 5
/*
 * 1 * 2 * 3* 4 
 */
import java.util.*;

public class Program245 {
    public static void Display(int iNo) {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            System.out.print(iCnt + "\t*\t");
        }
    }

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();
    }

}
