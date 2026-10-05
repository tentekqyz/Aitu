#include <iostream>
using namespace std;

int main () {
    int score;
    cin >> score;

if (score >=90) {
    cout << "A\n";
}
else if (score >=75) {
    cout << "B\n";
}
else if (score >=50) {
    cout << "C\n";
}
else {
    cout << "F\n";
}
return 0;
}