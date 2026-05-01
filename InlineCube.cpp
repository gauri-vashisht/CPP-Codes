#include <iostream>
using namespace std;

class Cube{
    int s;    
    public:
    Cube(int a){
        s=a;
    }
    inline int cube(){
        int cubee=s*s*s;
        return cubee;
    }
};
int main(){
    Cube c1(2);
    cout<<c1.cube();
    return 0;
}