#include <iostream>
#include <vector>

using namespace std;

//recursive approach
void ReBinary(vector<int> &b, int tar, int first, int last){

    if (first > last){
        cout<<"No element."<<"/n";
        return;
    }

    int mid=first+ (last-first)/2;
    if (tar>b[mid]){
            ReBinary(b, tar, mid+1, last);
        }else if(tar<b[mid]){
            ReBinary(b, tar, first, mid-1);
        }else{
            cout<<mid;
        }
}

//binary
void Binary(vector<int> &A, int target, int start, int end){
    int mid;
    while(start<end){
        mid=start+(end-start)/2;

        if (target>A[mid]){
            start=mid+1;
        }else if(target<A[mid]){
            end=mid-1;
        }else{
            cout<<mid;
            break;
        }
    }
}



int main(){
    vector<int> A={1,2,5,6,7,11,15, 20};

    int start=0, end=7, target=11;


    return 0;
}



