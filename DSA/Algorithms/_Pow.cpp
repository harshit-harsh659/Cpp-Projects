#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long exp;
    double num, val=1, x;
    bool flag=false;
    cout<<"Enter base number: ";
    cin>>num;
    cout<<"Enter power: ";
    cin>>exp;
    x=num;
    if(exp<0){
        exp*=-1;
        flag=true;
    }

    /*//brute force
    for (int i=0; i<exp; i++){
        val*=num;
    }
    */

    //binary exponentiation
    while (exp!=0){
        if (exp % 2==1){
            val*=x;
        }
        x*=x;
        exp/=2;

    }
    
    if(flag){
        cout<<1/val;
    }else{
        cout<<val;
    }
    return 0;
}