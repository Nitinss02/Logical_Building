
// write a program  to toggle the 7th bit of a Number;
import java.util.*;

public class Program277 {
    public static int OffBit(int iNo, int iPos) {
        int iMask = 0X00000001; // 15th bit
        int iResult = 0;

        iMask = iMask << (iPos - 1);
        iResult = iNo & iMask;
        if (iResult == iMask) {
            return (iNo ^ iMask);

        } else {
            return iNo;
        }

    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        int iRet = 0;
        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();
        System.out.println("Enter the Position");
        iPos = sobj.nextInt();

        iRet = OffBit(iNo, iPos);

        System.out.println("Updated code is " + iRet);
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