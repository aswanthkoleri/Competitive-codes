#include <stdio.h>
#include <stdbool.h> 

long int result[52][252];
bool calc[52][252];
long solve(int i,int target,int denominations,int *d)
{
    if(target<0)
    return 0;
    if(target==0)
    return 1;
    if(i>denominations)
    return 0;
    if(calc[i][target]==false){
        result[i][target] = solve(i,target-d[i],denominations,d) + solve(i+1,target,denominations,d);
        calc[i][target]=true;/* This is used for dynamic programming. What it does is that 
        ,it store the whether the tuple (i,target) is already calculated.*/
    }
    return result[i][target];
}

int main()
{
    int target,denominations; 
    scanf("%d %d",&target,&denominations);
    int j,k;
    int d[denominations+1];
    int i;
    for(i=1;i<=denominations;i++){
        scanf("%d",&d[i]);
    }
    long int answer = solve(1,target,denominations,d);
    printf("%ld",answer);
    return 0;
}