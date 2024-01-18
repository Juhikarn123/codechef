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
        for (int i = 0; i < jashi; ++i) {
            cin >> array[i];
        }

        if (jashi <= 2) {
            cout << -1 << endl;
        } else {
            int count1 = -1, count3 = -1;
            for (int i = 0; i < jashi; ++i) {
                if (array[i] == 1) {
                    count1 = i;
                } else if (array[i] == 3) {
                    count3 = i;
                }
            }

            if (count1 != -1 && count3 != -1) {
                swap(array[count1], array[count3]);

                for (int res : array) {
                    cout << res << " ";
                }
                cout << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
