#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream num;
    num.open("NUM.txt");
    for(int i=0;i<200;i++){
        num<<i;
    }
    num.close();
    return 0;
}