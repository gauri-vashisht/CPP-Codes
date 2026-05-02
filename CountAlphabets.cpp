#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f("NOTES.TXT");
    int counter=0;
    char ch;
    while(f.get(ch)){
        if (isalpha(ch)){
            counter++;
        }
    }
    cout<<counter;
    f.close();
    return 0;
}