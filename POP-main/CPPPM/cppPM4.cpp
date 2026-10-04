#include <bits/stdc++.h>
using namespace std;

char *ultima(char *s) {
    int n = strlen(s);
    while (n > 0 && (s[n-1] == '\n' || s[n-1] == '\r' || s[n-1] == ' '))
        s[--n] = '\0';
    char *p = strrchr(s, ' ');
    return p ? p + 1 : s;
}

int rima(const char *a, const char *b) {
    int i = strlen(a) - 1, j = strlen(b) - 1, c = 0;
    while (i >= 0 && j >= 0 && a[i] == b[j]) {
        c++; 
        i--; 
        j--;
    }
    return c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char v[4][2105];
    char *w[4];

    for (int i = 0; i < 4; i++) {
        if (fgets(v[i], 2105, stdin) == NULL) break;
        w[i] = ultima(v[i]);
    }

    printf("%d\n", rima(w[0], w[2]) + rima(w[1], w[3]));
    return 0;
}