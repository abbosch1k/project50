#include <iostream>
using namespace std;

int main() {
    int x = 0;

    for(int i=0;i<10;i++) {
        if(x < 5) x++;
    }

    cout << x;
}
