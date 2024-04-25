#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> rate = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F" };
    vector<double> score = { 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0 };

    double total = 0;
    double result = 0;

    for (int i = 0; i < 20; i++)
    {
        string sbj, ra;
        double sc;

        cin >> sbj >> sc >> ra;

        if (ra != "P") {
            total += sc;
            result += sc * score[distance(rate.begin(), find(rate.begin(), rate.end(), ra))];
        }
    }
    cout.precision(6);
    cout << fixed << result / total << "\n";

    return 0;
}