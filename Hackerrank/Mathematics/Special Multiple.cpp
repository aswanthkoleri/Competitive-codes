#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
string solve(int n) {
    int num = 9;
    if(num%n==0){
        return to_string(num);
    }else{
        num*=10;
        while(1){
            if(num%n==0){
                return to_string(num);
            }else if((num+9)%n==0) {
                return to_string(num+9);
            }
        num*=10;
        }
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
