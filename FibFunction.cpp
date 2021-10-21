/***********************************/
/*				   */
/* Code by: Khromov Egor Pavlovich */
/* github.com/SochnoeAnime/LABScpp */
/*		10.2021		   */
/*				   */
/***********************************/
#include <iostream>

using namespace std;

long int FibSeq(int members);

int main(){

    int number_of_members;

    cin >> number_of_members;

    for (int i = 1; i <= number_of_members; i++)
    {
        cout << FibSeq(i) << endl;
    };

    system("payse");
    return 0;
}

long int FibSeq(int i){
    if (i < 1) return 0;
    if (i == 1) return 1;
    return FibSeq(i - 1) + FibSeq(i - 2);
}
