#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count = k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int margin = ar[k-1];
    if(margin == 0 ){
        count=0;
        for(int i=0;i<k-1;i++){
            if(ar[i]!=0)
            count++;
        }
        cout<<count;
        return 0;
    }
    for(int i=k;i<n;i++){
        if(ar[i]>= margin){
            count++;
        }
    }
    cout<<count;
    return 0;

}
