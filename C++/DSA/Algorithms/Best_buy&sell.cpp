#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, best, profit;
    cin>>n;
    vector<int> A(n);
    for (int i=0; i<n; i++){
        cin>>A[i];
    }

    best=A[0];
    profit=0;
    for (int i=1; i<n; i++){
        if (best>A[i]){
            best=A[i];
        }else{
            profit=max(profit, A[i]-best);
        }
    }
    cout<< profit;
    return 0;
}