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

     void output() {
        cout << "Layang-Layang\n";
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }

    friend class BelahKetupat;

};

class BelahKetupat {
private:
    float d1, d2, s;

public:
    void input() {
        cin >> d1 >> d2 >> s;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 4 * s;
    }

    void output() {
        cout << "Belah Ketupat\n";
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }

    // access friend
    void akses(LayangLayang l) {
        cout << "Keliling Layang-Layang: " << l.keliling() << endl;
    }

};

int main() {

    LayangLayang l;
    BelahKetupat b;

    l.input();
    b.input();

    l.output();
    b.output();

    b.akses(l);

    return 0;

}


