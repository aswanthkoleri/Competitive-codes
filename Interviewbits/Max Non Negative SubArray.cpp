#include <bits/stdc++.h>
using namespace std;

vector< int> maxset(vector< int> &A) {
    vector<vector<  int>> current;
      int n = A.size();
      int k=0;
    vector<  int> temp;
    for(  int i=0;i<n;i++){
        
        if(A[i]>=0){
            /* cout<<A[i]<<" "; */
            temp.push_back(A[i]);
            /* cout<<"Oushing done"; */
        }
        if(A[i]<0){
           /*  cout<<"Im here"; */
            /* for(  int l=0;l<temp.size();l++){
                cout<<temp[l]<<" ";
            } */
            if(temp.size()>0){
            current.push_back(temp);
            temp.clear();
            }
        }
        if(i==n-1 && A[i]>=0 ){
            current.push_back(temp);
            temp.clear();
        }
    }
    /* cout<<endl;
    for(  int i=0;i<current.size();i++){
        for(int j=0;j<current[i].size();j++){
        cout<<current[i][j]<<" ";
        }
        cout<<endl;
    } */
    vector< int> max;
    if(current.size()>0){
    max=current[0];
    }
    /* cout<<current.size()<<endl; */
    for(  int i=1;i<current.size();i++){
        /* cout<<i<<endl;
            cout<<accumulate(current[i].begin(),current[i].end(),0.0000)<<endl;
            cout<<accumulate(max.begin(),max.end(), 0.000)<<endl; */
        if(accumulate(current[i].begin(),current[i].end(), 0.000)>accumulate(max.begin(),max.end(), 0.00)){
            
            max=current[i]; 
        }else if(accumulate(current[i].begin(),current[i].end(), 0.00)==accumulate(max.begin(),max.end(), 0.00)){
            if(current[i].size()>max.size()){
                max=current[i];
            }
    } 
}  
    return max; 
}

 int main(){
     int n;
    cin>>n;
    vector< int> A;
    for( int i=0;i<n;i++){
         int k;
        cin>>k;
        A.push_back(k);
    }
    vector< int> result = maxset(A);
    for( int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}

