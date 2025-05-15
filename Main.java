
// java.utils;

// class Main {


//     public static void main(String args[])
//     {
//           System.out.println("Hello Vipul");
//           System.err.println("hello");
          
//     }

// }

//graph here we started 
// import java.util.Scanner;
// class Main{
//     public static void main(String args[])
//     {
//         Scanner sc = new Scanner(System.in);
//         int n ,m;
//         n = sc.nextInt();
//         m = sc.nextInt();
//       int adj [][]=new int[n][n];
//         for(int i=0;i<m;i++)
//         {
//             int u = sc.nextInt();
//             int v = sc.nextInt();
//             adj[u][v]=1;
//             adj[v][u]=1;
//         }

//         sc.close();
         
//     }
// }
  
// import java.util.ArrayList;
// import java.util.Scanner ;
// import java.lang.Integer ;

// class Main
// {
//     public static void main(String args[])
//     {
//         Scanner sc = new Scanner(System.in);
//         ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
//           int n = sc.nextInt(); 
//         int m = sc.nextInt();
//         for(int i=0;i<n;i++)
//         {
//             adj.add(new ArrayList<>());
//         }

//         for(int i=0;i<m;i++)
//         {
//                int u = sc.nextInt(); // number of nodes
//         int v = sc.nextInt();
//              adj.get(u).add(v);
//              adj.get(v).add(u);
//         }
//         System.out.println("Adjacency List:");
//         for(int i=0;i<n;i++)
//         {
//              System.out.print(i + " -> ");
//             for(int neighbor: adj.get(i))
//             {
//                  System.out.print(neighbor+" ");
//             }
//             System.out.println();
//         }
//         sc.close();
//     }
// }
import java.util.*;
// class Main{
// public ArrayList<Integer> bfs(ArrayList<ArrayList<Integer>> adj)
//     {
//         // code here
//         int n = adj.size();
//         ArrayList<Integer> ans = new ArrayList<>();
//         int vis[]=new int[n];
//         Queue<Integer> q = new LinkedList<>();
//         q.add(0);
//         vis[0]=1;
//         while(!q.isEmpty())
//         {
//             int node = q.poll();
//             ans.add(node);
            
//             for(int i=0;i<adj.get(node).size();i++)
//             {
//                 int neighbour = adj.get(node).get(i);
//                 if(vis[neighbour]!=1)
//                 {
//                    vis[neighbour]=1;
//                    q.add(neighbour);
//                 }
//             }
//         }
//         return ans;
//     }
// }

class Main{
    void dfs(ArrayList<ArrayList<Integer>> adj,int node , int vis[], ArrayList<Integer> ans)
    {
        
        ans.add(node);
        vis[node]=1;
        for(int i=0;i<adj.get(node).size();i++)
        {
            int neighbour = adj.get(node).get(i);
            if(vis[neighbour]!=1)
            {
                dfs(adj,neighbour,vis,ans);
            }
        }
        return ;
    }
    public ArrayList<Integer> dfs(ArrayList<ArrayList<Integer>> adj) {
        // Code here
        int n = adj.size();
       int vis []= new int[n];
       ArrayList<Integer> ans = new ArrayList<>();
         dfs(adj,0,vis,ans);
         return ans;
    }
}