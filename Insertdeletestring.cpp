#include <iostream>
#include <cstring>
using namespace std;

void insertSubstring(char mainStr[], const char subStr[], int pos) {
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);
    for (int i = mainLen; i >= pos; i--) {
        mainStr[i + subLen] = mainStr[i];
    }

    for (int i = 0; i < subLen; i++) {
        mainStr[pos + i] = subStr[i];
    }
}
void deleteSubstring(char mainStr[], int pos, int n) {
    int mainLen = strlen(mainStr);
    for (int i = pos; i <= mainLen; i++) {
        mainStr[i] = mainStr[i + n];
    }
}

int main() {
    char str[200], sub[100];
    int pos, n, choice;

    cout << "Enter the main string: ";
    cin.getline(str, 200);

    cout << "\nChoose operation:\n1. Insert substring\n2. Delete substring\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter substring to insert: ";
        cin.ignore();
        cin.getline(sub, 100);
        cout << "Enter position (0-based index): ";
        cin >> pos;

        insertSubstring(str, sub, pos);
        cout << "String after insertion: " << str << endl;
    }
    else if (choice == 2) {
        cout << "Enter position to delete from (0-based index): ";
        cin >> pos;
        cout << "Enter number of characters to delete: ";
        cin >> n;

        deleteSubstring(str, pos, n);
        cout << "String after deletion: " << str << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
