#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter total number of inputs: ";
    cin>>n;
    vector<int> A(n);
    for (int i=0; i<n; i++){
        cin>>A[i];
    }

    if (n==1){
        cout<<A[0];
        return 0;
    }
    
    /*//brute force
    for (int i=0; i<n; i++){
        int freq=0;
        for (int j=0; j<n; j++){
            if(A[i]==A[j]){
                freq++;
            }
            if (freq>(n/2)+1){
                cout<<A[i];
                return 0;
            }
            
        }
    }
    return -1;
    */

    /*//optimized (use quick sort)
    sort(A.begin(), A.end());
    int freq=1;
    for (int i=1; i<n; i++){
        if(A[i-1]==A[i]){
            freq++;
        }else{
            freq=1;
        }
        if(freq==(n/2)+1){
            cout<<A[i-1];
            return 0;
        }
    }
    return -1;
    */


    //Moore's voting
    int freq=1;
    int ans=A[0];
    for (int i=1; i<n; i++){

        if(freq==0){
            ans=A[i];
            freq=1;
        }else if (A[i]==ans){
            freq++;
        }else{
            freq--;
        }
    }
    cout<<ans;
    return 0;
}