
import java.util.*;

public class Program257 {
    public static int CountCapital(String str) {
        int iCnt = 0, iCount = 0;
        char Arr[] = str.toCharArray();
        for (iCnt = 0; iCnt < str.length(); iCnt++) {
            if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z') {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        String str = null;
        int iRet = 0;
        System.out.println("enter your name");
        str = sobj.nextLine();
        iRet = CountCapital(str);
        System.out.println("The total Capital latter are : " + iRet);
        sobj.close();

    }

}
