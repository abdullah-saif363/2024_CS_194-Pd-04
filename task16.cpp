#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main(){
	system("cls");
	int x,y;
	gotoxy (50,25);
	cout<<"ABDULLAH SAIF";
	gotoxy(0,55);
}
	void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



