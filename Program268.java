
import java.util.*;

public class Program268 {
    public static boolean checkBit(int iNo) {
        int iMask = 0X00010000;
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
            System.out.println("17th bit is ON");
        } else {
            System.out.println("17th bit is OFF");
        }

    }

}

/*
 * Bit Position 17
 * 
 * 0000 0000 0000 0000 0000 0000 0000 0000
 * 0 0 0 1 0 0 0 0
 * 
 * 0X00010000
 */