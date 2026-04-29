#include <iostream>
using namespace std;

class Test{
    private:
    static int a;
    static int b;

    public:
    void disp(){
        cout<<a<<endl;
        cout<<b<<endl;
    }

};
int Test::a=10;
int Test::b=203;

int main(){
    Test t1;
    t1.disp();
}