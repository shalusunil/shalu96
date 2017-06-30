import java.io.*;
import java.net.*;
import java.util.*;
class Mul
{
public static void main(String[] args)
{
int a,mul=0;
Scanner s=new Scanner(System.in);
a=s.nextInt();
for(int i=0;i<10;i++)
{
mul+=a;
System.out.println(a+"*"+(i+1)+"="+mul);
}
}
}
