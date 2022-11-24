#include<iostream>
using namespace std;

class test 
{
    public:
    void display(){
        printf("This the creation of classes and objects");
    }
};
int main ()
{
    test obj;
    obj.display();
    return 0;
}