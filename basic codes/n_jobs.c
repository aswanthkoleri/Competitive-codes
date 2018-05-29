#include <stdio.h>

int effi[20];
int mat[20][20];
int best[20];
int check(int mask){ //calculate the bits which are set.
    
    int cnt = 0;
    while(mask != 0){
        if(mask & 1){ cnt++; }
        mask = mask/2;
    }
    return cnt;
}
int maxeffi(int mask,int n){    //assign the max possibe efficiency to the mask.

    int num_assigned,i,temp;

    if(effi[mask] != -1){
        return effi[mask];
    }
    if(mask == (1<<n)-1){
        return 0;
    }
    num_assigned = check(mask);
    printf("num_assigned : %d\n",num_assigned);
    for(i = 0;i < n;i++){
        if(mask & (1<<i)){ continue; }

        temp = maxeffi((mask | (1<<i)),n) + mat[num_assigned][i];

        if(temp > effi[mask]){
            effi[mask] = temp;
            best[mask] = i;
        }
    }
    return effi[mask];
}

int main(){
    
    int n,i,j,efficiency,mask;

    scanf("%d",&n);
    for(i = 0;i <= (1<<n)-1;i++){
        effi[i] = -1;
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    efficiency = maxeffi(0,n);
    printf("efficiency : %d\n",efficiency);
    mask = 0;
    while(mask != (1<<n)-1){ //printing the alloted job list.

        printf("%d  ",best[mask]+1);
        mask = mask | (1<<best[mask]); 
    }
    return 0;
}