#include <iostream>
using namespace std;

int n;
#define maxn 11

char arr1[maxn][maxn];
char arr2[maxn][maxn];
char temp[maxn][maxn];
char refa[maxn][maxn];

void turn90(char a[maxn][maxn]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[j][n - 1 - i] = a[i][j];
        }
    }
}

void turn180(char a[maxn][maxn]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[n - 1 - i][n - 1 - j] = a[i][j];
        }
    }
}

void turn270(char a[maxn][maxn]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[n - 1 - j][i] = a[i][j];
        }
    }
}

void reflection(char a[maxn][maxn]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][n - 1 - j] = a[i][j];
        }
    }
}

bool check() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr2[i][j] != temp[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool nochange() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i][j] != arr2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void copyTempToRefa() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            refa[i][j] = temp[i][j];
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr2[i][j];
        }
    }

    turn90(arr1);
    if (check()) {
        cout << 1;
        return 0;
    }

    turn180(arr1);
    if (check()) {
        cout << 2;
        return 0;
    }

    turn270(arr1);
    if (check()) {
        cout << 3;
        return 0;
    }

    reflection(arr1);
    if (check()) {
        cout << 4;
        return 0;
    }

    copyTempToRefa();

    turn90(refa);
    if (check()) {
        cout << 5;
        return 0;
    }

    turn180(refa);
    if (check()) {
        cout << 5;
        return 0;
    }

    turn270(refa);
    if (check()) {
        cout << 5;
        return 0;
    }

    if (nochange()) {
        cout << 6;
        return 0;
    }

    cout << 7;
    return 0;
}