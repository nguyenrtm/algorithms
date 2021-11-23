#include<iostream>

using namespace std;

void findmin(int start, int end, int *a) {
    int min = a[start];
    for (int i = start+1; i < end; i++) {
        if (min > a[i]) min = a[i];
    }
    int m;
    for (int i = start; i < end; i++) {
        if (min == a[i]) m = i;
    }
    int tmp = a[start];
    a[start] = a[m];
    a[m] = tmp;
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout << "Sorting: " << endl;
    for (int i = 0; i < n-1; i++) {
        findmin(i, n, a);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}