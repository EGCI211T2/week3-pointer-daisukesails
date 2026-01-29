#include <iostream>
#include <iomanip>
#include <cstdlib>   // for atoi

using namespace std;

int main(int argc, char *argv[])
{
    int n = argc - 1;

    if (n <= 0) {
        cout << "No numbers provided." << endl;
        return 0;
    }

    int *p = new int[n];

    for (int i = 0; i < n; i++) {
        p[i] = atoi(argv[i + 1]);
    }

    cout << "Original: ";
    for (int i = 0; i < n; i++) {
        cout << setw(3) << *(p + i);
    }
    cout << endl;

    int *pa = p;
    int *pb = p + n - 1;
    int temp;

    for (int i = 0; i < n / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb--;
    }

    cout << "Reversed: ";
    for (int i = 0; i < n; i++) {
        cout << setw(3) << *(p + i);
    }
    cout << endl;

    delete[] p;

    return 0;
}
