#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x,int y);
main(){
	int x,y;
	system("cls");
	maze();
	gotoxy( x, y);
	gotoxy(3,4);
	cout<<"p";
	Sleep(500);
	gotoxy(3,4);
	cout<<" ";
	Sleep(500);
	gotoxy(4,4);
	cout<<"p";
	Sleep(500);
	gotoxy(4,4);
	cout<<" ";
	Sleep(500);	
	gotoxy(5,4);
	cout<<"p";
	Sleep(500);
	gotoxy(5,4);
	cout<<" ";
	Sleep(500);
	gotoxy(6,4);
	cout<<"p";
	Sleep(500);
	gotoxy(6,4);
	cout<<" ";
	Sleep(500);
	gotoxy(7,4);
	cout<<"p";
	Sleep(500);
	gotoxy(7,4);
	cout<<" ";
	Sleep(500);
	gotoxy(8,4);
	cout<<"p";
	Sleep(500);
	gotoxy(8,4);
	cout<<" ";
	Sleep(500);
	gotoxy(8,5);
	cout<<"p";
	Sleep(500);
	gotoxy(8,5);
	cout<<" ";
	Sleep(500);
	gotoxy(8,6);
	cout<<"p";
	Sleep(500);
	gotoxy(8,6);
	cout<<" ";
	Sleep(500);
	gotoxy(7,6);
	cout<<"p";
	Sleep(500);
	gotoxy(7,6);
	cout<<" ";
	Sleep(500);
	gotoxy(5,6);
	cout<<"p";
	Sleep(500);
	gotoxy(5,6);
	cout<<" ";
	Sleep(500);
	gotoxy(4,6);
	cout<<"p";
	Sleep(500);
	gotoxy(4,6);
	cout<<" ";
	Sleep(500);
	gotoxy(3,6);
	cout<<"p";
	Sleep(500);
	gotoxy(3,6);
	cout<<" ";
	Sleep(500);
	gotoxy(3,5);
	cout<<"p";
	Sleep(500);
	gotoxy(3,5);
	cout<<" ";
	Sleep(500);
	gotoxy(3,4);
	cout<<"p";
	Sleep(500);



gotoxy(0,10);

}
	void maze(){
	cout<<"#############"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#           #"<<endl;
	cout<<"#############"<<endl;
}
	void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}