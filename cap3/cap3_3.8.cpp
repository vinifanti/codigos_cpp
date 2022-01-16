#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, x2, y1, y2, dist;
    cout << "x1: "; cin >> x1;
    cout << "y1: "; cin >> y1;
    cout << "x2: "; cin >> x2;
    cout << "y2: "; cin >> y2;

    dist = sqrt(pow((x2-x1), 2.0) + pow((y2-y1), 2.0));

    cout << "dist: " << dist << endl;

return 0;
system("pause");
}