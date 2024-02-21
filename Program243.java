
import java.util.*;

public class Program243 {
    public static void EventOddFactorial(int iNo) {
        int iFact = 1;
        int iCnt = 1;
        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            if ((iNo % iCnt) == 0) {
                if (iCnt % 2 == 0) {
                    System.out.println("Even factor is : " + iCnt);
                } else {
                    System.out.println("Odd factor is  : " + iCnt);
                }
            }
        }
    }

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iAns = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        EventOddFactorial(iValue);

        sobj.close();
    }

}
