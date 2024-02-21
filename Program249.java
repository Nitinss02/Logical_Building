
import java.util.*;

public class Program249 {

    public static void Display(int Brr[]) {
        int iCnt = 0;
        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            System.out.print(Brr[iCnt] + "\t");
        }
        System.out.println();
    }

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        int iSize = 0, iCnt = 0;
        System.out.println("Enter the Number of Elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("enter the Elements : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        Display(Arr);
        System.out.println();
        sobj.close();

    }

}
