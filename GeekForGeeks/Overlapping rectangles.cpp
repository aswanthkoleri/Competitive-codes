#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int fltx,flty,frdx,frdy;
        int sltx,slty,srdx,srdy;
        cin>>fltx>>flty>>frdx>>frdy;
        cin>>sltx>>slty>>srdx>>srdy;
        /* find the top right of first  */
        int toprightx=max(fltx,frdx);
        int toprighty=max(flty,frdy);
        int downleftx=min(fltx,frdx);
        int downlefty=min(flty,frdy);
        cout<<toprightx<<" "<<toprighty<<endl;
        cout<<downleftx<<" "<<downlefty<<endl;
        /* Now find the other points of second rectangle  */
        int sdlx=min(sltx,srdx);
        int sdly=min(slty,srdy);
        int strx=max(sltx,srdx);
        int stry=max(slty,srdy);
        cout<<sdlx<<" "<<sdly<<endl;
        cout<<strx<<" "<<sdly<<endl;
        
        /* Now the conditions  */
        /* First point  */
        int overlap=0;
        if(sltx<toprightx && slty<toprighty && sltx>downleftx && slty>downlefty || srdx<toprightx && srdy<toprighty && srdx>downleftx && srdy>downlefty ||sdlx<toprightx && sdly<toprighty && sdlx>downleftx && sdly>downlefty || strx<toprightx && stry<toprighty && strx>downleftx && stry>downlefty ){
            overlap=1;
        }    
        cout<<overlap<<endl;
}
}