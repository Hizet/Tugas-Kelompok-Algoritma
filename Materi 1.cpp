#include <iostream>
using namespace std;
//nama dan nim = Muhammad Abdillah Puruhita_2022240045

int main () {
	int a=5; 	 
	int *b;
	b = &a;
	cout << "Nilai Variabel a adalah : " <<a<<endl;
	cout << "Alamat variabel a adalah : " <<&a<<endl;
	cout << "Isi dari variabel b adalah : " <<b<<endl;
	cout << "Nilai yang tertampung dalam variabel b adalah : " <<*b<<endl;
	return 0;
}


