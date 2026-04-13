import java.util.*;
public class Strsearch{
   public static void main(String[] args){
      Scanner in=new Scanner(System.in);
      String str;
      String key;
      System.out.println("Enter a string:");
      str=in.next();
      System.out.println("Enter a key to search:");
      key=in.next();
      int n= str.length();
      int m= key.length();
      for(int i=0;i<=n-m;i++){
         int j;
         for(j=0;j<m;j++){
            if(str.charAt(i+j)!=key.charAt(j)){
               break;
            }
         }
         if(j==m){
            System.out.println("key is found in the index:"+i);
         }
      }
   }
}
