#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int A;
    cin>>A;
    int mag=1;
    int temp1=A;
    while(temp1){
        temp1/=10;
        mag*=10;
    }
    mag/=10;
    /* cout<<mag<<endl; */
    int temp2=A;
    int pal=0;
    int rem;
    while(temp2){
        rem=temp2%10;
        pal+=(mag*rem);
        temp2/=10;
        mag/=10;
    }
    /* cout<<pal; */
    if(pal==A){
        cout<<"true";
    }else{
        cout<<"false";
    }
    
}

