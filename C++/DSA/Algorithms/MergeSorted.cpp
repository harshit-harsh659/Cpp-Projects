#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class solution {
    public:
        static void merge(vector<int> &nums1, int n, vector<int> &nums2, int m){
            int i=n-1, j=m-1, idx=n+m-1;
            while (i>=0 && j>=0){
                    if (nums1[i]>nums2[j]){
                        nums1[idx]=nums1[i];
                        i--;
                    }else{
                        nums1[idx]=nums2[j];
                        j--;
                    }
                    idx--;
            }
            if (j>=0){
                while (j>=0){
                    nums1[idx]=nums2[j];
                    j--;
                    idx--;
                }
            }
        }
};

int main(){
    #ifndef ONLINE_JUDGE
        static std::ifstream in("input.txt");
        static std::ofstream out("output.txt");
        std::cin.rdbuf(in.rdbuf());
        std::cout.rdbuf(out.rdbuf());
    #endif
    
    int t, n, m;
    cin>>t;

    for (int i=0; i<t; i++){
        cin>>n>>m;
        vector <int> A(n+m,0);
        for (int j=0; j<n; j++){
            cin>>A[j];
        }
        vector<int> B(m,0);
        for (int j=0; j<m; j++){
            cin>>B[j];
        }

        solution::merge(A, n , B, m);

        for(int j=0; j<A.size(); j++){
            cout<<A[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}