#include <iostream>
#include <vector>
using namespace std;

//no division operator

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> A(n);
    vector<int> B(n, 1);
    for (int i=0; i<n; i++){
        cin>>A[i];
    }

    double prod=1;
    
    /*//brute force
    for (int i=0; i<n; i++){
        prod=1;
        for (int j=0; j<n; j++){
            if (i==j){
                continue;
            }
            prod*=A[j];
        }
        B[i]=prod;
    }
    */


    //Prefix*Suffix
    for (int i=1; i<n; i++){
        B[i]=prod;
        prod*=A[i];
    }
    prod=1;
    for (int i=n-2; i>=0; i--){
        B[i]*=prod;
        prod*=A[i];
    }

    for (int i=1; i<n; i++){
        cout<<B[i];
    }
    return 0;
}