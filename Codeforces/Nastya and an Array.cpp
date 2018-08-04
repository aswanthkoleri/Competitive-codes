#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set <int, greater <int> > ar;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp!=0){
            ar.insert(temp);
        }
    }
    cout<<ar.size();
    return 0;
}
