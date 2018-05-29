#include <stdio.h>
int max(int a,int b){
   return (a>b)? a:b ; 
}
int knapsack(int *val,int *wt,int n,int W){
    int k[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(i==0 || w==0){
                k[i][w]=0;
            }
            else if(wt[i-1]<=w){
                k[i][w]=max(val[i-1] + k[i-1][w -wt[i-1]],k[i-1][w]);
            }
            else{
                k[i][w]=k[i-1][w];
            }
        }
    }
    return k[n][W];
}


void main(){
    printf("Enter no of weights : \n");
    int n;
    scanf("%d",&n);
    int val[n],wt[n];
    printf("Enter the weights and their values : \n");
    for(int i=0;i<n;i++)
    scanf("%d %d",&val[i],&wt[i]);
    int W;
    printf("Enter the max Weight : \n");
    scanf("%d",&W);
    /* Now execute the knapsack algo */
    int ans=knapsack(val,wt,n,W);
    printf("The max value is : \n%d",ans);
}