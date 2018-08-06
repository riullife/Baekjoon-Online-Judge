#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<100000> a;
    bitset<100000> b;
    cin >> a >> b;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << ~(a) << endl;
    cout << ~(b) << endl;
    return 0;
}
