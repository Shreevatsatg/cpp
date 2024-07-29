#include <iostream>
using namespace std;

void towerOfHanoi(int num, char from, char to, char aux) {
    if (num == 1) {
        cout << "Move disk 1 from peg " << from << " to peg " << to << endl;
        return;
    }
    towerOfHanoi(num - 1, from, aux, to);
    cout << "Move disk " << num << " from peg " << from << " to peg " << to << endl;
    towerOfHanoi(num - 1, aux, to, from);
}

int main()
    {
    int num;
    cout << "Enter the number of disks: ";
    cin >> num;
    cout << "Sequence of disk moves in Tower of Hanoi are:" << endl;
    towerOfHanoi(num, 'A', 'C', 'B');
    return 0;
}
