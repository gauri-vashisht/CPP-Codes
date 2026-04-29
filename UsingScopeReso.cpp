#include <iostream>
using namespace std;

class Test{
    private:
    int data1;
    int data2;

    public:    
    void fn(){
        cout<<"This function is inside class"<<endl;
    }
    void another();
};
void Test::another(){
    cout<<"This function is outside class"<<endl;
}
int main(){
    Test t1;
    t1.fn();
    t1.another();
    return 0;
}

