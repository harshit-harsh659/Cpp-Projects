#include <iostream> 
#include <vector>

using namespace std;

bool isValid(vector<int> &books, int n, int m, int max){
    int st=1, page=0;
    for (int i=0; i<n; i++){
        if(books[i]>max){
            return false;
        }

        if(page+books[i]<=max){
            page+=books[i];
        }else{
            st++;
            page=books[i];
        }
    }
    return st>m? false: true; 
}


int MinPage(vector<int> &books, int n, int m){
    int sum=0;
    if (m>n){
        return -1;
    }
    for (auto x: books){
        sum+=x;
    }
    int start=0, end=sum, ans;

    while(start<=end){
        int mid=start +(end-start)/2;
        if(isValid(books, n, m, mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
        vector<int> A={15, 17, 20};
        cout<<MinPage(A, 3, 2);
        return 0;
}