#include <iostream>
#include <vector>

using namespace std;

bool findprime(int juhi) {
    if (juhi < 2) {
        return false;
    }
    for (int i = 2; i * i <= juhi; ++i) {
        if (juhi % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int jashi;
        cin >> jashi;
        vector<int> array(jashi);
        int i = 0;

        while (i < jashi) {
            cin >> array[i];
            ++i;
        }

        if (jashi <= 2) {
            cout << -1 << endl;
        } else {
            int count1 = -1, count3 = -1;
            i = 0;

            while (i < jashi) {
                array[i] == 1 ? count1 = i : (array[i] == 3 ? count3 = i : 0);
                ++i;
            }

            if (count1 != -1 && count3 != -1) {
                swap(array[count1], array[count3]);

                i = 0;
                while (i < jashi) {
                    cout << array[i] << " ";
                    ++i;
                }
                cout << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
