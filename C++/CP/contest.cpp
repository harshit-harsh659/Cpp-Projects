//Codeforces CP31-Sheet

#include <iostream>
#include <vector>
using namespace std;


#include <string>
#include <fstream>

void fIO(){
    #ifndef ONLINE_JUDGE
        static std::ifstream in("input.txt");
        static std::ofstream out("output.txt");
        std::cin.rdbuf(in.rdbuf());
        std::cout.rdbuf(out.rdbuf());
    #endif
    
}

struct FastIO {
    FastIO() { fIO(); }
} fast_io_instance;



//1903A
/*
bool nondes(vector<int> nums, int s){
    bool flag=true;
    for (int i=1; i<s; i++){
        if (nums[i]<nums[i-1]){
            flag=false;
            break;
        }
    }
    return flag;
}

int main(){
    int T, n, k;

    cin>>T;

    for (int i=0; i<T; i++){
        cin>>n>>k;
        vector<int> A(n);
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        if (k>=2){
            cout<<"Yes"<<"\n";
        }else{
            if(nondes(A, n)){
                cout<<"Yes";
            }else{
                cout<<"No";
            }
        }
    }

    return 0;
}
*/


//1901A
/*
int main(){
    int T, n ,x;
    cin>>T;
    for (int i=0; i<T; i++){
        cin>>n>>x;

        vector<int> A(n);
        for (int j=0; j<n; j++){
            cin>>A[j];
        }
        int cap=A[0];
        for (int j=1; j<n; j++){
            cap=max(cap, A[j]-A[j-1]);
        }
        cap=max(cap, 2*(x-A[n-1]));
        cout<<cap<<"\n";
    }
    return 0;
}
*/


//1900 A
/*
int main(){
    int t, n;
    cin>>t;
    string cells;
    for (int i=0; i<t; i++){
        cin>>n;
        cin>>cells;
        int count=0;
        
        bool flag=false;

        for(int j=1; j<n-1; j++){
            if (cells[j]=='.'){
                if(cells[j-1]=='.' && cells[j+1]=='.'){
                    count=2;
                    flag=true;
                    break;
                }
            }
        }

        if (!flag){
            count=0;
            for (auto x:cells){
                if (x=='.'){
                    count++;
                }
            }
        }

        cout<<count<<"\n";
    }
    return 0;
}
*/

//1899A
/*
int main(){

    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;

        if(n%3==0){
            cout<<"Second"<<"\n";
        }else{
            cout<<"First"<<"\n";
        }
    }
    return 0;
}
*/


//1896A
/*
int main(){    
    int t, n;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        vector<int> A(n);
        for (int j=0; j<n; j++){
            cin>>A[j];
        }

        if (A[0]!=1){
            cout<<"No"<<"\n"; continue;
        }

        string c="Yes";

        for(int j=1; j<n-1; j++){
            if (A[j-1]<A[j] && A[j]>A[j+1]){
                swap(A[j], A[j+1]);
            }
        }

        for (int j=1; j<n; j++){
            if (A[j-1]>A[j]){
                c="No";
                break;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
*/


//1890A
/*
int main(){
    fIO();
    int t, n;
    string c="Yes";
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        string c="Yes";
        vector<int> A(n);
        for (int j=0; j<n; j++){
            cin>>A[j];
        }
        int a=A[0], b;

        for(int j=1; j<n; j++){
            if (A[j]!=a){
                b=A[j];
                break;
            }
        }

        vector<int> B(3,0);
        bool flag=true;

        for (int j=0; j<n; j++){
            if (B[2]>0){
                c="No";
                flag=false;
            }
            
            if (A[j]==a){
                B[0]++;
            }else if(A[j]==b){
                B[1]++;
            }else{
                B[2]++;
            }
        }

        if (B[1]==0) flag=false;

        if (flag){
            if (n%2==0){
                if (B[0]!=B[1]) c="No";
            }else{
                if (abs(B[0]- B[1])!=1){
                    c="No";
                }
            }
        }

        cout<<c<<"\n";

    }
    return 0;
}
*/


//1881A
/*
int main(){
    int t, n, m;
    string x, s;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n>>m;
        cin>>x>>s;
        int ans=0;
        if(x.find(s)!=string::npos){
            cout<<0<<"\n";
            continue;
        }

        bool flag=false;
        
        for (int j=0; j<5; j++){
            x=x+x;
            ans++;
            if (x.find(s)!=string::npos){
                cout<<ans<<"\n";
                flag=true;
                break;
            }
        }

        if(!flag){
            cout<<-1<<"\n";
        }
    }
    return 0;
}
*/


//1878A
/*
int main(){
    int t, n, k;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n>>k;
    
        vector<int> A(n);
        for(int j=0; j<n; j++){
            cin>>A[j];
        }

        int flag=false;

        for (int j=0; j<n; j++){
            if (A[j]==k){
                flag=true;
                break;
            }
        }

        if (!flag){
            cout<<"No"<<"\n";
        }else{
            cout<<"Yes"<<"\n";
        }
    }
    return 0;
}
*/


//1877A