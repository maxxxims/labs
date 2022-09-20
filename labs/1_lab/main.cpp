#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    int N = 100000, accuracy = 53;
    double y[] = {M_PI / (M_E + 17), M_PI / (M_E + 17)}, x;

    if(accuracy >= 53)  accuracy = 53;
    cout << "number of signs after dot: " << accuracy << endl;

    ofstream fout("output.txt");
    cout << setprecision(accuracy);
    fout << setprecision(accuracy);

    fout << y[0] << endl << y[1] << endl;
    cout << "y_1 = " << y[0] << endl << "y_2 = " << y[1] << endl;

    for(int i = 0; i < N; i++)
    {
        x = (M_PI - 12 * y[1] - 5 * y[0]) / M_E;
        fout << x << endl;
        y[0] = y[1];
        y[1] = x;
    }
    cout << "..." << endl << "y_" << N <<" = " << x << endl;
    return 0;
}
