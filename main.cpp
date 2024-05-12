#include <iostream>
using namespace std;

double returnTimeInMs() {
    return 1.2;
}

string returnAuthors() {
    return "Samuel Svancarek";
}

int main() {
    cout << "Hello, World!" << endl;
    cout << returnTimeInMs() << endl;
    cout << returnAuthors() << endl;
    return 0;
}
