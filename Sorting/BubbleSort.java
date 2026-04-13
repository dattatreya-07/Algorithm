import java.util.*;
public class Bubsort{
public static void main(String[] args){
   int n,i,j,min,t;
   System.out.println("Enter the number of elements:");
   Scanner in=new Scanner(System.in);
   n=in.nextInt();
   int[] a=new int[n];
   System.out.println("Enter the array of elements:");
   for(i=0;i<n;i++){
      a[i]=in.nextInt();
   }
   for(i=0;i<=n-2;i++){
      for(j=0;j<=(n-2)-i;j++){
         if(a[j+1]<a[j]){
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
}}
   for(int k=0;k<n;k++){
       System.out.print(a[k]+" ");
   }
   System.out.println();
}
   System.out.println();
   for(i=0;i<n;i++){
       System.out.print(a[i]+" ");
   }
}
}
