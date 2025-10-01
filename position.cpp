#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char S[200], T[100];
    cout << "Enter the main string S: ";
    cin.getline(S, 200);
    cout << "Enter the substring T: ";
    cin.getline(T, 100);

    int lenS = strlen(S);
    int lenT = strlen(T);
    int pos = -1;  

    for (int i = 0; i <= lenS - lenT; i++) {
        int j = 0;
        while (j < lenT && S[i + j] == T[j]) {
            j++;
        }
        if (j == lenT) {   
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Substring found at index: " << pos << endl;
    else
        cout << 1 << endl;

    return 0;
}
