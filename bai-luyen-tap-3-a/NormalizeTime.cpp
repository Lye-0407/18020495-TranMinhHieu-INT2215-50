#include <iostream>
#include <iomanip>

struct Time {
    int h, m, s;
    
    Time(): h(0), m(0), s(0) {}
    
    Time(int hour, int minute, int second) : h(hour), m(minute), s(second) {}

    int second() const
    {
        return h * 3600 + m * 60 + s;
    }
    
    void print() 
    {
        cout << setfill('0') << setw(2) << h << ":"
             << setfill('0') << setw(2) << m << ":"
             << setfill('0') << setw(2) << s << endl;
    }
};

Time normalize(int h, int m, int s) 
{
    m += s / 60;
    s %= 60;

    h += m / 60;
    m %m 60;

    return Time(h, m, s)
}