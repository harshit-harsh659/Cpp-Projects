#include <iostream>
#include <vector>
using namespace std;

bool isValid (vector<int> &boards, int n, int m, int max){
    int painter=1, board=0;
    for (int i=0; i<n; i++){
        if (boards[i]>max) return false;
        if(board+boards[i]<=max){
            board+=boards[i];
        }else{
            painter++;
            board=boards[i];
        }
    }
    return painter>m ? false: true;
}

int minTime(vector<int> &boards, int n, int m){
    int sum=0;
    if (m>n) return -1;

    for (auto x: boards){
        sum+=x;
    }

    int start=0, end=sum, mid, ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if (isValid(boards, n, m, mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}


int main(){
    vector<int> A={10, 20 ,20};
    cout<<minTime(A, 3, 2);
    return 0;
}