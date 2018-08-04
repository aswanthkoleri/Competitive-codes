#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int recruits=0;
    int count=0;
    for(int i=0;i<n;i++){
        int crime;
        cin>>crime;
        if(crime <0){
            if(recruits<=0){
                count++;
            }else{
                recruits--;
            }
        }
        else{
            recruits+=crime;
        }
    }
    cout<<count;
    return 0;   
}
