#include <iostream>

using namespace std;

int main() 
{
    int age;
    char parent;
    double money;

    cout << "Enter your age: "; cin >> age;
    cout << "Are you with your parents? (Y/N): ";
    cin >> parent;
    cout << "Enter the amount of money you have: ";
    cin >> money;

    if (age <13) {
        cout << "You can attend: G" << endl;
        if (parent == 'Y') {
            cout << "You can attend: G, PG" << endl;
        }
    } else if (age >=13 && age <16) { 
         cout << "You can G, PG movies." << endl;
         if (parent == 'Y') {
            cout << "You can attend: G, PG, R" << endl;
         }
    } else if (age >=16) {
        cout << "You can attend: G, PG, R" << endl;
    }     
    if (money >= 10.50) {
        cout << "You can attend: Evening" << endl;
    } else if (money >= 7.50) {
        cout << "You can attend: Matinee" << endl;
    }

    return 0;
}
