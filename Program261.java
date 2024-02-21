
import java.util.*;

public class Program261 {
    public static boolean checkBit(int iNo) {
        int iMask = 4;
        int iResult = 0;

        iResult = iNo & iMask;
        if (iResult == iMask) {
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
            System.out.println("3rd bit is ON");
        } else {
            System.out.println("3rd bit is OFF");
        }

    }

}
