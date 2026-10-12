#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    while (A > B) {
        if (A % 2 == 0 && A / 2 >= B) {
            cout << ":2\n";
            A /= 2;
        } else {
            cout << "-1\n";
            A--;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    do {
        if (A % 2 == 0 && A / 2 >= B) {
            cout << ":2\n";
            A /= 2;
        } else {
            cout << "-1\n";
            A--;
        }
    } while (A > B);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    for (; A > B; ) {
        if (A % 2 == 0 && A / 2 >= B) {
            cout << ":2\n";
            A /= 2;
        } else {
            cout << "-1\n";
            A--;
        }
    }

    return 0;
}




