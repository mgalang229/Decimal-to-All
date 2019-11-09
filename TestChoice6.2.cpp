#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int decimal[100], num, i = 0, value = 0, choice;
	char decimal2[100];
	
	cout << "~~~~~~~~~~ Decimal Conversion ~~~~~~~~~~\n\n";
	cout << "\t [1] Binary" << endl;
	cout << "\t [2] Decimal" << endl;
	cout << "\t [3] Octadecimal" << endl;
	cout << "\t [4] Hexadecimal" << endl;
	
	cout << "\n\tEnter Desired Output Type: ";
	cin >> choice;
	cout << "\n\tEnter Decimal Number: ";
	cin >> num;
	if(choice == 1){
		while (num > 0)
		{	
			decimal[i] = num%2;
			num = num/2;
			i++;
		}
		cout << "\n\tBinary Value = ";
		for(i = i - 1; i >= 0; i--){
			cout << decimal[i];
		}
	} else if(choice == 2){
		while (num > 0)
		{	
			decimal[i] = num%10;
			num = num/10;
			i++;
		}
		cout << endl << "\t";
		for(i = i - 1; i >= 0; i--){
			if(i != 0){
				cout << decimal[i] << "*" << "(10^" << i << ") + ";
			} else{
				cout << decimal[i] << "*" << "(10^" << i << ")";
			}
			value += decimal[i] * pow(10, i);
		}
		cout << "\n\n\tDecimal Value = " << value;
	} else if(choice == 3){
		while (num > 0)
		{	
			decimal[i] = num%8;
			num = num/8;
			i++;
		}
		cout << "\n\tOctadecimal Value = ";
		for(i = i - 1; i >= 0; i--){
			cout << decimal[i];
		}
	} else if(choice == 4){
		while (num != 0)
		{	
			value = num % 16;
			if(value == 0){
				decimal2[i] = '0';	
			} else if(value == 1){
				decimal2[i] = '1';
			} else if(value == 2){
				decimal2[i] = '2';
			} else if(value == 3){
				decimal2[i] = '3';
			} else if(value == 4){
				decimal2[i] = '4';
			} else if(value == 5){
				decimal2[i] = '5';
			} else if(value == 6){
				decimal2[i] = '6';
			} else if(value == 7){
				decimal2[i] = '7';
			} else if(value == 8){
				decimal2[i] = '8';
			} else if(value == 9){
				decimal2[i] = '9';
			} else if(value == 10){
				decimal2[i] = 'A';
			} else if(value == 11){
				decimal2[i] = 'B';
			} else if(value == 12){
				decimal2[i] = 'C';
			} else if(value == 13){
				decimal2[i] = 'D';
			} else if(value == 14){
				decimal2[i] = 'E';
			} else if(value == 15){
				decimal2[i] = 'F';
			}
			num = num / 16;
			i++;
		}
		cout << "\n\tHexadecimal Value = ";
		for(i = i - 1; i >= 0; i--){
			cout << decimal2[i];
		}
	} else{
		cout << "\n\tInvalid Input" << endl;
	}
	
	return 0;
	
}
