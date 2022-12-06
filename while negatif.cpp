
#include <iostream>
using namespace std; 
int main() {
	int a ;
	int sum = 0 ; 
	cout << " Ketikkan angka:" <<endl; 
	cin >> a; 
	
	while (a<=0){ 
	    sum += a;
	
	
  		cout << " Ketikkan angka:"; 
  		cin >> a; 
  	
  	} 
  	
  	cout <<"\n Jumlahnya adalah: " << sum << endl; 
  	
  	return 0;
}
