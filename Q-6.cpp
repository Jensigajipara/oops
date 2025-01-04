#include<iostream>
using namespace std;
class days
{
    public:
    void j1(int year, int week,int day)
    {
        year=day/365;
        day=day%365;
        week=day/7;
        day=day%7;

        cout<<"number of years:"<<year<<endl;
        cout<<"number of day:"<<day<<endl;
        cout<<"number os week:"<<week<<endl;

    }
};
int main()
{
    int year,week,day;
    cout<<"enter the number of day:";
    cin>>day;
    days obj1;
    obj1.j1(year,week,day);
    return 0;
}