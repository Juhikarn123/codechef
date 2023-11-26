#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define vli vector<ll>

using namespace std;

void customFunction() {
    ll juhi; 
    cin >> juhi;
    vli elements(juhi); 

    ll jashi = 0, nit = 0; 
    for (int i = 0; i < juhi; i++)
        cin >> elements[i];

    vector<ll> oddElements, evenElements;
    vector<ll> result(juhi, -1);  

    for (auto element : elements) {
        if (element % 2 != 0) {
            jashi++;  
            oddElements.push_back(element);
        } else
        {
            nit++; 
            evenElements.push_back(element);
        }
    }

    if (nit % 2 != 0 || jashi % 2 != 0)
    { 
        cout << "-1";
    } 
    else 
    {
        sort(evenElements.begin(), evenElements.end());
        sort(oddElements.begin(), oddElements.end());
        vector<int> oddCounts(jashi), evenCounts(nit);  

        int k = 0;
        for (auto z : oddElements) 
        {
            oddCounts[k] = z;
            k += 2;
            if (k >= jashi)
                k = 1;
        }

        k = 0;
        for (auto z : evenElements) 
        {
            evenCounts[k] = z;
            k += 2;
            if (k >= nit)
                k = 1;
        }

        int itr = 0;
        for (int z = 0; z < jashi; z += 2) 
        {  
            result[itr] = (oddCounts[z] + oddCounts[z + 1]) / 2;
            result[itr + (juhi / 2)] = abs(oddCounts[z] - oddCounts[z + 1]) / 2;
            itr++;
        }

        for (int z = 0; z < nit; z += 2)
        {  
            result[itr] = (evenCounts[z] + evenCounts[z + 1]) / 2;
            result[itr + (juhi / 2)] = abs(evenCounts[z] - evenCounts[z + 1]) / 2;
            itr++;
        }

        for (auto h : result) {
            cout << h << " ";
        }
    }
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        customFunction();
        cout << endl;
    }

    return 0;
}
