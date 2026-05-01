#include <iostream>
using namespace std;

class B;
class A{
    private:
    int a=12;
    friend int add(A,B);
};
class B{
    private:
    int b=13;
    friend int add(A, B);
};
int add(A o1,B o2){
    int result;
    result=o1.a+o2.b;
    return result;
}
int main(){
    A ob1;
    B ob2;
    int ans=add(ob1,ob2);
    cout<<ans;
    return 0;
}
