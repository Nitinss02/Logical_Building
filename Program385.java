import java.util.*;

class Matrix {
    public int Arr[][];

    public Matrix(int A, int B) {
        Arr = new int[A][B];
    }

    public void Accept() {
        System.out.println("Enter the elements");
        Scanner sobj = new Scanner(System.in);
        int i, j;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() {
        int i, j;
        System.out.println("Entered elements are : ");
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[i][j] + "    ");
            }
            System.out.println();
        }
    }

    public int Summation() {
        int i, j, iSum = 0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }
}

public class Program385 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iRow, icol, iRet;
        System.out.println("Enter Number of row");
        iRow = sobj.nextInt();
        System.out.println("Enter Number of Colomn");
        icol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, icol);
        mobj.Accept();
        mobj.Display();
        iRet = mobj.Summation();
        System.out.println("The Summation of all the matrix are : " + iRet);
        sobj.close();

    }
}
