#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(){
    int m,s;
    cin>>m>>s;
     cout<<"run";
    string a;
    int rem=1;
    int num=s;
    cout<<"run";
    cout<<num;
    for(int i=0;i<m;i++){
        cout<<"run";
        int j=rem;
         num=num-rem;
        cout<<num;
        
        int len1=m-i-1;
        int len2=to_string(num).length();
        cout<<len1<<len2;
        while(len1!=len1){
            j++;
            num--;
            /* len2=to_string(num).length(); */
        }
        rem = num;
        cout<<to_string(j);
        }
        cout<<a;
        return 0;
        
}