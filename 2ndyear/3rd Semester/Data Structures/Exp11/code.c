/**
 * Experiment - 11
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Design, Develop and Implement a Program in C for the following
 * operations on Graph(G) of Cities
 * a. Create a Graph of N cities using Adjacency Matrix.
 * b. Print all the nodes reachable from a given starting node in a digraph using
 * DFS/BFS method
 */

#include<stdio.h>
#include<stdlib.h>


int a[20][20],q[20],n,i,j,visited[20],reach[20],count = 0,f = 0,r = 0;

void BFS(int v) {
    q[++r] = v;
    reach[v] = 1;
    while(f <= r) {
        int cur = q[++f];
        for(i = 1;i <= n ;i++){
            if((a[cur][i] == 1)&& (reach[i] == 0)){
                q[++r] = i;
                reach[i] = 1;
                printf("Node %d---->%d\t",cur,i);
            }
        }
    }
}

void DFS(int v) {
    visited[v] = 1;
    for(i = 1;i <= n;i++) {
        if(a[v][i] && !visited[i]) {
            printf("\n%d--->%d",v,i);
            count++;
            DFS(i);
        }
    }
}


void main() {
    int v,ch;
    printf("\nEnter the number of cities :");
    scanf("%d",&n);
    printf("\nEnter the graph data in the form of matrix :\n");
    for(i = 1;i <= n;i++)
        for(j = 1;j <= n;j++)
        scanf("%d",&a[i][j]);
    while(1){
        printf("\n<========== MENU ==========>\n");
        printf("\n1.BFS\n2.DFS\n3.EXIT\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch) {
            case 1 : for(i = 1;i <= n;i++)
                            reach[i] = 0;
                       printf("\nEnter theh source vertex :");
                     scanf("%d",&v);
                     if((v < 1) || (v > n))
                        printf("\nEnter a valid source vertex");
                     else {
                        printf("\nThe reachable nodes from node %d are \n", v);
                        BFS(v);
                     }
                     break;
            case 2 : for(i = 1;i <= n;i++)
                     visited[i] = 0;
                     printf("\nEnter theh source vertex :");
                     scanf("%d",&v);
                     DFS(v);
                     if(count == (n - 1))
                        printf("\nGraph is connected\n");
                     else
                        printf("\nGraph is not connected\n");
                     count = 0;
                     break;
            case 3 : exit(0); break;
            default : printf("\nChoose a valid option\n");
                        break;
        }
    }
}
