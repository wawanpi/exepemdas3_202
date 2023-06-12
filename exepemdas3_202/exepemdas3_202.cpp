#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/
private:
	float r; //Jari jari lingkaran
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukan jejari =";
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float keliling(int r){
		return  2 * 3.14 * r;
	}
};


class Bujursangkar :public bidangDatar { /*lengkapi disini*/
private :
	float sisi; 
public :
	void input() {
		cout << "Bujur sangkar di buat"<< endl;
		cout << "Masukan sisi = ";
		cin >> sisi;
		setX(sisi);
	}
	
};

int main() { /*lengkapi disini*/
	bidangDatar* obyek;
	Lingkaran a;
	Bujursangkar b;

	obyek = &a;
	obyek->input();
	int r = obyek->getX();
	cout << "Luas Lingkaran = " << a.Luas(r) << endl;
	cout << "keliling lingkaran = " << b.Keliling(r) << endl;
	obyek = &b;
	obyek->input();
	

	return 0;
}


