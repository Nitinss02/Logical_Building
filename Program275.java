
// write a program  to toggle the 7th bit of a Number;
import java.util.*;

public class Program275 {
    public static int ToggleBit(int iNo) {
        int iMask1 = 0X00004000; // 15th bit
        int iResult1 = 0;

        iResult1 = iNo ^ iMask1;

        return iResult1;

    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);

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