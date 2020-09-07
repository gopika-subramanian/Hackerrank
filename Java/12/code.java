import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        int a,b;
        Scanner sc =new Scanner(System.in);
        try{
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println(a/b);
        }
        catch(InputMismatchException e)
        {
            System.out.println(e.getClass().getName());
        }
        catch(ArithmeticException e)
        {
            System.out.println(e.getClass().getName()+": / by zero");
        }
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}

