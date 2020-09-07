import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void main(String[] args) {
        String str=new String();

       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       List<Integer>list=new ArrayList();
       for(int i=0;i<n;i++)
       {
           int val = sc.nextInt();
           list.add(val);
       }
       int query = sc.nextInt();
      
       for(int i=1;i<=query;i++)
       {
            
           str = sc.next();            
           if(str.equals("Insert"))
           {
               int ind = sc.nextInt();
               int value = sc.nextInt();
               list.add(ind,value);
           }
           else if(str.equals("Delete"))
           {
               
               int id = sc.nextInt();
              list.remove(id);
              
           }
       }
       for(Integer j:list)
       {
           System.out.print(j+" ");
       }
    }
}

