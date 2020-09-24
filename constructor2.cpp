#include<iostream>
using namespace std;
class sample {
    int a;
    public:
            sample(int b)      
            {
                a=b;
            }
            void display()
            {
                cout<<a;
            }

};
int main(){
    sample obj(8);
    obj.display();
    return 0;
}