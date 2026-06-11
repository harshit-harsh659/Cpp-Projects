#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    double vol=0, len, width;
    cin>> n;
    vector<int> A(n);
    for (int i=0; i<n; i++){
        cin>> A[i];
    }

    /*//brute force;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            len=min(A[i], A[j]);
            width=j-i;
            vol=max(vol, len*width);
        }
    }
    */

    //Two pointer
    int i=0, j=n-1;
    while (i<j){
        len=min(A[i], A[j]);
        width=j-i; 
        vol=max(vol, len*width);
        A[i]<A[j] ? i++ : j-- ;
    }

    cout<<vol;
    return 0;
}