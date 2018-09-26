#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int flag=0;
        for(int i=0;i<n-1;i+=2){
            if(ar[i]!=ar[i+1]){
                cout<<ar[i]<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<ar[n-1]<<endl;
        }
    }
	return 0;
}