import java.io.*;
import java.net.*;
import java.util.*;
class Palindrome
{
public static void main(String[] args)
{
int n,rem,rev=0;
int a;
Scanner scan=new Scanner(System.in);
n=scan.nextInt();
a=n;
while(n!=0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
if(a==rev)
{
System.out.print("Number is Palindrome");
}
else
{
System.out.print("Number is Not Palindrome");
}
}
}
