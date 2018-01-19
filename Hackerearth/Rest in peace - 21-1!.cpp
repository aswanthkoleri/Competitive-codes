#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
        cin>>t;
        while(t--){
                char a[1000001];
                cin>>a;
                int flag=0;
                for(int i=0;i<strlen(a);i++){
                    if(a[i]=='2'){
                        if(a[i+1]=='1'){
                            cout<<"The streak is broken!"<<endl;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0){
                    int sum=0;
                    for(int i=0;i<strlen(a);i++){
                        sum=sum*10;
                        sum=sum+(a[i]-48);
                    }
                    if(sum%21==0){
                        cout<<"The streak is broken!"<<endl;
                        flag=1;
                    }
                }
                if(flag==0){
                    cout<<"The streak lives still in our heart!"<<endl;
                }
        }
        return 0;
}