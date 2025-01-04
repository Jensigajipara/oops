#include<iostream>
using namespace std;
class jensi
{
    public:
    void j1(int hour,int minute,int second)
    {
        minute+=second/60;
        second=second%60;
        hour+=minute/60;
       minute=minute%60;

        cout<<"the hour ,minute and second are :"<<hour<<"hour"<<endl<<minute<<"minute"<<endl<<second<<"second"<<endl;
    }
};
int main()
{
   int hour, minute, second;

    cout << "Enter the hour, minute, and second: ";
    cin >> hour >> minute >> second;

    jensi obj1;
    obj1.j1(hour, minute, second);

    return 0;
}