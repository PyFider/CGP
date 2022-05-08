#include <iostream>
using namespace std;

int main()
{
    while(true) {
        double bf, bn, q;
        cout << "Your first number| ";
        cin >> bf;
        
        cout << "Your last number| ";
        cin >> bn;

        cout << "Your q number| ";
        cin >> q;

        if (q == 0 or q == 1) {
            cout << "Answer| q must be != 0 or 1";
        }

        if (q != 0 and q != 1) {
            double s = (bn*q-bf)/(q-1);
            cout << s;
        }
    }
}