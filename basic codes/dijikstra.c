#include <stdio.h>
#include <limits.h>

int index_min_dis(int stdis[],int spSet[],int n){
    int min,i,index = 0 ;

    min = INT_MAX;
    for(i = 0;i < n;i++){
        if((stdis[i] < min) && (spSet[i] == 0)){
            min = stdis[i];
            index = i;
        }
    }
    return index;
}
int main(){
    
    int n,count,e1,e2,length,i,j,min_edge,flag = 0;
    int stdis[100],distane[100][100],spSet[100];

    scanf("%d",&n);
    stdis[0] = 0;
    spSet[0] = 0;
    for(i = 1;i < n;i++){
        stdis[i] = INT_MAX;
        spSet[i] = 0;
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            distane[i][j] = INT_MAX;
        }
    }
    scanf("%d",&count);
    for(i = 0;i < count;i++){
        scanf("%d %d %d",&e1,&e2,&length);
        distane[e1][e2] = length;
    }
    while(1){
        for(i = 0;i < n;i++){
            if(spSet[i] == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){ break; }
        

        min_edge = index_min_dis(stdis,spSet,n);
        printf("min_edge = %d\n",min_edge);

        spSet[min_edge] = 1;
        for(i = 0;i < n;i++){
            if((spSet[i] == 0) && (distane[min_edge][i] != INT_MAX)){
                if(stdis[min_edge]+distane[min_edge][i] < stdis[i]){
                    stdis[i] = stdis[min_edge]+distane[min_edge][i];
                }
            }
        }
        flag = 0;
    }
    for(i = 0;i < n;i++){
        printf("%d  ",stdis[i]);
    }
    return 0;
}