#include<bits/stdc++.h>
using namespace std;
namespace ns1 {
    int x = 2, y = 3;
    void show(int a, int b) {
        x = a + b;
       std:: cout << "x + y = " << x + y << std::endl;
    }
    namespace ns2 {
        int x, y;
        void show(int a, int b) {
            x = a; y = b;
            std::cout << x + y << std::endl;
        }
    } // end of ns2
} // end of ns1

int main() {
    ns1::show(10, 20);
    ns1::x = 5;
    ns1::y = 6;
    ns1::ns2::show(ns1::x, ns1::y);
    using namespace ns1::ns2;
    show(1, 2);
    show(ns1::x, y);
    show(x, ns1::y);
    ns1::show(x, y);
    return 0;
}
