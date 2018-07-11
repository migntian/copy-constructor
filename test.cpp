#include <iostream>
using namespace std;
class Date
{
public:
    Date()
    {}
    Date(const Date& d)
    {
        _year = d._year;
        _month = d._month;
        _day = d._day;
    }
private:
    int _year;
    int _month;
    int _day;
};
void TestDate1()
{
    Date d1;
    Date d2(d1);
    Date d3 = d1;
    cout<<&d1<<endl;
    cout<<&d2<<endl;
    cout<<&d3<<endl;
}
int main()
{
    TestDate1();
}

