#include<iostream>
using namespace std;
class jensi{
    public:
    void j1(int num)
    {
      
       string result =(num>=0) ? "positive" : "negative";
        cout<<"the number is"<<result<<endl;
    }
};
int main()
{
    int num;
    cout<<"enter a number:";
    cin>>num;
    jensi obj1;
    obj1.j1(num);
    return 0;
}