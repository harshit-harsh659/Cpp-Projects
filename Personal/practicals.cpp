#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>

using namespace std;

/*Q1

int main(){
    
    int a ;
    float b;
    char c;
    double d;

    a=5;
    b=6.2;
    c='H';
    d=24;

    cout<< a << "  "<< sizeof(a) <<endl;
    cout<< b << "  "<< sizeof(b) <<endl;
    cout<< c << "  "<< sizeof(c) <<endl;
    cout<< d << "  "<< sizeof(d) <<endl;
}
*/




/*Q2

int main(){
    int a=11, b=7, c, d, e;
    float l=7.1, m=2.3, n, o, p;

    //implicit type casting

    d=l/m;//int=float/float
    cout<<d<< "  " << typeid(d ).name()<< endl;

    o= a-m;//float=int-float
    cout<<o<< "  " << typeid(o).name()<< endl;
    

    //explicit type casting

    e=int(a-m);//int=float
    cout<<e<< "  " << typeid(e).name()<< endl;

    p= float(l/m);//float=int
    cout<<p<< "  " << typeid(p).name()<< endl;
    
    return 0;
}
*/




/*Q3

int main(){
    int x=5, y=3, z;
    z=x++ + --y*2;
    cout<<z;

    return 0;
}
*/




/*Q4

int main(){
    double a, b, c;

    //if-else
    cout<<"Enter three numbers to compare: ";
    cin>> a >> b >> c;

    if (a > b && a > c) {
        cout<<"The greatest number is: "<<a<<endl;
    }
    else if (b > a && b > c) {
        cout<<"The greatest number is: "<<b<<endl;
    }
    else {
        cout<<"The greatest number is: "<<c<<endl;
    }

    //switch
    switch (a > b && a > c ? 1 : b > a && b > c ? 2 : 3) {
        case 1:
            cout<<"The greatest number is: "<<a<<endl;
            break;
        case 2:
            cout<<"The greatest number is: "<<b<<endl;
            break;
        case 3:
            cout<<"The greatest number is: "<<c<<endl;
            break;
    }
    
    return 0;
}
*/




/*Q5

int sum_of_array(int * arr, int a){
    int sum=0;
    for (int i=0; i<a; i++){
        sum += *(arr+i);
    }
    cout<<"Sum of array is: "<<sum<<endl;
    return sum;
}

struct sum_arr{
    int x=0;
};

int main(){
    int arr[5];

    for (int i=0; i<5; i++){
        cout<<"Enter element no. "<< i+1 <<":";
        cin >> arr[i];
    }

    sum_arr S;
    S.x = sum_of_array(arr, 5);
    cout<<S.x;

    return 0;
}
*/




/*Q6

class Student{
    unsigned int rollNo;
    string name;
    float marks;

    public:
        //Not in question
        // Student(){
        //     cout << "Please set value using set_val."<<endl;
        // }
        // Student(unsigned int a, string b, float c): rollNo(a), name(b), marks(c){
        //     cout<< "Initialized"<<endl;
        // }

        void set_vals(unsigned int a, string b, float c){
            rollNo=a;
            name=b;
            marks=c;
        }

        void display(){
            cout<<"The Name of the student is: "<<name << endl;
            cout<<"Roll no. of the student is: "<<rollNo<<endl;
            cout<<"Marks Obtianed by the student: "<<marks<<endl;
        }
};

int main(){
    Student S1;
    S1.set_vals(29, "Harsh", 20.0);
    S1.display();

    return 0;
}
*/




/*Q7
class bank{
    private:
        int Acc_No;
        double balance=0;
    public:
        void set_acc(int x){
            Acc_No=x;
        }

        void set_balance(double y){
            balance=y;
        }

        void display(){
            cout<<"The account number is: "<< Acc_No<<endl;
            cout<<"The balance is "<<balance<<endl;
        }
};

int main(){
    bank B1;
    B1.set_acc(6987);
    B1.set_balance(15000);
    B1.display();

    return 0;
}
*/




/*Q8


class Rectangle{

    float l=0, b=0;
    public:
        void set_val(float x, float y);
        void display_area();

};

void Rectangle::set_val(float x, float y){
    l=x;
    b=y;
    cout<<"The values have been set."<<endl;
}

void Rectangle::display_area(){
    cout<<"The area of the rectangle is: "<< l*b<< endl;
}

int main(){
    Rectangle R1;
    R1.set_val(6.34, 4.64);
    R1.display_area();

    return 0;
}
*/



/*Q9


inline void square(double x){
    cout<<"The square of the number "<<x <<" is:"<< ((x)*(x));
}


int main(){
    double n;
    cout<<"Enter a number: ";
    cin>> n;
    square(n);

    return 0;
}
*/




/*Q10


//a
#include <iostream>
using namespace std;

class B;

class A{
    int x;
    public: 
        A(int a): x(a){}
        
        friend int sum(A,B);
};

class B{
    int y;
    public:
        B(int b): y(b){}
        
        friend int sum(A, B);
};

int sum(A a1, B b1){
    return a1.x + b1.y;
}


int main() {
    A a1(3);
    
    B b1(5);
    
    cout<<"The sum of Class A & Class B is " <<sum(a1, b1)<<endl;
    
    
    return 0;
}


//b
class R;

class A {
    int x;
public:
    A(int a) : x(a) {}
    friend R triple(A);
};

class R {
    int res;
public:
    friend R triple(A); 
    
    void display() { cout << res; }
};

R triple(A A1) {
    R R1;
    R1.res = A1.x * 3;
    return R1;
}

int main() {
    A objA(5);
    
    R objR = triple(objA);
    
    cout << "Triple of 5 is: ";
    objR.display(); 
    
    return 0;
}

*/




/*Q11


class Rectangle{
    float length, breadth;
    public:
        Rectangle():length(1), breadth(1){
            cout<<"Default Constructor called"<<endl;
        }

        Rectangle(float l, float b):length(l), breadth(b){
            cout<<"Parameterized Constructor called"<<endl;
        }
       
        Rectangle(const Rectangle &R){
            length = R.length;
            breadth = R.breadth;
            cout<<"Copy Constructor called"<<endl;
        }

        void area(){
            cout<<"The area of the rectangle is: "<< length*breadth <<endl;
        }
};

int main(){
    Rectangle R1;
    R1.area();
    cout<<endl;
    
    Rectangle R2(10, 20);
    R2.area();
    cout<<endl;
    
    Rectangle R3(R1);
    R3.area();

    return 0;
}
*/



/*Q12

class Destroy{
    int x;
    public:

        Destroy(int a): x(a){
        }

        ~Destroy(){
            cout<<"Destructor called."<<endl;
        }
};

int main(){
    Destroy D1(10);
    return 0;
}
*/




/*Q13


//Overall structure is Hybrid Inheritance 
class Base {
    int x;
public:
    Base(int a) : x(a) {
        cout << "Base initialized with: " << x << endl;
    }
};

class Single : public virtual Base {
    public:
        Single(int a) : Base(a) {}
};

class Heirarchical : public virtual Base {
    public:
        Heirarchical(int a) : Base(a) {}
};

class Multiple_MultiLevel : public Single, public Heirarchical {
    public:
        Multiple_MultiLevel(int a) : Base(a), Single(a), Heirarchical(a) {}
};

int main() {
    Multiple_MultiLevel MM1(50); 
    
    return 0;
}
*/




/*Q14

class base{

    public:
    int x,y;

    base(int a, int b): x(a), y(b){}
      
    virtual int product(){
        cout<<"Using base class function: ";
        return x*y;
    }
    virtual ~base(){}
};
  
class derived: public virtual base{

    public:
        derived(int a, int b): base(a, b){}
          
        int product(){
            cout<<"Using derived class function: ";
            return x*y;
        }      
};
  
int main(){
      base* B1;
      B1=new derived (5,3);
      cout<<B1->product()<<endl;
      delete B1;
      return 0;
      
}
*/




/*Q15

//a
class Overload{
    public:

        int add(int a, int b){
            cout<<"Integer add called: ";
            return a+b;
        }

        float add(float a, float b){
            cout<<"Float add called: ";
            return a+b;
        }

        double add(double a, double b){
            cout<<"Double add called: ";
            return a+b;
        }

};

int main(){
    int i1=1,i2=2;
    float f1 =2.3, f2=3.9;
    double d1=2.233945, d2=5.2375;


    Overload O1, O2, O3;

    cout<<O1.add(i1, i2)<<endl;//integer add
    cout<<O2.add(f1, f2)<<endl;//float add
    cout<<O3.add(d1, d2)<<endl;//double add

    return 0;
}

//b
class Complex{
    float real, imag;
    public: 
        Complex(float a, float b): real(a), imag(b){}
        
        Complex operator + (const Complex &C){
            return Complex(real+ C.real, imag+ C.imag);
        }
        
        void display(){
            cout<<"The sum is: "<<real<<"+"<<imag<<"i ."<<endl;
        }
};

int main(){
    Complex C1(2.3, 3.4);
    Complex C2(4.5, 6.8);

    Complex C3=C1+C2;
    C3.display();
    
    return 0;
}
*/




/*Q16

void _div(float a, float b){

    if (b==0){
        throw 1;
    }else{
    cout<<"The result of the division is: "<<a/b<<endl;
    }
}

int main(){
    try{
        _div(10, 0);

        _div(10, 2);
    }
    catch(const int){
        cout<<"Division by zero is not defined."<<endl;
    }
    return 0;
}
*/




/*Q17

int fact(int a){

    int prod=1;

    if (a<0){
        throw "Negative";
    }else if(a==0||a==1){
        throw 1;
    }else{
        for (int i=1;i<=a;i++){
            prod*=i;
        }
        return prod;
    }
    return -1;
}

int main(){
    int a;
        cout<<"Enter a number: ";
        cin>>a;
    try{
        cout<<fact(a)<<endl;
    }
    catch(const char*){
        cout<<"Negative number is not allowed."<<endl;
    }
    catch(const int){
        cout<<"Factorial of "<<a<<" is 1."<<endl;
    }
    return 0;
}
*/




/*Q18

template<class T>
T _max(T a, T b){
    return a>b ? a : b;
}

int main(){
    int a, b;
    float c, d;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Enter two floats: ";
    cin>>c>>d;
    cout<<"The maximum of "<<a<<" & "<<b<<" is "<<_max(a, b)<<endl;
    cout<<"The maximum of "<<c<<" & "<<d<<" is "<<_max(c, d)<<endl;
    return 0;
}
*/




/*Q19

int main(){

    string name, filename="file_1.txt";
    int roll;
    float marks;
    ofstream outFile(filename);

    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter roll: ";
    cin>>roll;
    cout<<"Enter marks: ";
    cin>>marks;

    outFile<<"Name: "<<name<<"\t"<<"Roll: "<<roll<<"\t"<<"Marks: "<<marks<<endl;
    outFile.close();

    ifstream inFile(filename);
    string line;

    cout<<endl;
    getline(inFile, line);
    cout << line << endl;

    inFile.close();

    return 0;
}
*/




/*Q20

int main() {
    string line;
    ofstream outFile;
    ifstream inFile;
    outFile.open("file_1.txt", ios::app);

    outFile << "Appending.\n";
    outFile.close();

    outFile.open("file_2.txt");
    inFile.open("file_1.txt");

    while (getline(inFile, line)){
        outFile<<line<<endl;
    }
    
    if(inFile.eof()){
        cout<<"End of file reached."<<endl;
    }

    outFile.close();
    inFile.close();
    return 0;
}
*/