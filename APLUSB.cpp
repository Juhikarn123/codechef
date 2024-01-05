#include <bits/stdc++.h>
using namespace std;


vector<int> inputVector(int juhi) 
{
    vector<int> arr1(juhi);
    for(int x = 0; x < juhi; x++) 
    {
        cin >> arr1[x];
    }
    return arr1;
}


void printVector(const vector<int>& arr1) 
{
    for(int x : arr1) 
    {
        cout << x << " ";
    }
    cout << endl;
}


void atob() 
{
    int juhi;
    cin >> juhi;
    
    vector<int> arr1 = inputVector(juhi);
    vector<int> arr2 = inputVector(juhi);

    bool equall = true;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    reverse(arr2.begin(), arr2.end());

    for(int x = 1; x < juhi; x++) 
    {
        if(arr1[x] + arr2[x] != arr1[0] + arr2[0]) 
        {
            equall = false;
            break;
        }
    }

    if(equall) 
    {
        printVector(arr1);
        printVector(arr2);
    } 
    else 
    {
        cout << -1 << endl;
    }
}

int main() 
{
    
    long testcase;
    cin >> testcase;
    while(testcase--) 
    {
        atob();
    }
    return 0;
}
