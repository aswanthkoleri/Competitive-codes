#include<bits/stdc++.h>
using namespace std;
int mod(int a){
    if(a<0){
        return -1*a;
    }
    else
    {
        return a;
    }
}
int main(){
    int a[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        cin>>a[i][j];
    
    /* Find coordinate of 1 */
    int c1,c2;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                c1=i;
                c2=j;
                break;
            }
        }
    }
    /* No of moves  */
    int result;
    result= mod(c1 - 2)+mod(c2 - 2);
    cout<<result<<endl;
    return 0;
}