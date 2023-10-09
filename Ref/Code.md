//Hàm thời gian:
Thư viện:
#include <iostream>
#include <ctime>

   // thời gian hiện tại tính theo hệ thống
   time_t now = time(0);
   
   // convert sang string
   char* dt = ctime(&now);
   cout << "The current local date and time is: " << dt << endl;

//Hàm gotoxy (CHuyển con trỏ tới vị trí x,y nhất định để làm giao diện)
#pragma once
#include <windows.h>
// Hàm di chuyển con trỏ đến tọa độ (x, y) trên cửa sổ dòng
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//Hàm tạo mật khẩu, hiển thị '*":
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
main()
{
	string pwRoot = "12345678";
	string pwUser;
	cout<<"Nhap Password"<<endl;
	int limit =0;
	while (limit <3)
	{
		int i=0;
		char a=getch();
		while ( a!= 13 && a!= 10  && i<10)
		{
			if (a != 8 )
			{
				cout<<'*';
				pwUser[i++]=a;
				a=getch();
			}
			// problem here !!!
		}
		pwUser[i] = '\0';
		if (  pwRoot == pwUser  ) 
		{
			cout<<endl;
			cout<<"mk ban nhap la"<<pwUser<<endl;
			cout<<"Mat khau dung"<<endl;
			break;
		}
		else 
		{
			cout<<endl<<"Mat khau sai, Nhap lai"<<endl;
			limit++;	
		}
	}	
	if (limit > 2 ) cout <<"Nhap sai 3 lan, vui long thu lai sau"<<endl;
	system("pause");
	return 0;
}
 Hàm mật khẩu này bị lỗi, tuy nhiên tụi em đã dựa trên code này, fix lại để sử dụng trong chương trình:
Đây là code mà tụi em đã fix và sử dụng ổn định:
 #include <bits/stdc++.h>
#include <conio.h>
using namespace std;
using namespace std;
int main()
{
	string MatKhau = "0000";
	string pass;
	cout << "Nhap mat khau: " << endl;
	while(1)
	{
		int i = 0;
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
	if ( pass == MatKhau)
	{
		cout << endl;
		cout << "Mat khau dung! " << endl;
		break;
	}
	else {
		cout << endl;
		cout << "Mat khau sai, nhap lai! " << endl;
		cout << "Nhap mat khau: " << endl;
		pass = "\0";
	}
	}
	return 0;
}
