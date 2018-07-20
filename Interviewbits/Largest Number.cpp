bool myCompare(int X,int Y)
{
    string XY = to_string(X) + (to_string(Y));
    string YX = to_string(Y)+(to_string(X));
    return (XY.compare(YX)>0)?true:false;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> sol=A;
    sort(sol.begin(),sol.end(),myCompare);
    string s=to_string(sol[0]);
    for(int i=1;i<sol.size();i++){
        s =s + (to_string(sol[i]));
    }
    if(s[0]=='0'){
        return "0";
    }
    return s;
}
