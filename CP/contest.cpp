//Codeforces CP31-Sheet

#include <algorithm>
#include <iostream>
#include <limits.h>
#include <vector>
#include <climits>
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

        string c="Yes\n";

        if (A[0]!=1){
            c="No\n";
        }

        for (int j=n-2; j<0; j--){
            if (A[j]>A[j-1] && A[j]>A[j+1]){
                swap(A[j], A[j+1]);
            }
            if (A[j]<A[j-1]){
                c="No\n";
            }
        }
        cout<<c;
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
/*
int main(){
    int t, n, sum,num;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        sum=0;
        for (int j=0; j<n-1; j++){
            cin>>num;
            sum+=num;
        }
        cout<<-1*sum<<"\n";
    }
    return 0;
}
*/


//1873C
/*
int main(){
    int t, score;
    string target;
    for (int i=0; i<t; i++){
        for(int j=0; j<10; j++){
            cin>>target;
            for (int k=0; k<10; k++){
                
            }
        }
    }
}

*/


//1866A
/*
int main(){

    int n, _min, num;
        cin>>n;
        _min=INT_MAX;
        for (int j=0; j<n; j++){
            cin>>num;
            _min= min(_min, abs(num));
        }
        cout<<_min<<"\n";
    return 0;
}
*/


//1862B
/*
int main(){
    int t, n, count, num;
    cin>>t;

    for (int i=0; i<t; i++){
        cin>>n;
        
        vector<int> A;
        for (int j=0; j<n; j++){
            cin>>num;
            if(j==0){
                A.push_back(num);
                count=1;
            }else{
                if(num>=A[count-1]){
                    A.push_back(num);
                }else{
                    A.push_back(1);
                    A.push_back(num);
                    count++;
                }
                count++;
            }
        }
        cout<<A.size()<<"\n";
        for (auto x: A){
            cout<<x<<" ";
        }
        
        cout<<"\n";
    }
    return 0;
}
*/


//1858A
/*
int main(){
    int t, a, b, c;
    cin>>t;
    for (int i=0; i<t; i++){
        cin >>a>>b>>c;

        if (c%2!=0){
            a+=1;
        }

        if (a-b>=1){
            cout<<"First"<<"\n";
        }else{
            cout<<"Second"<<"\n";
        }
    }
    return 0;
}
*/


//1853A
/*
int main(){
    long long t, n, lmin, rmin, ans;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        vector<long long> A(n);
        for (int j=0; j<n; j++){
            cin>>A[j];
        }
        ans=0;
        if (!is_sorted(A.begin(), A.end())){
            cout<<ans<<'\n';
            continue;
        }
        lmin=LONG_LONG_MAX;
        rmin=A[1]-A[0];
        for (int j=1; j<n-1; j++){
            lmin=min(lmin, A[j]-A[j-1]);
            rmin=min(rmin, A[j+1]-A[j]);
        }
        ans=min(lmin, rmin);
        cout<<1+ans/2<<"\n";
    }
    return 0;
}
*/


//1845A
/*//error
int main(){
    int t, n, x, k;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n>>k>>x;
        int quo;
        
        if (x!=1 && x!=k){
        cout<<"Yes\n";
        cout<<n<<"\n";
        for (int j=0; j<n; j++){
            cout<< 1 <<" ";
        }
        cout<<"\n";
        continue;
        }


        if (x==1 && (n==1 || k==1)){
            cout<<"No\n";
            continue;
        }

        if (x==k){
            cout<<"Yes\n";
            quo=n/(k-1);
            cout<<quo+1<<"\n";
            for (int j=0; j<quo; j++){
                cout<<k-1<<" ";
            }
            cout<<n%(k-1)<<"\n";
            continue;
        }

        if (n%k!=x){
            cout<<"Yes\n";
            quo=n/k;
            if (n%k==0){
                cout<<quo<<"\n";
            }else{
                cout<<quo+1<<"\n";
            }
            for (int j=0; j<quo; j++){
                cout<<k<<" ";
            }
            
            if(n%k!=0){
                cout<<n%k;
            }
            cout<<"\n";
            continue;

        }else{
            if (x>=3){
                cout<<"Yes\n";
                quo=n/k;
                cout<<quo+2<<"\n";
                for (int j=0; j<quo; j++){
                    cout<<k<<" ";
                }
                cout<<x-1<<" "<<1<<"\n";
                continue;
            }else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}
*/


//1834A
/*
int main(){
    int t, n, count1, count_1, num,ans;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        count1=0;
        ans=0;
        count_1=0;
        for (int j=0; j<n; j++){
            
            cin>>num;
        
            if(num==1){
                count1++;
            }else{
                count_1++;
            }
        }
        int dif= count1-count_1;
        if (dif<0){
            if (-dif%2!=0){
                ans+=-dif/2+1;
                count1+=-dif/2+1;
                count_1-=-dif/2+1;
            }else{
                ans+=-dif/2;
                count1+=-dif/2;
                count_1-=dif/2;
            }
        }

        if (count_1%2==0){
            cout<<ans<<"\n";
        }else{
            cout<<ans+1<<"\n";
        }
    }
    return 0;
}
*/


//1783A
/*error
int main(){
    int t,  n, count;
    cin>>t;

    for (int i=0; i<t; i++){
        cin>>n;
        count=0;
        vector<int> A(n);
        for (int j=0; j<n; j++){
            cin>>A[j];
        }
        int sum=A[0];

        if (A.size()==1){
            cout<<"Yes"<<"\n";
            cout<<A[0];
            continue;
        }
        if(A[0]==A[1]){
            swap(A[1], A[n-1]);
        }

        for(int j=0; j<n; j++){
            if (A[j]==sum){
                count++;
            }
        }

        for (int j=1; j<n; j++){
            if (A[j]==sum){
                sum+=A[j];
                swap(A[j+1], A[j]);
            }else{
                sum+=A[j];
            }
        }

        if (count==A.size()){
            cout<<"No"<<"\n";
        }else{
            cout<<"Yes"<<"\n";
            for (auto x: A){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
*/


//1766A
/*
int main(){

    int t, x, mul, ans;
    cin>>t;

    for (int i=0; i<t; i++){
        cin>>x;
        mul=1;

        if(x>9){
            ans=9;
        }else{
            cout<<x<<"\n";
            continue;
        }

        while (mul*10<=x && mul<=10){
            ans++;
            mul++;
        }

        
        while (mul*10<x && mul<=100){
            ans++;
            mul+=10;
        }

        while (mul*10<x && mul<=1000){
            ans++;
            mul+=100;
        }

        while (mul*10<x && mul<=10000){
            ans++;
            mul+=1000;
        }

        while (mul*10<x && mul<=100000){
            ans++;
            mul+=10000;
        }

        while (mul*10<x && mul<1000000){
            ans++;
            mul+=100000;
        }

        cout<<ans<<"\n";
    }
    return 0;
}
*/


//1814A
/*
int main(){
    long long t, n, k;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n>>k;

        if (n==k){
            cout<<"Yes\n";
            continue;
        }

        if ((n%k)%2==0 || ((n%k)+k)%2==0){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
*/


//1791C
/*
int main(){
    int t, n;
    string s;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        cin>>s;

        int j=0, k=n-1;
        
        while (j<=k){
            if (s[j]!=s[k]){
                n-=2;
            }else{
                break;
            }

            j++;
            k--;

        }
        cout<<n<<"\n";
    }
    return 0;
}
*/


//1806A
/*
int main(){
    int t, a, b, c, d, ans;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>a>>b>>c>>d;
        ans=0;
        if(d<b){
            cout<<-1<<"\n";
            continue;
        }

        ans+=d-b;
        a+=d-b;

        if (c>a){
            cout<<-1<<"\n";
            continue;
        }else{
            ans+=a-c;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
*/


//1875A
/*
int main(){
    long long t, a, b, n, ans;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>> a>>b>>n;
        ans=0;
        vector<int> A(n);
        for (int j=0; j<n; j++){
            cin>>A[j];
        }
        if (b==0){
            cout<<0<<"\n";
            continue;
        }
        ans+=b;
        for (int j=0; j<n; j++){
            if (A[j]<a){
                ans+=A[j];
            }else{
                ans+=a-1;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
*/


//1679A
/*
int main(){
    long long t, n, ans;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        ans=0;
        long long _max, _min;
        if(n<4){
            ans=-1;
        }
        if (n%6==4 || n%6==2){
            _min=n/6+1;
        }else if(n%6==0){
            _min=n/6;
        }else{
            ans=-1;
        }

        if (ans==-1){
            cout<<-1<<"\n";
            ans=0;
            continue;
        }

        if (n%4==0 || n%4==2){
            _max=n/4;
        }else{
            ans=-1;
        }

        if (ans==-1){
            cout<<-1<<"\n";
            ans=0;
            continue;
        }else{
            cout<<_min<<" "<<_max<<"\n";
        }
    }
    return 0;
}
*/


//1849B
/*
int main(){
    int t, n, k;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>> n>> k;

        vector<int> monster(n);
        vector<int> ans;

        for (int j=0; j<n; j++){
            cin>>monster[j];
        }
        auto itr=max_element(monster.begin(), monster.end());
        while (*itr>0){
            if (*itr<=k){
                *itr-=k;
            }
            ans.push_back(itr);
        }
    }
}
*/


//1857A
/*
int main(){
    int t, n;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        vector<int> A(n);
        int evencount=0, oddcount=0;
        for (int j=0; j<n; j++){
            cin>>A[j];
            if (A[j]%2==0){
                evencount++;
            }else{
                oddcount++;
            }
        }
        if (oddcount%2==0){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
*/


//1829B
/*
int main(){
    int t, n;
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>n;
        vector<int> A(n);
        int _max=INT_MIN, curr=0;
        for (int j=0; j<n; j++){
            cin>>A[j];
            if (A[j]==0){
                curr++;
            }else{
                curr=0;
            }
            _max=max(_max, curr);
        }
        cout<<_max<<"\n";
    }
    return 0;
}
*/


//1859A
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
        vector<int> even, odd;
        sort(A.begin(), A.end());
        vector<int> first, second;
        int a=A[0];
        int j=0;
        while ( j<n && a==A[j]){
            first.push_back(A[j]);
            j++;
        }
        for (j; j<n; j++){
            second.push_back(A[j]);
        }
        if (second.size()==0){
            cout<<-1;
        }else{
            cout<<first.size()<<" "<<second.size()<<"\n";
            for (auto x: first){
                cout<<x<<" ";
            }
            cout<<"\n";
            for (auto x: second){
                cout<<x<<" ";
            }
    }
        cout<<"\n";
    }
    
    return 0;
}
*/


//1788B

int main(){
    int t, n;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n;
        vector<int> A(n);
        for (int j=0; j<n; j++){
            cin >> A[j];
        }
        vector<int> idx;

        for (int j=0; j<n; j++){
            if (A[j]==2){
                idx.push_back(j);
            }
        }
        if (idx.size()==0){
            cout << 1 << "\n";
            continue;
        }
        if (idx.size()%2!=0){
            cout << -1 << "\n";
        }else{
            cout << idx[idx.size()/2-1]+ 1 << "\n";
        }
    }   
    return 0;
}