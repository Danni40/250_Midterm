#include <iostream>

using namespace std;

int countDifferentWays(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else if (n == 2)
        return 2;

    else
        return countDifferentWays(n - 3) +
        countDifferentWays(n - 2) +
        countDifferentWays(n - 1);
}

int main() {
    int finalFloor = 0;
    cout << "Enter the last floor that you want to get to: ";
    cin >> finalFloor;
    cout << "You can reach floor " << finalFloor << " in " << countDifferentWays(finalFloor) << " different ways " << endl;
}