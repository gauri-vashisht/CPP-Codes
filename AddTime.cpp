#include <iostream>
using namespace std;

class Time{
    private:
    int hour, minute,second;
    public:
    void set(int h,int m,int s){
        hour=h; minute=m; second=s;
    }
    void add(Time a,Time b){
        hour=a.hour+b.hour;
        minute=a.minute+b.minute;
        second=a.second+b.second;

    }
    void display(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main(){
    Time t1,t2,t3;
    t1.set(1,1,1);
    t2.set(2,3,4);
    t3.add(t1,t2);
    t3.display();
}