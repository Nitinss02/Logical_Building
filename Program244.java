
import java.util.*;

public class Program244 {
    public static void EventOddFactorial(int iNo) {

        int iCnt = 1;
        int iSumEven = 0;
        int iSumOdd = 0;
        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            if ((iNo % iCnt) == 0) {
                if (iCnt % 2 == 0) {
                    iSumEven = iSumEven + iCnt;
                } else {
                    iSumOdd = iSumOdd + iCnt;
                }
            }
        }
        System.out.println("Addtion of Even Factor is : " + iSumEven);
        System.out.println("Addtion of Odd Factor is : " + iSumOdd);

    }

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        EventOddFactorial(iValue);

        sobj.close();
    }

}
