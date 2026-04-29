#include <iostream>
using namespace std;

class X{
    int num;
    static int counter;
    public:
    void setter(int a){
        num=a;
        counter++;
    }
    void getter(){
        cout<<"object created: "<<counter<<endl;
    }
};
int X::counter;
int main(){
    X a,b,c;
    a.setter(10);
    b.setter(20);
    c.setter(30);
    c.getter();
    return 0;

}