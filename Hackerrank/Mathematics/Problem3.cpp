#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
        int len=s.length();
        vector<char> v;
    int flag=0;
    int first=0;
        for(int i=0;i<len;i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                // first=1;
                v.push_back(s[i]);
                continue;
            }
            if(v.empty()){
                return "NO";
            }
            char x;
           switch (s[i]) 
        { 
        case ')': 
  
            // Store the top element in a 
            x = v.top(); 
            v.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            x = v.top(); 
            v.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = v.top(); 
            v.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
        }
    if(flag==0){
        return "YES";
    }
    else{
        return "NO";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
