#include <iostream>

namespace a{
    void hell(){
        std::cout<<"Inside a namespace\n";
    }
}
namespace b{
    void hell(){
        std::cout<<"Inside b namespace\n";
    }
}
using namespace a;
int main(){
    hell();
    b::hell();
}