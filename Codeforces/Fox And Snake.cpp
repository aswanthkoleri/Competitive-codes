#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ar[i][j]='.';
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
            if(i%2 == 0){
            continue;
            }
            else if(i%2 == 1 && flag%2==0){
                ar[i][m-1]='#';
                flag++;
            }else if(i%2 == 1 && flag%2 == 1){
                ar[i][0]='#';
                flag++;
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){cout<<"#";}else{
            cout<<ar[i][j];
            }
            }
            cout<<endl;
        }
        
    }
