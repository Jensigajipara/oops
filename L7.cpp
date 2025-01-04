#include<iostream>
using namespace std;
class checkyear
{
    public:
    void j1(int year)
    {
        if((year%4==0 && year%100 !=0 )||( year%400==0 ))
        {
            cout<<"this year is leap year:"<<year;
        }
        else{
            cout<<"this year is not leap year:"<<year;
        }
    }
};
int main()
{
    int year;
    cout<<"enter a year:";
    cin>>year;
    checkyear obj1;
    obj1.j1(year);
    return 0;
}