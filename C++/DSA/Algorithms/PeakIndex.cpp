#include <iostream>
#include <vector>
using namespace std;

int peak(vector<int> &nums, int size){
    int start=1, end=size-2, mid;
    

    while(start<=end){
        mid=start+ (end-start)/2;
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            return mid;
        }
        else if (nums[mid]<nums[mid+1]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return start;
}

int main(){
    int size;
    cin>>size;
    vector<int> A(size);
    for (int i=0; i<size; i++){
        cin>>A[i];
    }
    peak(A, size);
    return 0;
}