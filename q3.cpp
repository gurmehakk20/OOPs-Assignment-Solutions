#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    bool col0 = false, row0 = false;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 0) {
                if (i == 0) row0 = true;
                if (j == 0) col0 = true;
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < m; i++) {
        if (mat[i][0] == 0) {
            for (int j = 1; j < n; j++) {
                mat[i][j] = 0;
            }
        }
    }

    for (int j = 1; j < n; j++) {
        if (mat[0][j] == 0) {
            for (int i = 1; i < m; i++) {
                mat[i][j] = 0;
            }
        }
    }

    if (row0) {
        for (int j = 0; j < n; j++) {
            mat[0][j] = 0;
        }
    }

    if (col0) {
        for (int i = 0; i < m; i++) {
            mat[i][0] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
