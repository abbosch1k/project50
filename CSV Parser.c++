#include <iostream>
using namespace std;

int main() {
    string s = "apple,banana,orange";
    string temp = "";

    for(char c : s) {
        if(c == ',') {
            cout << temp << endl;
            temp = "";
        } else {
            temp += c;
        }
    }

    cout << temp;
}
