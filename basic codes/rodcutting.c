#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int rate[100],a[100];

int maximum(int a,int b){
	if(a>b){
		return a;
	}
	return b;
	
}

int cut(int n){
	if (n <= 0)
     return 0;
   	int max_val = INT_MIN;
 
   // Recursively cut the rod in different pieces and compare different 
   // configurations
   for (int i = 0; i<n; i++)
         max_val = maximum(max_val, rate[i] + cut(n-i-1));
   return max_val;
}

int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	for(int i=0;i<n;i++){
		scanf("%d",&rate[i]);
	}
	int ans=cut(t);
	printf("%d\n",ans);
}