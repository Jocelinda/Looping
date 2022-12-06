#include <iostream>
using namespace std; 
int main (){
	int i,j;
	for (i=0 ; i<5 ; i++){
		cout << endl; // cout endl biar misah ke bawah 
		for (j=0 ; j<5 ; j++){
		
			cout << "(" << i << "," << j << ") " ;
		}
	}
	return 0; 
}
