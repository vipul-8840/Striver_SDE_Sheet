
// java.utils;

// class Main {


//     public static void main(String args[])
//     {
//           System.out.println("Hello Vipul");
//           System.err.println("hello");
          
//     }

// }

//graph here we started 
import java.util.Scanner;
class Main{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n ,m;
        n = sc.nextInt();
        m = sc.nextInt();
      int adj [][]=new int[n][n];
        for(int i=0;i<m;i++)
        {
            int u = sc.nextInt();
            int v = sc.nextInt();
            adj[u][v]=1;
            adj[v][u]=1;
        }

        sc.close();
         
    }
}
  