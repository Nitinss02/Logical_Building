import java.util.*;

class Matrix {
    protected int Arr[][];

    public Matrix(int A, int B) {
        Arr = new int[A][B];
    }

    protected void finalize() {
        Arr = null;
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

}

class myMatrix extends Matrix {
    public myMatrix(int A, int B) {
        super(A, B);
    }

    public int Maximum() {
        int i, j;
        int iMax = Arr[0][0];
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                if (Arr[i][j] > iMax) {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }

    public int Minimum() {
        int i, j;
        int iMax = Arr[0][0];
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                if (Arr[i][j] < iMax) {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }
}

public class Program388 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iRow, icol, iRet;
        System.out.println("Enter Number of row");
        iRow = sobj.nextInt();
        System.out.println("Enter Number of Colomn");
        icol = sobj.nextInt();

        myMatrix mobj = new myMatrix(iRow, icol);
        mobj.Accept();
        mobj.Display();
        iRet = mobj.Maximum();
        System.out.println("The miximum element is : " + iRet);
        iRet = mobj.Minimum();
        System.out.println("The minimum element is : " + iRet);

        mobj = null;
        System.gc();
        sobj.close();

    }
}
