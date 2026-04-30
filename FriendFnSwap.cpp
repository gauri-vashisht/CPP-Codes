#include <iostream>
using namespace std;

class B;
class A{
    private:
    int a=12;
    void fun(){
        cout<<a<<endl;
    }
    friend void swap(A,B);
};
class B{
    private:
    int b=13;
    void funb(){
        cout<<b<<endl;
    }
    friend void swap(A, B);
};
void swap(A o1, B o2){
    int temp;
    temp=o1.a;
    o1.a=o2.b;
    o2.b=temp;
    cout<<"Swapped"<<o1.a<<o2.b;
}
int main(){
    A ob1;
    B ob2;
    swap(ob1,ob2);
}