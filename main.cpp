#include        <iostream>
#include        <iomanip>
using   namespace       std;

int main()
{
    int i, begin, end, sum=0 ;

	/* ************************************************
	// complete your code
	*********************************************** */

		begin = 1; 
		end = 0;
	 	while(begin >= end) {
			cout << "Enter two numbers (first must be less than the second): ";
			cin >> begin >> end;
		}

	for (int i = begin; i <= end; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
		
    cout << "The sum of even values is " << sum << endl;
}
