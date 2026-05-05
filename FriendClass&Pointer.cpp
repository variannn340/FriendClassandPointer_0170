#include <iostream>
using namespace std;

class BelahKetupat; //first declaration

class LayangLayang {
private:
    float d1, d2, s1, s2;

public:
    void input() {
        cin >> d1 >> d2 >> s1 >> s2;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

     float keliling() {
        return 2 * (s1 + s2);
    }

};
