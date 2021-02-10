
#include <iostream>
using namespace std;

int main(int day, int month, int year)
{
    cout << "Whats month your first shot in mm/dd/year" << endl;
    cin >> month;
    cout << "Whats day your first shot in mm/dd/year" << endl;
    cin >> day;
    cout << "Whats month your first shot in mm/dd/year" << endl;
    cin >> year;
    cout << "Your first dose was on: " << endl;
    cout << month << "/" << day << "/" << year << endl;
    cout << "Your second dose will be on: " << endl;
    day = day + 14;
    cout << month<< "/" << day << "/" << year << endl;


}
