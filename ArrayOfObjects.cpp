#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;

    public:
    void setter(int l, int w){
        length=l;
        width=w;
        cout<<"Values Set"<<endl;
    }
    void getter(){
        cout<<length<<" "<<width<<endl;
    }
    int area(){
        return length*width;
    }
};
int main(){
    int l,w,area;
    Rectangle arr[3];
    for (int i=0;i<3;i++){
        cout<<"enter L and W: ";
        cin>>l>>w;
        arr[i].setter(l,w);
        area = arr[i].area();
        cout<<"area = "<<area;
    }
    return 0;
}