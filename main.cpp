#include        <iostream>
#include        <iomanip>
using   namespace       std;

int main()
{
    int i, begin, end, sum=0 ;

	/* ************************************************
	// complete your code
	*********************************************** */

		cout << "Enter two numbers (first must be less than the second): ";
		cin >> begin >> end;

	 	while(begin >= end) {

	for (int i = begin; i <= end; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
		}
    cout << "The sum of even values is " << sum << endl;
}
