#include <iostream>
using namespace std;

class Rectangle{
    private:
    int width, height;
    void displayvalue(){
        cout<<width<<" "<<height<<endl;
    }   
    public:
    void setvalue(int w,int h){
        width=w;
        height=h;
        displayvalue();
    }
     
};
int main(){
    Rectangle r1,r2;
    r1.setvalue(2,4);
    r2.setvalue(3,3);
    
    return 0;
}