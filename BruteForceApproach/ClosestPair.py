import java.util.*;

public class ClosestPair {

   public static void main(String[] args) {

      int n;
      Scanner in=new Scanner(System.in);
      System.out.print("enter number of points:");
      n=in.nextInt();
      int[][] arr = new int[n][2];
      for(int i=0;i<arr.length;i++){
        System.out.print("enter point:"+i+":");
         for(int j=0;j<arr.length-1;j++){
            arr[i][j]=in.nextInt();
         }
      }
      int x1, y1, x2, y2;
      double d= Integer.MAX_VALUE;
      int[][] res=new int[2][2];
      for (int i = 0; i < arr.length - 1; i++) {
        for (int j = i + 1; j < arr.length; j++) {
            x1 = arr[i][0];
            y1 = arr[i][1];
            x2 = arr[j][0];
            y2 = arr[j][1];

            double d1 = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
            if(d1<d){
               d=d1;
               res[0][0]=arr[i][0];
               res[0][1]=arr[i][1];
               res[1][0]=arr[j][0];
               res[1][1]=arr[j][1];
            }
         }
      }
       System.out.println("closest pair is");
       for (int i = 0; i < res.length ; i++) {

          System.out.println(i+")"+"("+res[i][0]+","+res[i][1]+")");
       }
      System.out.printf("Closest pair distance: %.3f%n", d);

   }
}
