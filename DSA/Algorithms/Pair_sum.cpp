#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    int n, target;
    cout<<"Enter total number of inputs: ";
    cin>>n;
    cout<<"Enter target: ";
    cin>>target;
    vector<int> A(n);
    for (int i=0; i<n; i++){
        cin>>A[i];
    }

    /*//brute force
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (A[i]+A[j]==target){
            cout<< A[i]<<" at "<<i<<" and "<<A[j]<<" at "<<j<<endl;
            return 0;
            }
        }
    }
    */

    //Two-pointer
    sort(A.begin(), A.end());
    int i=0, j=n-1;
    while(i<j){
        if (A[i]+A[j]==target){
            cout<< A[i]<<" at "<<i<<" and "<<A[j]<<" at "<<j<<endl;
            return 0;
        }else if(A[i]+A[j]>target){
            j--;
        }else{
            i++;
        }
    }

    return -1;

}