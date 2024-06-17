import java.util.Scanner;

class Demo
{
    int findFactorial(int iNo)
    {
        int iFact=1;

        for(int i=1;i<=iNo;i++)
        {
            iFact=iFact*i;
        }
       return iFact;
    }
}
class Factorial
{

    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;

        System.out.println("Enter the number");

        iNo=sobj.nextInt();

        Demo dobj=new Demo();
        int iRet=dobj.findFactorial(iNo);

        System.out.println("Factorial of" + iNo+ "is" +iRet);
       
       sobj.close();
    }
}