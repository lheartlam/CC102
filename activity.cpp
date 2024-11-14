#include <iostream>

using namespace std;

int main ()
 {
    int age;
    string withParent;
    string showtime;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you with a parent? (yes/no): ";
    cin >> withParent;
    cout << "Matinee or Evening? ";
    cin >> showtime;

    if (age < 13) {
        if (withParent == "yes") {
            cout << "You can watch G, PG movie." << endl;
    }   else {
        cout << "You can only watch G movies." << endl;
    }
    } else if (age >=13 && age <16) {
        }
         if (age >=13 && age <16) {
            if (withParent == "yes") {
                cout << "You can watch G, PG, R movies." << endl;
            } else {
                cout << "You can G, PG movies." << endl;
            }
        } else { // age >=16
            cout << "You can watch G, PC, R movies." << endl;
        }
    if (showtime == "Matinee") {
        cout << "Ticket price: $ 7.50" << endl;
    } else if (showtime == "Evening") {
        cout << "Ticket price: $10.50" << endl;
    } else {
        cout << "Invalid showtime." << endl;
    }
    return 0;
}