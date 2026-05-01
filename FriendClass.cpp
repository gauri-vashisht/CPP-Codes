#include <iostream>
using namespace std;

class A{
    private:
    int pvt=1;

    friend class B;
};
class B{
    public:
    void callA(A obj1){
        cout<<obj1.pvt;
        
    }
};
int main(){
    A o1; 
    B o2;
    o2.callA(o1);
    return 0;
}