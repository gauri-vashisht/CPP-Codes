#include <iostream>
using namespace std;

int a=10;
int main(){
    int a=132;
    cout<<"a local"<<a<<endl;
    cout<<"a global"<<::a<<endl;
}