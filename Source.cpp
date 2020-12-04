#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;
    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        a[i] = value;
    }
    for (int j = 0; j < size; j++) {
        int flag = 0;
        int num;
        for (int i = 0; i < size; i++) {
            if (a[i] == a[j]) {
                flag++;
                if (flag > 1) {
                    num = i;
                    break;
                }
            }
        }
        if (flag > 1) {
            for (int i = num; i < size - 1; i++) {
                a[i] = a[i + 1];
            }
            a[size - 1] = 0;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}