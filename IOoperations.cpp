#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string st;
    cout<<"Enter string: ";
    cin>>st;
    ofstream c("string.txt");
    c<<st;
    
    c.close();
    return 0;
}