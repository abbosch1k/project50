#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> history;
    string cmd;

    for(int i=0;i<3;i++) {
        cin >> cmd;
        history.push_back(cmd);
    }

    for(string h : history)
        cout << h << endl;
}
