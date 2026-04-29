#include <iostream>
using namespace std;

class Time{
    private:
    int hour, minute,second;
    public:
    void set(int h,int m,int s){
        hour=h; minute=m; second=s;
    }
    Time add(Time a,Time b){
        Time t4;
        t4.hour=a.hour+b.hour;
        t4.minute=a.minute+b.minute;
        t4.second=a.second+b.second;
        return t4;
    }
    void display(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main(){
    Time t1,t2,t3,ans;
    t1.set(1,1,1);
    t2.set(2,3,4);
    ans=t3.add(t1,t2);
    ans.display();
    return 0;
}