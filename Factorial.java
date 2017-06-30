import java.io.*;
import java.net.*;
import java.util.*;
class Factorial
{
public static void main(String[] args)
{
int i,fact=1;
int n;
Scanner sc=new Scanner(System.in);
System.out.println("Enter a value:");
n=sc.nextInt();
for(i=1;i<=n;i++)
{
fact=fact*i;
}
System.out.println("Factorial of"+n+"is:"+fact);
}
}
