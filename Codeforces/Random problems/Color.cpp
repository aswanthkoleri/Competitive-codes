    #include <bits/stdc++.h>
    using namespace std;
    int LCM(int n1,int n2){
        int max;
        // maximum value between n1 and n2 is stored in max
        max = (n1 > n2) ? n1 : n2;

        do
        {
            if (max % n1 == 0 && max % n2 == 0)
            {
            return max;
            }
            else
                ++max;
        } while (true);
    }
    int main(){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int count[5];
        for(int i=0;i<5;i++){
            count[i]=0;
        }
        for(int i=0;i<n;i++){
            count[ar[i]]++;
        }
        int total=0;
        total+=count[4];
        if(count[3]!=0 && count[1]!=0)
        total+=LCM(count[3],count[1]);
        else if(count[3]==0 || count[1] == 0){
            if(count[3]){
                total+=count[3];
            }
            else if(count[1]){
                total+=count[1];
                if(total%2){
                    total=total/4+1;
                }
                else{
                    total=total/4;
                }
            }
        }
        if(count[2]%2){
            total+=count[2]/2+1;
        }
        else{
            total+=count[2]/2;
        }
        cout<<total;
        return 0;

    }
