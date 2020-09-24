#include<iostream>
using namespace std;
class sample{
    private: int a,b;
    public: sample(){
        a=10;
        b=20;
    }
    void display(){
        cout<<a<<" "<<b;
    }
};

    int main(){
        sample ob;
        ob.display();
    }

