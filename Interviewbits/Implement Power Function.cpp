int Solution::pow(int x, int n, int d) {
   	if(n==0){
   		return 1%d;
   	}

   	long long res=1,base=x;
   	while(n>0){
   		if(n%2==1){/*If n is odd then*/
   			res=(res*base)%d;
   			n--;
   		}
   		else{
   			base=(base*base)%d;
   			n=n/2;
   		}
   	}
   	if(res<0){
   		res=(res+d)%d;
   	}
   	return res;
}
