#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<"I hate";
            if(i+1<=n){
                cout<<" that ";
            }
        }else{
             if(i%2==0){
            cout<<"I love";
            if(i+1<=n){
                cout<<" that ";
            }
        }
    }

}

cout<<" it";
return 0;
}
