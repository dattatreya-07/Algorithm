#include <iostream>
#include <cstring>
using namespace std;
#define MAX 256
void shiftTable(char pattern[], int m, int table[]) {
    for (int i = 0; i < MAX; i++)
        table[i] = m;

    for (int j = 0; j < m - 1; j++)
        table[(int)pattern[j]] = m - 1 - j;
}
int horspool(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    int table[MAX];

    shiftTable(pattern, m, table);

    int i = m - 1;

    while (i < n) {
        int k = 0;

        while (k < m && pattern[m - 1 - k] == text[i - k])
            k++;

        if (k == m)
            return i - m + 1;

        i += table[(int)text[i]];
    }

    return -1;
}

int main() {
    char text[100], pattern[100];

    cout << "Enter text: ";
    cin.getline(text, 100);

    cout << "Enter pattern: ";
    cin.getline(pattern, 100);

    int pos = horspool(text, pattern);

    if (pos >= 0)
        cout << "Pattern found at position: " << pos << endl;
    else
        cout << "Pattern not found\n";

    return 0;
}
