#include <bits/stdc++.h>
void swap(char *a,char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

using namespace std;
int main(){
    int n;
    int t;
    cin>>n>>t;
    string str;
    cin>>str;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++){
            if(str[j]=='B' && str[j+1]=='G'){
                swap(&str[j],&str[j+1]);
                j++;
            }
        }
    }
    cout<<str;
    return 0;
}
