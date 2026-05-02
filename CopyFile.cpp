#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream src("source.txt");
    ofstream des("dest.txt");

    if(src && des){
        char ch;
        while(src.get(ch)){
            des.put(ch);
        }
        cout<<"file copied";   

    }
    else
        cout<<"Error with file";
    src.close();
    des.close();
    return 0;
}