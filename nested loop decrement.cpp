#include <iostream>
using namespace std; 
int main (){
	int i,j;
	for (i=4; i>=0 ; i--){
		cout << endl; // cout endl biar misah ke bawah 
		for (j=4 ; j>=0 ; j--){
		
			cout << "(" << i << "," << j << ") " ;
		}
	}
	return 0; 
}
