// #include <iostream>
// #include <string.h>
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     string ar_str[t];
//     for(int i=0;i<t;i++){
//         string str;
//         cin>>str;
//         int count=0;
//         /* check whether the string is already there */
//         for(int j=0;j<i;j++){
//             if(ar_str[j] == str){
//                 count++;
//             }
//         }
//         /* if there is more than one similar string */
//         if(count){
//             ar_str[i] = str;
//             cout<<str+ std::to_string(count)<<"\n";
//         }
//         else{
//             ar_str[i] = str;
//             cout<<"OK\n";
//         }
//     }
//     return 0;
// }

/* Using maps  */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map <string,int> db;
    while(t--)
    {
        string str;
        cin>>str;
        if(db.count(str)==0){
            db[str]=1;
            cout<<"OK\n";
        }
        else{
            cout<<str<<db[str]<<"\n";
            db[str]++;
        }
    }
    return 0;
}