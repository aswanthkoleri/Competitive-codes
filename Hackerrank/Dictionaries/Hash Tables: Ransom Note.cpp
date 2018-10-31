    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int a,b;
        map<string,int> m;
        cin>>a>>b;
        for(int i=0;i<a;i++){
            string word;
            cin>>word;
            m[word]++;
        }
        int flag=1;
        for(int i=0;i<b;i++){
            string word;
            cin>>word;
            if(m[word]){
                m[word]--;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        return 0;
    }