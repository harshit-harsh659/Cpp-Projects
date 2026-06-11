#include <iostream>

using namespace std;

int main(){
    cout<<"Patience";
    return 0;
}

/*
Q1
Print the following pattern
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4


int main() {

    int n=4;

    for (int i=1; i<=n;i++){
        for (int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }


    return 0;
}
*/



/*
Q2
Print the following pattern
1 2 3
4 5 6
7 8 9


int main(){

    int num=1;
    int n=9;

    while (num<=n){
        for (int j=0; j<3; j++){
            cout<< num<<" ";
            num++;
        }
        cout<< endl;
    }
    return 0;
}
*/



/*
Q3
Print the following pattern
*
* *
* * *
* * * *


int main(){

    int n=4;
    for (int i=1; i<=n; i++){
        for (int j=1; j<= i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
Q4
Print the following pattern
1
2 2
3 3 3
4 4 4 4


int main(){

    int n=4;
    int num=1;
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
Q5
Print the following pattern
A
B B
C C C
D D D D
E E E E E


int main(){

    char A='A';    
    int n=5;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<A<<" ";
        }
        A++;
        cout<<endl;
    }

    return 0;
}
*/


/*
Q6
Print the following pattern
1
1 2
1 2 3
1 2 3 4


int main(){

    int n=4;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<< j<< " ";
        }
        cout<<endl;
    }
    return 0;
    }
*/


/*
Q7
Print the following pattern
1
2 1
3 2 1
4 3 2 1


int main(){

    int n=4;

    for (int i=1; i<=n; i++){
        for (int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }



    return 0;
}
*/


/*
Q8
Print the following pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


int main(){

    int num=1;
    int n=5;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
Q9
Print the following pattern
1 2 3 4
  2 3 4
    3 4
      4


int main(){
    
    int n=4;

    for (int i=1; i<=n; i++){
        for (int k=1; k<i; k++){
            cout<<"  ";
        }
        for (int j=n; j>=i; j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
Q10
Print the following pattern
    1
   121
  12321
 1234321
123454321


int main(){

    int n=5;

    for (int i=1; i<n; i++){
        for (int k=0; k<n-i-1; k++){
            cout<< " ";
        }
        
        for (int j=1; j<=i; j++){
            cout<< j;
        }
        
        for (int l=i-1; l>=1; l--){
            cout<< l;
        }
        cout<<endl;
    }
    return 0;
}
*/



//Review
/*
Q11
Print the following pattern
   *
  * *
 *   *
*     *
*     *
 *   *
  * *
   *

int main(){
    int n=4;
    int n1=n-1;

    for (int i=0; i<n; i++){

        for (int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        cout<<"*";

        if (i!=0){
            
            for (int j=0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i=n1-1; i>=0; i--){
        
        for (int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        cout<<"*";

        if (i!=0){
            for (int j=0; j<2*i-1; j++){
                cout<<" ";
            }
        
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
*/ 



/*
Q10
Print the following pattern
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *


int main(){
    int n=4;

    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout<< "* ";
        }
        for (int j=0; j<2*(n-i); j++){
            cout<<"  ";
        }
        for (int j=0; j<i; j++){
            cout<< "* ";
        }
        cout<<endl;
    }

    for (int i=n; i>0; i--){
        for (int j=i; j>0; j--){
            cout<<"* ";
        }
        for (int j=0; j<2*(n-i); j++){
            cout<<"  ";
        }
        for (int j=i; j>0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/