// OOPs  - Classes and objects

// C++ --> intially called --> c with classes by stroustroup
// class --> extensions of structures(in c)
// structures had limitations
//     --> members are puclics
//     --> no methods
// classes  --> structures + more
// classes  --> can have methods and properties
// classes  --> can make few members as private & few public

// DECLARE OBJECTS ALONG CLASS DECLARATION
// class Employee{
//     //class defintion
// } Aayush, Aman , Akash;
// Aayush.salary = 8 makes no sense if salary id private



// NESTING OF MEMBER FUNCTIONS

#include <iostream>
#include <string>
using namespace std;

class binary{
    // string s;

private:
    string s;
    void chk_bin(void);
public:
    void read(void);
    // void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary :: read(void){
    cout << "Enter a binary number : ";
    cin >> s;
}

void binary :: chk_bin(void){
    int condn = 0;
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) != '0' && s.at(i) != '1'){
            condn = 0;
        }
        else{
            condn = 1;
        }
    }
    if (condn){
        cout << "Correct Binary format!" << endl;
    }
    else{
        cout << "Incorrect binary format! "<< endl;
        exit(0);        
    }
}

void binary :: ones_complement(void){
    chk_bin();
    for(int i =0; i< s.length(); i++){
        if(s.at(i) == '1'){
            s.at(i) = '0';
        }
        else{
            s.at(i) = '1';
        }
    }
}

void binary :: display(void){
    cout <<"Displaying your binary number : " << s << endl;
}

int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_complement();
    b.display();
    return 0;
}