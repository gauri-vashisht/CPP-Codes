#include <iostream>
using namespace std;

class Rectangle{
    int width, height;
    public:
    void setvalue(int w,int h){
        width=w;
        height=h;
        displayvalue();
    }
    void displayvalue(){
        cout<<width<<endl;
        cout<<height<<endl;
    }    
};
int main(){
    Rectangle r1,r2;
    r1.setvalue(2,4);
    r2.setvalue(3,3);
    return 0;
}