#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double l;
    cin>>n>>l;
    double ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    double first,last;
    first=ar[0]-0;
    last=l-ar[n-1];
    double diff;
    double min=max(first,last);
    for(int i=0;i<n-1;i++){
        diff=ar[i+1]-ar[i];
        min=max(min,diff/2);
    }
    cout<<fixed<<setprecision(9)<<min;
    return 0;
}
/* Test case
46 615683844
431749087 271781274 274974690 324606253 480870261 401650581 13285442 478090364 266585394 425024433 588791449 492057200 391293435 563090494 317950 173675329 473068378 356306865 311731938 192959832 321180686 141984626 578985584 512026637 175885185 590844074 47103801 212211134 330150 509886963 565955809 315640375 612907074 500474373 524310737 568681652 315339618 478782781 518873818 271322031 74600969 539099112 85129347 222068995 106014720 77282307
 */