
import java.util.*;

public class Program246 {

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

        sobj.close();
    }

}
