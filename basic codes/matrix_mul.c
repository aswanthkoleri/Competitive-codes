#include <stdio.h>
#include <limits.h>

int datab[100][100],dimension[101];

int min_mul(int start,int end){

    int i,temp,min=INT_MAX;
    if(datab[start][end] != -1){ return datab[start][end]; }
    if(end == start+1){
        datab[start][end] = dimension[start]*dimension[end]*dimension[end+1];
        return datab[start][end];
    }
    for(i = start;i < end;i++){
        temp = min_mul(start,i)+min_mul(i+1,end)+dimension[start]*dimension[i+1]*dimension[end+1];
        if(temp < min){
            min = temp;
        }
    }
    datab[start][end] = min;
    return min;
}
int main(){
    
    int n,i,j,mul_req;

    scanf("%d",&n);
    for(i = 0;i < n;i++){
        for(j = i+1;j < n;j++){
            datab[i][j] = -1;
        }
    }
    for(i = 0;i <= n;i++){
        scanf("%d",&dimension[i]);
        datab[i][i] = 0;
    }
    mul_req = min_mul(0,n-1);
    printf("Ans = %d",mul_req);
    return 0;
}