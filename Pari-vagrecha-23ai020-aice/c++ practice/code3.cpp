// use of virtual keyword
# include<iostream>
using namespace std;

class A
{
    public:
    virtual void show()
    {
        cout<<"Class A"<<endl;
    }
};
class B :public A
{
    public:
    void show()
    {
        cout<<"Class B"<<endl;
    }
};
int main ()
{
    A*a;
    B obj;
    a = &obj;
    obj.show();
    a ->show();
    return 0;
}


