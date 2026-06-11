#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int Rot(vector<int> &nums, int target){
    int start=0, end=nums.size()-1, mid;
    if (end==0) return 0;
    while (start<=end){
        mid=start+(end-start)/2;
        if (nums[mid]==target) return mid;

        if (nums[mid]>=nums[start]){
            if(target>=nums[start] && target<nums[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(target<=nums[end] && target>nums[mid]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){

    #ifndef ONLINE_JUDGE
        static std::ifstream in("input.txt");
        static std::ofstream out("output.txt");
        std::cin.rdbuf(in.rdbuf());
        std::cout.rdbuf(out.rdbuf());
    #endif
    
    
    int t, n, tar;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n>>tar;
        vector<int> A(n);
        for(int j=0; j<n; j++){
            cin>>A[j];
        }
        cout<<Rot(A, tar)<<"\n";
    }

    return 0;
}