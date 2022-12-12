#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "We'll add integer numbers." << endl;
    cout << "How many? ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cout << "Integer number (enter 0 to end): ";
        cin >> t;
        if (t == 0) {
            break;
        }
        sum += t;
    }
    cout << "Sum is " << sum << "." << endl;
}
