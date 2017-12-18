#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,no;
    cin>>t;
    cin.ignore();
    string conv;
    int ar[31];
    for(int i=1;i<=30;i++){
        ar[i]=0;
    }
    for(int i=0;i<t;i++){
        getline(cin,conv);
        /* cout<<conv[0]<<endl; */
        
        for(int j=1;j<conv.length();j++)
        {
            
             if(conv[j] ==  '0' ||  conv[j]==  '1' ||  conv[j]==  '2' ||  conv[j]==  '3' ||  conv[j]==  '4' ||  conv[j]==  '5' ||  conv[j]==  '6' ||  conv[j]==  '7' ||  conv[j]==  '8' ||  conv[j]==  '9' )
             {
                 no=0;
                 while(conv[j]<=57 && conv[j]>=48){
                      int num=conv[j];
                    no=no*10+(conv[j]-48);
                    j++;
                }
                if(conv[0]=='G') 
                ar[no]+=2; 
                else{
                ar[no]+=1;
                }
               
            } 
        }
        
    

    }
   /*  for(int i=1;i<=30;i++){
        cout<<i<<" "<<ar[i]<<endl;
    } */
    int max=-1,flag=0,index=-1;
    for(int i=1 ; i<=30 ; i++){
        if(ar[i]>max){
            max=ar[i];
            index=i;
        }
    }

     for(int i=1 ; i<=30 ; i++){
        flag=0;
         for(int j=1;j<=30;j++){
             if(ar[i]==ar[j]&& ar[j]!=0 ){
                 flag++;
             }
             
         }  
     }
     /* cout<<index<<endl;
     cout<<flag<<endl;  */
     
    if(flag>1){
        cout<<"No Date";
    }
    else{
    if(index==19 || index==20)
    cout<<"Date";
    else
    cout<<"No Date";
    }            
    /* for(int i=0;i<t;i++){
       cout<<conv[i]<<"\n";
    }
    for(int i=0;i<t;i++){
        if(i%2==0){
            for(int j=0;j<conv[i].length();j++){
                if(conv[i][j] >= '0' || conv[i][j]<='9'){
                    no=0;
                    while(!isspace(conv[i][j])){
                        no=no*10+(conv[i][j]-'0');
                        j++;
                    }
                    ar[no]+=2;
                }
            }
        }
        else{
            for(int j=0;j<conv[i].length();j++){
                if(conv[i][j] >= '0' || conv[i][j]<='9'){
                    no=0;
                    while(!isspace(conv[i][j])){
                        no=no*10+(conv[i][j]-'0');
                        j++;
                    }
                    ar[no]+=1;
    
                }
            }
        }
    }
    for(int i=1;i<32;i++)
        {
            cout<<ar[i]<<"\n";
        } */
        return 0;

}