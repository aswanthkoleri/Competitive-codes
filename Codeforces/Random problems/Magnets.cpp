#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    string s;
    for(int i=0;i<n;i++){
        s+=str[i];
    }
    int count=0;
    for(int i=0;i<s.length()-1;i++){
       /*  cout<<s[i]<<" "<<s[i+1]<<endl; */
        if(s[i] == s[i+1]){
            count++;
        }
    }

   /*  cout<<"length="<<s.length()<<endl;
    cout<<s<<endl; */
    cout<<count+1;
    return 0;
}
