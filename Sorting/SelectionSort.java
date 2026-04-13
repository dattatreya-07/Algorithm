import java.util.*;
public class Selsort{
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
      min=i;
      for(j=i+1;j<=n-1;j++){
         if(a[j]<a[min]){
            min=j;
         }
      }
      t=a[i];
      a[i]=a[min];
      a[min]=t;
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
