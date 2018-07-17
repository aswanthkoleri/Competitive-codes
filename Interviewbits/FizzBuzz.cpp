#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> fizzBuzz(int A) {
    vector<string> v;
    for(int i=1;i<=A;i++){
        if(i%3==0 && i%5==0){
            v.push_back("FizzBuzz");
        }
        else if(i%5 == 0){
            v.push_back("Buzz");
        }else if(i%3==0){
            v.push_back("Fizz");
        }
        else{
            v.push_back(to_string(i));
        }
    }
    return v;
}


int main(){
    int A;
    cin>>A;
    vector<string> v=fizzBuzz(A);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
