
// write a program  to toggle the 7th bit of a Number;
import java.util.*;

public class Program276 {
    public static int ToggleBit(int iNo, int iPos) {
        int iMask = 0X00000001; // 15th bit
        int iResult1 = 0;

        iMask = iMask << (iPos - 1);
        iResult1 = iNo ^ iMask;

        return iResult1;

    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        int iRet = 0;
        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();
        System.out.println("Enter the Position");
        iPos = sobj.nextInt();
        sobj.close();
        iRet = ToggleBit(iNo, iPos);

        System.out.println("Updated code is " + iRet);

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