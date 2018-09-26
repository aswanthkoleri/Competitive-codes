string Solution::fractionToDecimal(int A, int B) {
	/*Find the Quotient first and append to result*/
	int Q=A/B;
	string result="";
	result+=to_string(Q);
	/*Now find the remainder*/
	/*Initialize map for remainder*/
	if(A%B==0){
		return result;
	}
	map<int,int> m;
	int ParIndex;
	/*Key for remainder value */
	/*Index is for position of that remainder*/
	rem=A%B;
	bool Notrepeating =true;
	while(rem!=0 && Notrepeating ){
		if(m.find(rem)!=m.end()){
			Notrepeating=false;
			ParIndex=m[rem];
		}else{
			m[rem]=result.size();
		}
			rem*=10;
			int temp=rem/B;
			result+=to_string(temp);
			rem%=B;
		}
		if(!Notrepeating){
			result+=")";
			result.insert(ParIndex,"(");
		}
		return result;
	}
