int Solution::evalRPN(vector<string> &A) {
    stack<string> s;
    int a,b,result;
    for(int i=0;i<A.size();i++){
        if(A[i]=="+"){
            b=stoi(s.top());
            s.pop();
            a=stoi(s.top());
            s.pop();
            result=a+b;
            s.push(to_string(result));
        }else if(A[i]=="*"){
            b=stoi(s.top());
            s.pop();
            a=stoi(s.top());
            s.pop();
            result=a*b;
            s.push(to_string(result));
        }else if(A[i]=="/"){
            b=stoi(s.top());
            s.pop();
            a=stoi(s.top());
            s.pop();
            result=a/b;
            s.push(to_string(result));
        }else if(A[i]=="-"){
            b=stoi(s.top());
            s.pop();
            a=stoi(s.top());
            s.pop();
            result=a-b;
            s.push(to_string(result));
        }else{
            s.push(A[i]);
        }
    }
    return s.top();
}
