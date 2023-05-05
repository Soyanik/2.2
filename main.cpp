#include <iostream>
using namespace std;

class Road {
    private:
        int length;
        int width;
    public:
        Road() {
            length = 0;
            width = 0;
        }
   Road(int a, int b) {
            length = a;
            width = b;
        }
        void setLength(int l) {
            length = l;
        }
        void setWidth(int w) {
            width = w;
        }
        void print() {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
        }
};

int main() {
    Road r1;
    Road r2(10,5);
    r1.print();

    r1.setLength(100);
    r1.setWidth(50);
    r1.print();

    return 0;
}
