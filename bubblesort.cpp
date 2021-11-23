#include<iostream>

using namespace std;

void swap(int & a, int & b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}