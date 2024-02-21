
import java.util.*;

public class Program250 {

    public static int Addition(int Brr[]) {
        int iCnt = 0;
        int iSum = 0;
        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            iSum = iSum + Brr[iCnt];
        }
        return iSum;

    }

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        int iSize = 0, iCnt = 0, iRet = 0;
        System.out.println("Enter the Number of Elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("enter the Elements : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = Addition(Arr);
        
        System.out.println("Addition of All elements is : "+iRet);
        sobj.close();

    }

}
