#include <iostream>
using namespace std;

int main()
{
    // Multiplication table Nested for loop

    // outer loop
    for (int i = 1; i <= 10; i++) {
        // inner loop
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;

        }
        cout << endl;
    }

    system("pause>0");
}

