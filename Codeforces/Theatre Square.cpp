        /* Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

        What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

        Input
        The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

        Output
        Write the needed number of flagstones.

        Examples
        inputCopy
        6 6 4
        output
        4 */

        #include <iostream>
        using namespace std;
        int main(){
            long int n,m,a;
            long int count1,count2; 
            cin>>n>>m>>a;
            long long int big = n*m;
            long long int small = a*a;
            if(small >= big ){
                cout<<1;
                return 0;
            }
            unsigned long long int stone;
            if(big%small!=0){
                stone  = big/small + 1;
                if(stone%2==1){
                    stone++;
                }
            }
            else if(big%small==0){
                stone  = big/small;
            }
            cout<<stone;
            return 0;

        }