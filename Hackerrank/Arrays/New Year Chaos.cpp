#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int n=q.size();
    int m[n];
    for(int i=1;i<=n;i++){
        m[i]=2;
    }
    int bribes=0;
    int flag=0;
    int chaotic=0;
    while(flag==0){
    for(int i=0;i<n-1;i++){
        if(q[i]>q[i+1]){
            if(m[q[i]]>0){
            bribes++;
            m[q[i]]--;
            swap(&q[i],&q[i+1]);
            // cout<<q[i]<<endl;
            }else{
// cout<<"DUe to "<<q[i]<<endl;
            chaotic=1;
            break;
            }
    }
    }
    // for(int i=0;i<n;i++){
    //     cout<<q[i]<<" ";
    // }
    // cout<<endl;
    // Now check whether it is in order 
    int order = 1;
    for(int i=0;i<n;i++){
        if(q[i]!=i+1){
            order=0;
            break;
        }
    }
    if(order==1 || chaotic==1 ){
        flag=1;
    }
}
    if(chaotic==1){
        cout<<"Too chaotic"<<endl;
        
    }else{
        cout<<bribes<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split_string(q_temp_temp);

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
