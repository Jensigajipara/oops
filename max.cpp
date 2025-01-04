#include<iostream>
using namespace std;
class maximum
{
    public:
    int max1(int num1,int num2);

};
inline int maximum :: max1(int num1,int num2){return (num1>num2 ? num1 : num2);}

int main()
{
    
    int num1,num2;
     maximum obj1;
    cout<<"enter two number:";
    cin>>num1>>num2;
    cout<<"the max number is:"<<obj1.max1(num1,num2)<<endl;
    return 0;
   
    
}