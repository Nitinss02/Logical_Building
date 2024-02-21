import java.util.*;

class Artimatic {
    public int iValue1;
    public int iValue2;

    public Artimatic(int A, int B) {
        this.iValue1 = A;
        this.iValue2 = B;
    }

    public int Addition() {
        int iSum = 0;
        iSum = this.iValue1 + this.iValue2;
        return iSum;
    }

}

public class Program239 {

    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;
        System.out.println("Enter first number");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second number");
        iNo2 = sobj.nextInt();
        Artimatic aobj = new Artimatic(iNo1, iNo2);
        iAns = aobj.Addition();
        System.out.println("Addition is : " + iAns);
        sobj.close();
    }

}
