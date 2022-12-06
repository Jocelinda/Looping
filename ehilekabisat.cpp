#include <stdio.h>
#include <iostream>
using namespace std; 
int main (){ 
int tahun= 1;   
int bulan=0;
int hari=0; 



do { 
bulan += 12; 

if (tahun % 4 == 0){ 
hari += 12*31; 
cout << tahun <<" Tahun " << bulan << " bulan " << hari << " hari " << endl;

} 
else {
hari+= 12*30 ;
cout << tahun <<" Tahun " << bulan << " bulan " << hari << " hari " << endl;
}
tahun++;
}while (tahun<=12); 
 return 0; 
}
