#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

bool isValid(vector<int> &sheds, int n, int m){
    int lastIdx=0, cows=1;

    for (int i=1; i<sheds.size(); i++){
        if(sheds[i]-sheds[lastIdx]>=m){
            cows++;
            lastIdx=i;
        }
    }

    if(cows>=n){
        return true;
    }else{
        return false;
    }

}

int MinDist(vector<int> &sheds, int n){
    int largest, minimum, mid, ans=-1;

    sort(sheds.begin(), sheds.end());
    minimum=sheds.front();
    largest=sheds.back()-minimum;

    while (minimum<=largest){
        mid=minimum+(largest-minimum)/2;

        if (isValid(sheds, n, mid)){
            ans=mid;
            minimum=mid+1;
        }else{
            largest=mid-1;
        }
    }
    return ans;
}


int main(){
    int n, m;
    cout<<"Enter number cows and length or vector: ";
    cin>>n>> m;
    vector<int> A(m);
    for(int i=0; i<m; i++){
        cin>>A[i];
    }
    
    cout<<MinDist(A, n);

    return 0;
}