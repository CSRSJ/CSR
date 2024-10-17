// Basic code for class and object 
#include<iostream>
using namespace std;
class Calc 
{
    public:
    int a,b,c;
    void displayinfo ()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
        cout<<"Enter the value of c"<<endl;
        cin>>c;
        cout<<"The value of sum of a,b,c is"<<a+b+c<<endl;

    }
};
int main()
{
    Calc c1;
    c1.a;
    c1.b;
    c1.c;
    c1.displayinfo();
    return 0;
}