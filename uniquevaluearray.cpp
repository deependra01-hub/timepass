#include <iostream>
using namespace std;

int unique(int aar1[], int n, int aar2[]) {
    int m = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < m; j++) {
            if (aar1[i] == aar2[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            aar2[m] = aar1[i];
            m++;
        }
    }
    return m;
}


int main() {
    int aar1[] = {1,2,3,4,5,1,2,3};
    int n = sizeof(aar1)/sizeof(int);
    int aar2[n];

    int count = unique(aar1, n, aar2);

    for (int i = 0; i < count; i++) {
        cout << aar2[i] << " ";
    }
}
