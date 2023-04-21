#include <iostream>
using namespace std;

// count is static data member of class Employeee 
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Id of this emplyee is " << id << " and this is employee number : " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; STATIC FUNCTIONS HAS ACCESS ONLY TO STATIC VARIABLES
        cout << "Value of count is : " << count << endl;
    }
};

int Employee ::count; // default value 0

int main()
{
    Employee aayush, aman, akash;
    // aayush.id = 1;
    // aayush.count = 1; // cannot do this as they are private

    aayush.setData();
    aayush.getData();
    Employee ::getCount();

    aman.setData();
    aman.getData();
    Employee ::getCount();

    akash.setData();
    akash.getData();
    Employee ::getCount();
    return 0;
}