#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>
#include "gotoxy.cpp"
#include <conio.h>

using namespace std;

class NhanVien
{
private: 
	string ten, ca , sdt;
    static int soluongnhanvien;
    int stt;
    string Matkhau;
    void setmk(string mk){
        Matkhau=mk;
    }
    string getmk(){
        return Matkhau;
    }
public:
	NhanVien(string = " ", string = " ", string = " ", string = " ");
	NhanVien& setNhanVien(string, string, string, string);
	NhanVien& setten(string);
	NhanVien& setca(string);
	NhanVien& setsdt(string);
   void getvasetmk(string mk){
    setmk(mk);getmk();
   }
	string getten() const
	{
		return ten;
	}
	string getca() const
	{
		return ca;
	}
	string getsdt() const
	{
		return sdt;
	}
	void GhiThongTinNhanVien(ofstream &FileOut)
{
	FileOut << "Ten: " << getten() << ", Ca Truc: " << getca() << ", Sdt: " << getsdt() << endl;
}
//Qua tai toan tu nhap Nhan Vien
friend istream &operator >> (istream &is, NhanVien &n)
{
	cout << "Nhap ten nhan vien: "; 
	is >> n.ten;
	cout << "Nhap so dien thoai: "; 
	is >> n.sdt;
	cout << "Nhap ca truc: "; 
	is >> n.ca;
	return is;
	
}
//Qua tai toan tu xuat Nhan Vien
friend ostream &operator << (ostream &os, NhanVien &n)
{
	os << "Thong Tin Nhan Vien thu " << n.stt << " la:" << endl;
	os << "Ten: "<< n.getten() << "\n";
	os << "Sdt: "<< n.getsdt() << "\n";
	os << "Ca Truc: "<< n.getca() << "\n";
	return os;
}
	};
istream &operator >> (istream &is, NhanVien &n);
ostream &operator << (ostream &os, NhanVien &n);
NhanVien::NhanVien(string ten1, string ca1, string sdt1,string Matkhau1)
{
	setNhanVien(ten1, ca1, sdt1,Matkhau1);
    stt=++soluongnhanvien;
}
NhanVien& NhanVien :: setNhanVien(string name, string catruc, string sodt,string mk)
{
	setten(name);
	setca(catruc);
	setsdt(sodt);
	setmk(mk);
	return *this;
}
NhanVien& NhanVien::setten(string name)
{
	ten = name;
	return *this;
}
NhanVien& NhanVien::setca(string catruc)
{
	ca = catruc;
	return *this;
}
NhanVien& NhanVien::setsdt(string sodt)
{
	sdt = sodt;
	return *this;
}
int NhanVien::soluongnhanvien=0;
class Xe {  
private:
    string biensoxe;
    string loaixe;
    int stt;
   int  static soluongxe;  
   string dt;
public:
    Xe(string biensoxe, string loaixe) {
        this->biensoxe = biensoxe;
        this->loaixe = loaixe;
        stt=++soluongxe; 
    }
    //Qua tai toan tu nhap Xe
    friend istream& operator>>(istream& is, Xe& x)
{   
    system("cls");
    gotoxy(35, 9);
    cout << " _________________________________________________________";
    gotoxy(35, 10);
    cout << "|                          =>                             |";
    gotoxy(35, 11);
cout << "| Loai xe mang the xe so " << x.stt << " khi vao camera la:             |";    
gotoxy(35, 12);
    cout << "|        Hay nhap:                                        |";
    gotoxy(35, 13);
    cout << "|   [1]. xemay neu la xe may                              |";
    gotoxy(35, 14);
    cout << "|   [2]. xedap neu la xe dap                              |";
    gotoxy(35, 15);
    cout << "|   [3]. oto neu la xe o to                               |";
    gotoxy(35, 16);
    cout << "|      Nhap lua chon:                                     |";
    gotoxy(35, 17);
    cout << "|                                                         |";
    gotoxy(35, 18);
    cout << "|                                                         |";
    gotoxy(35, 19);
    cout << "|_________________________________________________________|";
    gotoxy(60,16);
    is >> x.loaixe;
    
    if (x.loaixe == "xedap")
    {   
        gotoxy(48,17);
        cout << "Bo qua check bien so..." << endl;
        x.biensoxe="khong co";
    }
    else if (x.loaixe == "xemay" || x.loaixe == "oto")
    {   
        gotoxy(36,17);
cout << "Bien so xe mang the xe so " << x.stt << " khi vao camera la: ";
        is >> x.biensoxe;
    }
    else
    {
        do
        {   

    system("cls");
    gotoxy(35, 9);
    cout << " _________________________________________________________";
    gotoxy(35, 10);
    cout << "|           Vui long nhap lai theo mau:                   |";
    gotoxy(35, 11);
 cout << "| Loai xe mang the xe so " << x.stt << " khi vao camera la: |";
    gotoxy(35, 12);
    cout << "|        Hay nhap:                                        |";
    gotoxy(35, 13);
    cout << "|   [1]. xemay neu la xe may                              |";
    gotoxy(35, 14);
    cout << "|   [2]. xedap neu la xe dap                              |";
    gotoxy(35, 15);
    cout << "|   [3]. oto neu la xe o to                               |";
    gotoxy(35, 16);
    cout << "|      Nhap lua chon:                                     |";
    gotoxy(35, 17);
    cout << "|                                                         |";
    gotoxy(35, 18);
    cout << "|                                                         |";
    gotoxy(35, 19);
    cout << "|_________________________________________________________|";
    gotoxy(60,16);
            is >> x.loaixe;
            
            if (x.loaixe == "xedap")
            {
                 gotoxy(48,17);
                cout << "Bo qua check bien so..." << endl;
                x.biensoxe="khong co";
            }
            else if (x.loaixe == "xemay" || x.loaixe == "oto")
            {   
                gotoxy(36,17);
cout << "Bien so xe mang the xe so " << x.stt << " khi vao camera la: ";
                is >> x.biensoxe;
            }
        } while (x.loaixe != "xedap" && x.loaixe != "xemay" && x.loaixe != "oto");
    }
    
    return is;
}
void tgianxevao() {
      time_t now = time(0);
        dt = ctime(&now);
        gotoxy(35, 14);
cout << "|      thoi diem xe vao la: "<< dt     ; gotoxy(93,14)       ;   cout <<   "|";
Sleep(2000);
    }

	
	//Qua tai toan tu xuat Xe
	friend ostream &operator << (ostream &os, Xe &x)
	{   
            system("cls");
    gotoxy(35, 9);
    os << " _________________________________________________________";
    gotoxy(35, 10);
    os << "|     camera check duoc cua nguoi thu " << x.stt <<" :                 |";
    gotoxy(35, 11);
os << "| Loai xe mang the xe so " << x.stt << " khi vao camera la:" ; gotoxy(93,11) ; cout << "|";
    gotoxy(35, 12);
    os << "|      bien so la : "<< x.biensoxe  ; gotoxy(93,12)  ;        cout <<    "|";
    gotoxy(35, 13);
    os << "|      loai xe la : "<< x.loaixe     ; gotoxy(93,13)       ;   cout <<   "|";
    gotoxy(35, 14);
cout << "|"; gotoxy(93,14); cout <<   "|";
    gotoxy(35, 15);
    os << "|_________________________________________________________|";
    Sleep(1800);
		return os;
	}
      
    string getdtvao() {
        return dt;
    }
    string getBienSoXe() {
        return biensoxe;
    }
    int getstt(){
    	return stt;
	}

    string getLoaiXe() {
        return loaixe;
    }
};
int Xe::soluongxe= 0; 
istream &operator >> (istream &is, Xe &x);
ostream &operator << (ostream &os, Xe &x);

class TheXe {
private:
    string sothe;
public:
    TheXe(string sothe) {
        this->sothe = sothe;
    }
    
    friend istream &operator >> (istream &is, TheXe &tx)
    {
    	cout << "so the xe : "<<endl;
        is >> tx.sothe;
        return is;
	}

    string getSoThe() {
        return sothe;
    }
};
istream &operator >> (istream &is, TheXe &tx);

class Thethongminh : public TheXe {
private:
    string tenhocsinh;
    string loaithenganhang;
    int sothesinhvien;
    long long int  sothenganhang;
     int tientaikhoan;
     static int soluongcard;
     int stt;
public:
    Thethongminh(string sothe, string tenhocsinh, string loaithenganhang,  int sothesinhvien, int sothenganhang,int tientaikhoan) : TheXe(sothe) {
       
        this->tenhocsinh = tenhocsinh;
        this->loaithenganhang = loaithenganhang;
        this->sothesinhvien = sothesinhvien;
        this->sothenganhang = sothenganhang;
         this->tientaikhoan = tientaikhoan;
         stt=++soluongcard;
    }

    void settenhocsinh(string tenhocsinh) {
        this->tenhocsinh = tenhocsinh;
    }

    void setloaithenganhang(string loaithenganhang) {
        this->loaithenganhang = loaithenganhang;
    }

    void setsothesinhvien(int sothesinhvien) {
        this->sothesinhvien = sothesinhvien;
    }
     void setsothenganhang(int sothenganhang) {
        this->sothenganhang = sothenganhang;
    }
    void settientaikhoan(int tientaikhoan) {
        this->tientaikhoan = tientaikhoan;
    }
    



    string gettenhocsinh() {
        return tenhocsinh;
    }

    string getloaithenganhang() {
        return loaithenganhang;
    }

    int getsothesinhvien() {
        return sothesinhvien;
    }
    int getsothenganhang() {
        return sothenganhang;
    }
    int gettientaikhoan() {
        return tientaikhoan;
    }
    int getsoluongcard(){
    	return soluongcard;
	}
	int getstt(){
		return stt;
	}
	friend ostream &operator << (ostream &os, Thethongminh &t)
	{
    system("cls");
    gotoxy(35, 9);
    os << " _________________________________________________________";
    gotoxy(35, 10);
    os << "|     may check duoc the cua nguoi thu " << t.stt <<" :                |";
    gotoxy(35, 11);
    os << "|    Tong the thong minh da duoc tao: " << t.getsoluongcard() ; gotoxy(93,11) ; cout << "|";
    gotoxy(35, 12);
    os << "|     So luong the thong minh thu : "<< t.stt ; gotoxy(93,12) ; cout << "|";
    gotoxy(35, 13);
    os << "|      Ten hoc sinh  la: " << t.gettenhocsinh()    ; gotoxy(93,13)       ;   cout <<   "|";
    gotoxy(35, 14);
    os << "|      Loai the ngan hang  la: " << t.getloaithenganhang()    ; gotoxy(93,14)       ;   cout <<   "|";
    gotoxy(35, 15);
    os << "|      So the sinh vien la: " << t.getsothesinhvien()    ; gotoxy(93,15)       ;   cout <<   "|";
    gotoxy(35, 16);
    os << "|      Tien tai khoan con la : "<< t.gettientaikhoan()    ; gotoxy(93,16)       ;   cout <<   "|";
    gotoxy(35, 17);
    os << "|_________________________________________________________|";
    Sleep(3000);
    return os;
	}
    bool kiemTraTien() {
        if (tientaikhoan >= 1000) {
            return true;
        }
        else {
            cout << "Tai khoan khong du tien." << endl;
            return false;
        }
    }
      void trutientaikhoan( ){
    if	(kiemTraTien()== true ){ int tiengiuxe=1000;
        tientaikhoan-=tiengiuxe; 
        tiengiuxe+=1000;
    	} 
	} 
	void GhiThongTinCard(ofstream &FileOut)
	{
FileOut << "So luong the thong minh thu : "<< stt <<endl;
    FileOut << "So the xe la: " << getSoThe() << endl;
    FileOut << "Ten hoc sinh  la: " << gettenhocsinh() << endl;
    FileOut << "Loai the ngan hang  la: " << getloaithenganhang() << endl;
    FileOut << "So the sinh vien la: " << getsothesinhvien() << endl;
    FileOut << "So the ngan hang la : " <<  getsothenganhang() <<endl;
	}
};
int Thethongminh::soluongcard = 0;
ostream &operator << (ostream &os, Thethongminh &t);
class Cameravao{
	private:
    string biensoxe;
    string loaixe;
public:
    static bool checkXe( string biensoxe, string loaixe, Xe xe1 ) {
        if (xe1.getLoaiXe() != loaixe ) {
    system("cls");
    gotoxy(35, 9);
    cout << " _________________________________________________________";
    gotoxy(35, 10);
    cout << "|     Ket qua check : " ;   gotoxy(93,10); cout<<          "|";
    gotoxy(35, 11);
    cout << "| Thong tin the khong hop le. Vui long kiem tra lai. " ; gotoxy(93,11) ; cout <<         "|";
    gotoxy(35, 13);
    cout << "|_________________________________________________________|";
            return false;
        }
        // kiem tra bien so xe
        if (xe1.getBienSoXe() != biensoxe) {
    system("cls");
    gotoxy(35, 9);
    cout << " _________________________________________________________";
    gotoxy(35, 10);
    cout << "|     Ket qua check : " ;   gotoxy(93,10); cout<<          "|";
    gotoxy(35, 11);
    cout << "| Bien so xe khong dung. Vui long kiem tra lai. " ; gotoxy(93,11) ; cout <<         "|";
    gotoxy(35, 13);
    cout << "|_________________________________________________________|";
            return false;
        }
        // neu qua het cac kiem tra, cho xe vao trong bai
        return true;
    }
    void checkxechinhchu(Xe xe1){
	if (Cameravao::checkXe( xe1.getBienSoXe(), xe1.getLoaiXe(),xe1)== true) {
    system("cls");
    gotoxy(35, 9);
    cout << " _________________________________________________________";
    gotoxy(35, 10);
    cout << "|     Ket qua check : " ;   gotoxy(93,10); cout<<           "|";
    gotoxy(35, 11);
    cout << "|                  Xe chinh chu " ; gotoxy(93,11) ; cout <<         "|";
    gotoxy(35, 13);
    cout << "|_________________________________________________________|";
    }
    else {
     gotoxy(35, 11);
    cout << "|   xe khong chinh chu khong duoc quet the " ; gotoxy(93,11) ; cout <<         "|";
    exit(1000);
    }
    system("cls");
}
};
class baidoxe1chieu {
private:
    int n;
    int hanhdong;
    vector<int> doxe;
    int chodoxecontrong;
    int layxe;

public:
    void nhapsoluongchodexe() {
         system("cls");
    gotoxy(40, 9);
    cout << " _________________________________________________";
   gotoxy(40, 10);
    cout << "|    Nhap so luong cho do xe con trong:           |";
    gotoxy(40, 11);
    cout << "|_________________________________________________|";
    gotoxy(82,10);
    cin >> n;
        doxe = vector<int>(n, 0);
    }

    void chonhanhdong() {
    gotoxy(40, 9);
    cout << " _________________________________________________";
   gotoxy(40, 10);
    cout << "|    Chon hanh dong:                              |";
    gotoxy(40, 11);
    cout << "|    [1].do xe                                    |";
    gotoxy(40, 12);
    cout << "|    [2].lay xe                                   |";
    gotoxy(40, 13);
    cout << "|    [3].thoat                                    |";
    gotoxy(40, 14);
    cout << "|_________________________________________________|";
    gotoxy(68,10);
        cin >> hanhdong;
    }

    void cachvanhanh() {
        while (true) {
            chonhanhdong();

            if (hanhdong == 1) {
                chodoxecontrong = -1;
                for (int i = 0; i < n; i++) {
                    if (doxe[i] == 0) {
                        chodoxecontrong = i;
                        break;
                    }
                }

                if (chodoxecontrong == -1) {
                    gotoxy(52, 16);
                    cout << "Khong con cho do xe!" << endl;
                } else {
                    doxe[chodoxecontrong] = 1;
                    gotoxy(52, 16);
                    cout << "Do xe thanh cong tai vi tri " << chodoxecontrong << endl;
                }
            } else if (hanhdong == 2) {
                gotoxy(52, 16);
                cout << "Nhap vi tri cho do xe can lay: ";
                cin >> layxe;
                Sleep(2000);
                system("cls");

                if (layxe >= n || layxe < 0) {
                    gotoxy(52, 17);
                    cout << "Vi tri khong hop le!" << endl;
                    Sleep(1700);
                    system("cls");
                } else if (doxe[layxe] == 0) {
                    gotoxy(52, 17);
                    cout << "Khong co xe tai vi tri nay ! " << layxe << "!" << endl;
                     Sleep(1700);
                    system("cls");
                } else {
                    doxe[layxe] = 0;
                    gotoxy(52, 17);
                    cout << "Tra xe thanh cong tai vi tri ! " << layxe << endl;
                    Sleep(1700);
                    system("cls");
                }
            } 
            else if (hanhdong == 3) {
                break;
            } else {
                    gotoxy(52, 16);
                cout << "Hanh dong khong hop le!" << endl;
            }
        }
    }
};
class baidoxe2chieu{
	int locationA[100][100];
	int hanhdong;

vector<pair<int,int> > hethong;

public:
		void chonhanhdong(){
        cout << "Chon hanh dong (1: do xe, 2: lay xe, 3: thoat): ";
        cin >> hanhdong;
     }

void xe_vaoA(){
    int ID;
int temp = 0;
cout << "nhap ID :";
cin >> ID;
int i,j;
for (i = 1; i <= 10; i++){
    for (j = 1; j <= 10; j++){
        if (locationA[i][j] == 0) {
            temp = i*10 +j;
            break;
        }
        
    }
if(temp != 0) break;
}
cout << "vi tri ban can den la A" << i << "." << j<< endl;
locationA[i][j] = 1;
hethong.push_back(make_pair(ID,temp));

}

void xe_raA(){
int ID;
cout << "nhap ID : ";
std::cin >> ID;


int temp = 0;
vector<pair<char,int> > checker;
for(int i = 0; i < hethong.size(); i++)
{
	if(hethong[i].first == ID)
	{
		temp = hethong[i].second;
        hethong.erase(hethong.begin() + i);
        break;
	}   
}

int x = temp/10;
int y = temp%10;
locationA[x][y] = 0;
cout << "da tra lai vi tri do xe!" << endl;
}
void cachvanhanh(){
		while(hanhdong>0){
            chonhanhdong();
        		if (hanhdong == 1) { xe_vaoA();}
        		else if (hanhdong == 2) { xe_raA();}
        		else if (hanhdong== 3) { 
            break;
        } else { 
            cout << "Hanh dong khong hop le!" << endl;
        }
}
}
}; 

class Camerara  {
	private:
		string biensoxe;
		static int soluotxera;
        int sttbichanlai;
        int sttra;
		char *dt1;
		char *dt2;
		public:
			Camerara(){
                ++soluotxera;
			}
	  string getbiensoxe(){
	  	return biensoxe;
	  }
	  
	void tgianxera(Xe xe) {
   	     dt1 = new char[10];
    	time_t now = time(0);
    	dt1 = ctime(&now);
cout << "thoi diem xe " << xe.getstt() <<" ra la: " << dt1;
    }
void tgianxebichanlai(Xe xe) {
   	   dt2 = new char[10];
    	time_t now = time(0);
    	dt2 = ctime(&now);
cout << "thoi diem xe" << xe.getstt() << " bi chan lai la: " << dt2;
    }
     void  nhapxera(Xe xe1){
     	if(xe1.getLoaiXe()=="xemay"|| xe1.getLoaiXe()=="oto"){
     system("cls");
    gotoxy(25, 9);
    cout << " __________________________________________________________________________";
   gotoxy(25, 10);
cout << "| Nhan vien nhap lai bien so cua nguoi mang the xe so " << xe1.getstt() <<" de di ra : " ; gotoxy(100,10); cout<< "|";    gotoxy(25, 11);
    cout << "|     "                                 ;    gotoxy(100,11); cout<<    "|";
    gotoxy(25, 12);
    cout << "|       "                                 ;    gotoxy(100,12);cout<<    "|";
    gotoxy(25, 13);
    cout << "|       "                                 ;    gotoxy(100,13);cout<<    "|";
    gotoxy(25, 14);
    cout << "|       "                                 ;    gotoxy(100,14);cout<<    "|";
    gotoxy(25, 15);
    cout << "|__________________________________________________________________________|";
gotoxy(92, 10);
     	cin >> biensoxe;
    Sleep(3000);
     }
       if(xe1.getLoaiXe()=="xedap"){
        system("cls");
    gotoxy(25, 9);
    cout << " __________________________________________________________________________";
   gotoxy(25, 10);
    cout << "| thong bao xe dap khong co bien so nen co the di ra !                     |";
    gotoxy(25, 11);
    cout << "|__________________________________________________________________________|";
     Sleep(2000);
   
	   }
     }
	 void kiemtracamra(Xe xe1){	
        sttra+=1;
	 if (xe1.getLoaiXe()=="xedap") { 
     gotoxy(25, 12);
cout << "| xe dap cua nguoi co the xe so " << xe1.getstt() <<" nay co the di ra !" ; gotoxy(100,12); cout << "|";
    gotoxy(25, 13);
cout << "| luot xe mang the xe so " << xe1.getstt() <<" di ra !" ; gotoxy(100,13); cout << "|";    gotoxy(25, 14);
    cout << "|  "  ; gotoxy(100,14); cout <<   "|";
    gotoxy(25, 15);
    cout << "|__________________________________________________________________________|";
    Sleep(2000);
 gotoxy(28, 14);
tgianxera(xe1);
        Sleep(2000);
	 }
    else if (biensoxe == xe1.getBienSoXe()){
    sttra+=1;
    gotoxy(25, 12);
cout << "| giong bien cua nguoi co the xe so "<< xe1.getstt() << " nen xe co the di ra" ; gotoxy(100,12); cout << "|";
    gotoxy(25, 13);
cout << "| luot xe mang the xe so " << xe1.getstt() <<" di ra !" ; gotoxy(100,13); cout << "|";
    gotoxy(25, 14);
    cout << "|  "  ; gotoxy(100,14); cout <<   "|";
    gotoxy(25, 15);
    cout << "|__________________________________________________________________________|";
     	Sleep(2000);
      gotoxy(28, 14);
tgianxera(xe1);
        Sleep(2000);
		 }
		 else {
    ++sttbichanlai;
    gotoxy(25, 12);
    cout << "| khac bien cua nguoi co the thong minh so "<< xe1.getstt()  ; gotoxy(100,12); cout <<    "|";
    gotoxy(25, 13);
    cout << "| bat lai kiem tra, xu phat, khien trach"    ; gotoxy(100,13); cout <<   "|";
    gotoxy(25, 14);
    cout << "| "  ; gotoxy(100,14); cout <<   "|";
    gotoxy(25, 15);
    cout << "|__________________________________________________________________________|";
    Sleep(2000);
     gotoxy(28, 14);
tgianxebichanlai(xe1);
         Sleep(2000);
         
         }
	 }
     char *getdtra(){
        return dt1;
     } 
     char *getdtchan(){
        return dt2;
     }
	 
	
}; 
int Camerara::soluotxera=0;
class Maycheckthe {
	private:
	static	int  soluong;
		int sott;
	
public:
	Maycheckthe(){
		sott=++soluong;
	}
    static bool checkCard(Thethongminh card ) {
        // kiem tra thong tin cua the
        if ( card.gettenhocsinh() == "" || card.getsothesinhvien() == 0|| card.getsothenganhang()==0) {
            gotoxy(35, 11);
            cout << "Thong tin the khong hop le. Vui long kiem tra lai." << endl;
            Sleep(1500);
            return false;
        }
        // kiem tra tien trong tai khoan
        if (card.kiemTraTien()==false) {
            gotoxy(35, 13);
            cout << "Tai khoan khong du tien. Vui long nap tien." << endl;
             Sleep(1500);
           
            return false;
        }
        // neu qua het cac kiem tra, cho xe ra khoi bai
        return true;
    }
 void checkhocsinhdivao(Thethongminh card1){
  if (checkCard( card1)== true) {
    gotoxy(35, 12);
cout << " xe cua nguoi mang the xe thu "<<card1.getstt()<<" vao bai " ;    Sleep(1500);
    system("cls");

    }
    else {
        gotoxy(35, 12);
cout << " xe cua nguoi mang the xe thu "<<card1.getstt()<<" khong duoc vao bai " ;
    Sleep(1500);
    system("cls");
      exit(1000); 
    }
}
void checkhocsinhdira(Thethongminh card1, Camerara cmrr1,Xe xe1){
 if (checkCard(card1)== true && cmrr1.getbiensoxe() == xe1.getBienSoXe() || xe1.getLoaiXe()=="xedap" ) {
    system("cls");
    gotoxy(35, 12);
  cout << " xe cua nguoi mang the xe thu " << card1.getstt() <<" duoc ra khoi bai " << endl;
        Sleep(1500);
       card1.trutientaikhoan();
    gotoxy(35, 13);
cout << " tien tai khoan cua nguoi mang the xe thu "<< card1.getstt() <<" con lai trong the = "<< card1.gettientaikhoan()<< endl ;
       Sleep(1500);

    }
    else {
         gotoxy(35, 12);
cout << "giu xe cua nguoi mang the xe thu " << card1.getstt() <<" lai lap bien ban " << endl; exit(0);
    } 
}
};
int Maycheckthe::soluong=0;
void giaodien(){
     string a;
    system("cls");
    gotoxy(40, 10);
    cout << "======================================================" << endl;
    gotoxy(40, 11);
    cout << "||       PROJECT TEAM 5: V.Quy && U.Phuong          ||";
    gotoxy(40, 12);
    cout << "||        NHA XE BACH KHOA THONG MINH               ||";
    gotoxy(40, 13);
    cout << "||                                                  ||";
    gotoxy(40, 14);
    cout << "||                         GV huong dan:            ||";
    gotoxy(40, 15); 
    cout << "||                        NGUYEN DUY NHAT VIEN      ||";
    gotoxy(40, 16);
    cout << "======================================================"<<endl;
    gotoxy(40, 17);
    cout << "nhap phim bat ki de bat dau project :" ; cin >>a;
    
} 
void DangNhap()
{
ofstream FileOut;
ifstream FileIn;
string sdt, ten, ca;
string mk = "0000";
string pass;
int x;
giaodien();

do
{
    system("cls");
    gotoxy(40, 9);
    cout << " ___________________________________________________";
    gotoxy(40, 10);
    cout << "|                 NHA XE BACH KHOA DA NANG          |";
    gotoxy(40, 11);
    cout << "|     Xin chao nhan vien ,chuc ban 1 ngay vui!      |";
    gotoxy(40, 12);
    cout << "|                Nhap lua chon:                     |";
    gotoxy(40, 13);
    cout << "|            [1]. Dang nhap man hinh                |";
    gotoxy(40, 14);
    cout << "|            [2]. Exit                              |";
    gotoxy(40, 15);
    cout << "|                                                   |";
    gotoxy(40, 16);
    cout << "|                                                   |";
    gotoxy(40, 17);
    cout << "|___________________________________________________|" <<endl;
     gotoxy(40, 18);
     cout << " hay nhap : " ; cin >> x;
    if (x == 2)
    {
        exit(0);
    }
    else if (x != 1)
    {   
         system("cls");
         gotoxy(40,5);
        cout << "Lua chon khong hop le. Vui long nhap lai!" << endl;
        Sleep(2000); 
    }
} while (x != 1);

bool xacthucthongtin = false;
bool taptintontai = false;

while (!(xacthucthongtin && taptintontai))
{   
        system("cls");
    gotoxy(40, 9);
    cout << " _________________________________________________";
    gotoxy(40, 10);
    cout << "|                                                 |";
    gotoxy(40, 11);
    cout << "|                  Dang nhap                      |";
    gotoxy(40, 12);
    cout << "|                                                 |";
    gotoxy(40, 13);
    cout << "|   Nhap so dien thoai:                           |";
    gotoxy(40, 14);
    cout << "|   Nhap mat khau:                                |";
    gotoxy(40, 15);
    cout << "|                                                 |";
    gotoxy(40, 16);
    cout << "|                                                 |";
    gotoxy(40, 17);
    cout << "|                                                 |";
    gotoxy(40, 18);
    cout << "|                                                 |";
    gotoxy(40, 19);
    cout << "|_________________________________________________|";
    gotoxy(65,13);
    cin.ignore(); getline(cin, sdt);
    while(1)
	{
		int i = 0;
    gotoxy(65,14);
	char a = getch();
	while (a != '\r' && a  != '\n' && i < 10)
	{
		if (a!= '\b')
		{
			cout << '*';
			pass +=a;
            
			a = getch();
		}
	}
	
	if ( pass == mk)
	{
		cout << endl;
        gotoxy(65,15);
		cout << "Mat khau dung! " << endl;
		break;
	}
	else {
		cout << endl;
        gotoxy(65,15);
		cout << "Mat khau sai, nhap lai! " << endl;
        Sleep(1500);
        gotoxy(40, 15);
        cout << "|                                                 |";
        gotoxy(40, 14);
		cout << "|   Nhap mat khau:                                |";
		pass = "\0";
        
	}
	}
    FileIn.open( sdt + ".txt");
    

    if (FileIn.is_open())
    {
        getline(FileIn, ten);
        getline(FileIn, ca);
        getline(FileIn, sdt);

        if (mk == "0000")
        {
            xacthucthongtin = true;
            taptintontai = true;
     gotoxy(40, 18);
    cout << "|                           Dang nhap thanh cong! |";
    Sleep(4000);
    system("cls");
    gotoxy(40, 7);
    cout << " _________________________________________________";
     gotoxy(40, 8);
    cout << "|                                                 |";
    gotoxy(40, 9);
    cout << "|   Thong tin cua nhan vien la:                   |";
            
    gotoxy(40, 10);
     cout << "|   Ten: "     << ten ; gotoxy (90,10)  ; cout <<   "|";
    gotoxy(40, 11);
     cout << "|   Ca: " <<     ca ;       gotoxy (90,11)   ; cout <<     "|";
           
    gotoxy(40, 12);
    cout << "|    Sdt: " << sdt ;gotoxy (90,12); cout << "|";
    gotoxy(40, 13);
    cout << "|_________________________________________________|";
    Sleep(5000);

            FileOut.open("NhanVien.txt", ios::out | ios::app);
            FileOut << "Ca: " << ca << endl;
            FileOut << "Ten Nhan Vien: " << ten << endl;
            FileOut << "Sdt: " << sdt << endl;
            FileOut.close();
        }
        else
        {   
   
    Sleep(2000); 
        }
    }
    else
    {
    gotoxy(40, 18);
    cout << "|           Khong ton tai,thoat he thong!         |";
    Sleep(2000);
    exit(0);
    }


FileOut.close();
    }}
void cachvanhanhxevao(Xe xe,Thethongminh card,Cameravao cmrv,Maycheckthe checkthe){
    cmrv.checkxechinhchu(xe);
    checkthe.checkhocsinhdivao(card);
   }
void cachvanhanhxera(Xe xe1,Thethongminh card1, Camerara cmrr1,Maycheckthe checkthe1, ofstream &FileOut, int &n){
     cmrr1.nhapxera(xe1);
    cmrr1.kiemtracamra(xe1);
    checkthe1.checkhocsinhdira(card1, cmrr1,xe1);
    n++;
    FileOut << n << "." << "(" << card1.gettenhocsinh() << "," << xe1.getLoaiXe() << "," << xe1.getBienSoXe() << ")" << "\t\t\t\t" << "1000" << endl;
	FileOut << "Vao: " << xe1.getdtvao();
	FileOut << "Ra:  " << cmrr1.getdtra() << endl;
}

int main() {
	ofstream fileo;
	fileo.open("DoanhThu.txt", ios :: out | ios :: app);
    DangNhap();
    int n = 0;
	NhanVien nhanvien1("Nguyen Ngoc Bao Tran", "Sang", "012345678");
	NhanVien nhanvien2("Nguyen Ngoc Duy", "Sang", "0988776655");
	NhanVien nhanvien3("Truong Vinh Thien", "Chieu", "0989796959");
	NhanVien nhanvien[3] = {nhanvien1, nhanvien2, nhanvien3};
    Xe xe1("75F1-1234", "xemay");
    Xe xe2("43F2-1222","xedap");
    Xe xe3("43F2-1346","xemay");
    Xe xe4("44F2-1111","xemay");
    Xe xe5("66F1-1311","xemay");
    Xe xe6("76G1-9969","xedap");
    Xe xe7("79R1-4569","xedap");
    Xe xe8("80P1-4879","xedap");
    Xe xe9("81I1-4999","xedap");
    Xe xe10("96Q1-5679","xedap"); 
    ofstream FileCardOut;
    FileCardOut.open("ThongTinCard.txt", ios :: out | ios :: app);
   Thethongminh card1("1", "Nguyen Van Quy", "BIDV", 106220232,1030358533,100000);
   Thethongminh card2("2" , "Nguyen Trong Nhan", "Vietcombank", 106220229,201010000,8000);
   Thethongminh card3("3","Nguyen Thi Uyen Phuong" ,"Agribank",106220231,165555431,2000000 );
   Thethongminh card4("4", "Le Duy Hoang", "MBbank" , 106220252 , 987643210 , 123);
   Thethongminh card5("5", "Huynh Cong Huy","Vietcombank", 106220253, 86554433, 5000);
   Thethongminh card6("6" , "Tran Dang Bach", "BIDV", 106220244,1518556699,800000 );
   Thethongminh card7("7", "Tran Viet Thang", "Vbank",106220234,1478523639,200);
   Thethongminh card8("8" , "Kim Gia Bao", "BaoNhaBank",106220245,223445566,860100 );
   Thethongminh card9("9","Trinh Anh Nhat","Vbank",106220230,101010101,88888);
   Thethongminh card10("10","Ho Nguyen Tam","DUTbank",106220233,999991111,9999999);
   Cameravao cmrv;
   Maycheckthe checkthe;
   baidoxe1chieu bdx1c;
   Camerara cmrr;
bdx1c.nhapsoluongchodexe();
while (true) {
    int luachonmanhinh;
    system("cls");
    gotoxy(40, 9);
    cout << " _________________________________________________";
    gotoxy(40, 10);
    cout << "|                                                 |";
    gotoxy(40, 11);
    cout << "|               Chon Chuc Nang:                   |";
    gotoxy(40, 12);
    cout << "|                                                 |";
    gotoxy(40, 13);
    cout << "|   [1]. Di vao                                   |";
    gotoxy(40, 14);
    cout << "|   [2]. Di ra                                    |";
    gotoxy(40, 15);
    cout << "|   [3]. Dang xuat                                |";
    gotoxy(40, 16);
    cout << "|      Nhap lua chon:                             |";
    gotoxy(40, 17);
    cout << "|                                                 |";
    gotoxy(40, 18);
    cout << "|                                                 |";
    gotoxy(40, 19);
    cout << "|_________________________________________________|";
    gotoxy(72,16);
    cin >> luachonmanhinh;
if (luachonmanhinh==1){
int c;
 system("cls");
    gotoxy(40, 9);
    cout << " _________________________________________________";
    gotoxy(40, 10);
    cout << "|              [1]. Di vao:                       |";
    gotoxy(40, 11);
    cout << "|     Nhan vien nhap so the xe:                   |";
    gotoxy(40, 12);
    cout << "|_________________________________________________|";
gotoxy(72,11);
cin >> c;
switch (c) {
  case 1:
    cin >> xe1;
    cin.ignore();
    cout << xe1;
    xe1.tgianxevao();
    cout << card1;
    card1.GhiThongTinCard(FileCardOut);
cachvanhanhxevao(xe1,card1,cmrv,checkthe);
bdx1c.cachvanhanh();
    break;
  case 2:
    cin >> xe2;
    cin.ignore();
    cout << xe2;
    xe2.tgianxevao(); 
    cout << card2;
    card2.GhiThongTinCard(FileCardOut);
cachvanhanhxevao(xe2,card2,cmrv,checkthe);
bdx1c.cachvanhanh();
    break;
  case 3:
    cin >> xe3;
    cin.ignore();
    cout << xe3;
    xe3.tgianxevao();
    cout << card3;
    card3.GhiThongTinCard(FileCardOut);
cachvanhanhxevao(xe3,card3,cmrv,checkthe);
bdx1c.cachvanhanh();
    break;
  case 4:
      cin >> xe4;
    cin.ignore();
    cout << xe4;
    xe4.tgianxevao();
    cout << card4;
    card4.GhiThongTinCard(FileCardOut);
    cachvanhanhxevao(xe4,card4,cmrv,checkthe);
    bdx1c.cachvanhanh();
    break;
  case 5:
    cin >> xe5;
    cin.ignore();
    cout << xe5;
    xe5.tgianxevao();
    cout << card5;
        card5.GhiThongTinCard(FileCardOut);
    cachvanhanhxevao(xe5,card5,cmrv,checkthe);
    bdx1c.cachvanhanh();
    break;
  case 6:
      cin >> xe6;
    cin.ignore();
    cout << xe6;
    xe6.tgianxevao();
    cout << card6;
        card6.GhiThongTinCard(FileCardOut);
    cachvanhanhxevao(xe6,card6,cmrv,checkthe);
    bdx1c.cachvanhanh();
    break;
  case 7:
    cin >> xe7;
    cin.ignore();
    cout << xe7;
    xe7.tgianxevao();
    cout << card7;
        card7.GhiThongTinCard(FileCardOut);
    cachvanhanhxevao(xe7,card7,cmrv,checkthe);
    bdx1c.cachvanhanh();
    break;
  case 8:
    cin >> xe8;
    cin.ignore();
    cout << xe8;
    xe8.tgianxevao();
    cout << card8;
        card8.GhiThongTinCard(FileCardOut);
    cachvanhanhxevao(xe8,card8,cmrv,checkthe);
    bdx1c.cachvanhanh();
    break;
  case 9:
    cin >> xe9;
    cin.ignore();
    cout << xe9;
    xe9.tgianxevao(); 
    cout << card9;
        card9.GhiThongTinCard(FileCardOut);
    cachvanhanhxevao(xe9,card9,cmrv,checkthe);
    bdx1c.cachvanhanh();
    break;
  case 10:
    cin >> xe10;
    cin.ignore();
    cout << xe10;
    xe10.tgianxevao();
    cout << card10;
        card10.GhiThongTinCard(FileCardOut);
    cachvanhanhxevao(xe10,card10,cmrv,checkthe);
    bdx1c.cachvanhanh();
    break;
  default:
    break;
}
FileCardOut.close();
}
else if(luachonmanhinh==2){
int c;
 system("cls");
    gotoxy(40, 9);
    cout << " _________________________________________________";
    gotoxy(40, 10);
    cout << "|              [2]. Di ra:                        |";
    gotoxy(40, 11);
    cout << "|    nhan vien nhap lai the xe de di ra :         |";
    gotoxy(40, 12);
    cout << "|_________________________________________________|";
gotoxy(84,11);
cin >> c;
switch (c) {
  case 1:
   bdx1c.cachvanhanh();
cachvanhanhxera(xe1,card1, cmrr,checkthe, fileo, n);
    break;
  case 2:
   bdx1c.cachvanhanh();
cachvanhanhxera(xe2,card2, cmrr,checkthe, fileo,n);
    break;
  case 3:
   bdx1c.cachvanhanh();
cachvanhanhxera(xe3,card3, cmrr,checkthe, fileo,n);
    break;
  case 4:
   bdx1c.cachvanhanh();
cachvanhanhxera(xe4,card4, cmrr,checkthe, fileo, n);
    break;
  case 5:
   bdx1c.cachvanhanh();
    cachvanhanhxera(xe5,card5, cmrr,checkthe,fileo, n);
    break;
  case 6:
   bdx1c.cachvanhanh();
    cachvanhanhxera(xe6,card6, cmrr,checkthe, fileo,n);
    break;
  case 7:
   bdx1c.cachvanhanh();
    cachvanhanhxera(xe7,card7, cmrr,checkthe, fileo,n);
    break;
  case 8:
   bdx1c.cachvanhanh();
    cachvanhanhxera(xe8,card8, cmrr,checkthe, fileo,n);
    break;
  case 9:
   bdx1c.cachvanhanh();
    cachvanhanhxera(xe9,card9, cmrr,checkthe, fileo,n);
    break;
  case 10:
   bdx1c.cachvanhanh();
    cachvanhanhxera(xe10,card10, cmrr,checkthe, fileo,n);
    break;
  default:
    break;
}
}
else if (luachonmanhinh==3){
	gotoxy(40, 17);
	cout << "|         Tong tien cua ca truc la:               |" ;gotoxy (75,17); cout << n*1000 << endl;
	fileo << "* Tong tien cua ca truc la: " << n*1000 << endl;
	Sleep(1500);
	n = 0;
    DangNhap();
}
else {
            cout << "Lua chon khong hop le!" << endl;
        }
}
fileo.close();
    return 0;
}
