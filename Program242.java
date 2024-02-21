
import java.util.*;

public class Program242 {
    public static int Factorial(int iNo) {
        int iFact = 1;
        int iCnt = 1;
        while (iCnt <= iNo) {
            iFact = iFact * iCnt;
            iCnt++;
        }
        return iFact;
    }

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iAns = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iAns = Factorial(iValue);

        System.out.println("Factorial is : " + iAns);
        sobj.close();
    }

}
