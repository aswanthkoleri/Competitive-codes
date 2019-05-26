int Solution::candy(vector<int> &A) {
  vector<int> candy(A.size(),1);
  /*ITerate once through all the elements*/
  int n=A.size();
  for(int j=0;j<2;j++){
  for(int i=0;i<n;i++){
  	if(i==0){
  		if(A[i]>A[i+1]){
  			candy[i]=candy[i+1]+1;
  		}else if(i==A.size()-1){
  			if(A[i]>A[i-1]){
  				candy[i]=candy[i-1]+1;
  			}
  		}
  		else{
  			if(A[i]>A[i+1] && A[i]>A[i-1]){
  				candy[i]=max(candy[i+1],candy[i-1])+1;
  			}else if(A[i]>A[i+1]){
  				candy[i]=candy[i+1]+1;
  			}else if(A[i]>A[i-1]){
  				candy[i]=candy[i-1]+1;
  			}
  		}
  	}
  }
}
int sum=0;
for(int i=0;i<n;i++){
	sum+=candy[i];
}
return sum;
}

