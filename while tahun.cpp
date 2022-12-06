#include <stdio.h>
#include <iostream>
using namespace std; 
int main (){ 
int tahun= 1;  
int bulan;
int hari; 

do { 
bulan = tahun * 12; 
hari = tahun * 360;
cout << tahun <<"Tahun " << bulan << "bulan " << hari << "hari " << endl; 
tahun++; 

} while (tahun<=12); 
 return 0; 
}
