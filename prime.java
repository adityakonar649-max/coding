//to make a program to display prime numbers
import java.util.*;
public class prime
{
    public static void main(String args[])
    {
        Scanner scr=new Scanner(System.in);
        System.out.println("Enter a number");
        int a=scr.nextInt();
        int k=0;
        for(int i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                k++;
            }
        }
        if(k==2)
            System.out.println("Prime number");
        else
            System.out.println("Not a prime number");
    }
}