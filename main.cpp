#include <iostream>
using namespace std;

double returnTimeInMs() {
    return 1.2;
}

int bubbleSort() {
    cout << "sorted" << endl;
};

int main() {
    cout << "Hello, World!" << endl;
    cout << returnTimeInMs() << endl;
    bubbleSort();
    return 0;
}
