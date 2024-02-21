
import java.util.*;

public class Program278 {
    public static boolean CheckBit(int iNo, int iPos) {
        int iMask = 0X00000001; // 15th bit
        int iResult = 0;

        iMask = iMask << (iPos - 1);
        iResult = iNo & iMask;
        if (iResult == iMask) {
            return true;

        } else {
            return false;
        }

    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        boolean bRet = false;
        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();
        System.out.println("Enter the Position");
        iPos = sobj.nextInt();

        bRet = CheckBit(iNo, iPos);

        if (bRet == true) {
            System.out.println("Bit is on at the given Position");
        } else {
            System.out.println("Bit is off at given Position");
        }
        sobj.close();
    }

}

/*
 * 
 * no = 889;
 * 
 * input 1 1 0 1 1 1 1 0 0 1
 * 
 * Mask 0 0 0 0 0 0 1 0 0 0 ^
 * ----------------------------
 * result 1 1 0 1 1 1 0 0 0 1
 * 
 * no = 98
 * 
 * input 1 1 0 |0| 0 1 0
 * 
 * Mask 0 0 0 |1| 0 0 0 ^
 * ----------------------------
 * result 1 1 0 |1| 0 1 0
 * 
 * 
 */