// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     int r,c;
//     cin>>r>>c;
//     int A[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>A[i][j];
//         }
//     }
//     int n=0,m=0;
//     while(n<r && m<c){
//         /* Print the very top row */
//         for(int i=m;i<c;i++){
//             cout<<A[n][i]<<" ";
//         }
//         n++;
//         /* Print the very right column */
//         for(int i=n;i<r;i++){
//             cout<<A[i][c-1]<<" ";
//         }
//         c--;
//         /* If there is a very bottom row */
//         if(n<r){
//             /* Print the very bottom row */
//             for(int i=c-1;i>=m;i--){
//                 cout<<A[r-1][i]<<" ";
//             }
//             r--;
//         }
//         /* if there is a very left most column */
//         if(m<c){
//             /* print the very left most column  */
//             for(int i=r-1;i>=n;i--){
//                 cout<<A[i][m]<<" ";
//             }
//             m++;
//         }
//     }
// }
/**
 * @input A : Read only ( DON'T MODIFY ) 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* spiralOrder(const int** A, int r, int c, int *length_of_array) {
    int n=0,m=0;
    int i;
    *length_of_array = r * c; // length of result array
     int *result = (int *) malloc(*length_of_array * sizeof(int));
    int k=0;
    while(n<r && m<c){
        /* Print the very top row */
        for(i=m;i<c;i++){
            result[k++]=A[n][i];
        }
        n++;
        /* Print the very right column */
        for(i=n;i<r;i++){
            result[k++]=A[i][c-1];
        }
        c--;
        /* If there is a very bottom row */
        if(n<r){
            /* Print the very bottom row */
            for(i=c-1;i>=m;i--){
                result[k++]=A[r-1][i];
            }
            r--;
        }
        /* if there is a very left most column */
        if(m<c){
            /* print the very left most column  */
            for(i=r-1;i>=n;i--){
                result[k++]=A[i][m];
            }
            m++;
        }
    }
    return result;
   
}
