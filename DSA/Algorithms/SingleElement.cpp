#include <iostream>
#include <vector>

using namespace std;

int single(vector<int> &nums, int size){
    int start=0, mid, end=size-1;
    if (size==1){
        return nums[0];
    }
    
    while(start<=end){
        mid=start+(end-start)/2;
        if (mid==0 && nums[0]!=nums[1]){
            return nums[mid];
        }
        if(mid==size-1 && nums[mid]!=nums[mid-1]){
            return nums[mid];
        }

        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        if(mid%2==0){
            if(nums[mid]==nums[mid-1]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(nums[mid]==nums[mid-1]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int size;
    cin>>size;
    vector<int> A(size);
    for (int i=0; i<size; i++){
        cin>>A[i];
    }
    single(A, size);
    return 0;
}