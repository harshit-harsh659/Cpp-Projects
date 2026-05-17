#include <iostream>
#include <string>

using namespace std;

class student{
    private:
        int roll;
        string name;
        double marks;
    public:
        student(){
            cout<<"Object not initialized! Please use set_val to set credentials.";
        }
        student(int a, string b, double c){
            roll=a;
            name=b;
            marks=c;
        }
        void set_val(int a, string b, double c){
            roll=a;
            name=b;
            marks=c;
        }
        ~student(){
            cout<<"Deleting Object!";
        }
};

int main(){
    student S1(45, "Harsh",83.45 );   
    return 0; 
}