//preprocessor directives
#include <iostream>
using namespace std;

int main()
{
//varibales
    int value1, value2, value3;
    cout << "Please enter three integer values: ";
    cin >> value1 >> value2 >> value3;

//multi if else statement to get tha values in ascending order
    if (value1 < value2 && value1 < value3) {
        if (value2 < value3) {
            cout << "The three values in ascending order are: "<<value1 << " " << value2 << " " << value3;
        } else {
            cout << "The three values in ascending order are: "<<value1 << " " << value3 << " " << value2;
        }
    } else if (value2 < value1 && value2 < value3) {
        if (value1 < value3) {
            cout << "The three values in ascending order are: "<<value2 << " " << value1 << " " << value3;
        } else {
            cout << "The three values in ascending order are: "<<value2 << " " << value3 << " " << value1;
        }
    } else if (value3 < value1 && value3 < value2) {
        if (value1 < value2) {
            cout << "The three values in ascending order are: "<<value3 << " " << value1 << " " << value2;
        } else {
            cout << "The three values in ascending order are: "<<value3 << " " << value2 << " " << value1;
        }
    }
// Add newline after printing the sorted numbers
    cout << endl; 
    return 0;
}
