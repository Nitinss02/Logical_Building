
import java.util.*;

public class Program255 {

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        String str = null;
        System.out.println("enter your name");
        str = sobj.nextLine();
        sobj.close();

        char Arr[] = str.toCharArray();

        int iCnt = 0;
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            System.out.println(Arr[iCnt]);
        }

    }

}
