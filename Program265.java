
import java.util.*;

public class Program265 {
    public static boolean checkBit(int iNo) {
        int iMask1 = 260;
        int iResult1 = 0;

        iResult1 = iNo & iMask1;

        if (iResult1 == iMask1) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;
        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        bRet = checkBit(iNo);
        if (bRet == true) {
            System.out.println("3rd & 9th bit is ON");
        } else {
            System.out.println(" bits is OFF");
        }

    }

}
