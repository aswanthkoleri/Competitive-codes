#include <stdio.h>
#include <stdlib.h>
/* Base code C */
int main(){
    int n;
    long long int ar[1000001];
    scanf("%d",&n);
    /*  accept input  */
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%lld ",ar[i]);
    }
    int temp[1000001];
    /* process input */
    /* for each i there is an x */
    for(int i=0;i<n;i++){
        int max=-1,min=-1;
        /* Compute X */
       for(int j=i-1;j>=0;j--)
       {
           if(ar[j]>ar[i])
           {
               max=j+1;
               break;
           }
       }
       /* Compute y  */
       for(int j=i+1;j<n;j++)
       {
           if(ar[j]>ar[i]){
                min=j+1;
                break;
           }
       }
      
      printf("%d ",max+min);
    }
    /* for(int i=0;i<n;i++)
    {
        printf("%d ",temp[i]);
    } */
    return 0;
}