#include <iostream>
using namespace std;

int main() {
    int x = 0;

    for(int i=0;i<6;i++) {
        x++;
        if(x == 3) x = 0;
        cout << x << " ";
    }
}
