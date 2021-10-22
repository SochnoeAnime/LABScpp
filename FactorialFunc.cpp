/***********************************/
/*				   */
/* Code by: Khromov Egor Pavlovich */
/* github.com/SochnoeAnime/LABScpp */
/*		10.2021		   */
/*				   */
/***********************************/
#include <iostream>

using namespace std;

double FactorialFunc(int fnumber);
int PrimeNumbersFunc(int pnumber);

int main() {

    int fnum, pnum;

    cin >> fnum >> pnum;

    cout << endl;

    cout << FactorialFunc(fnum) << "\n\n";
    for (int i = 1; i <= pnum; i++)
    {
        if (PrimeNumbersFunc(i) == 1) cout << i << endl;
    }  

    system("payse");
    return 0;
}

double FactorialFunc(int fnumber) {
    if (fnumber == 0) return 1;
    else return fnumber * FactorialFunc(fnumber - 1);
}

int PrimeNumbersFunc(int pnumber) {
    for (int j = 2; j <= pnumber/2; j++)
    {
        if ((pnumber % j) == 0) return 0;
    }

    return 1;
}