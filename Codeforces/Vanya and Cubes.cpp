#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=1;
    int sum =0;
    for(int i=0;i<=10000;i++){
        sum+=(i*(i+1))/2;
       /*  cout<<sum;
        cout<<endl; */
        if(sum<=n){
            /* cout<<"run"; */
            max=i;
        }
        else{
            break;
        }
    }
    cout<<max;
    return 0;   
}
