/*
	��Ŀ���ƣ��´�ף��
	��Ŀ�汾��0.18.1 Release
	��Ŀ���ߣ�bilibili@SYSTEM-ScoreGao
*/
#include <bits/stdc++.h>
#include <windows.h> 
#include <ctime>
using namespace std;
void text(int m,int n);
void show_window(bool show) 
{ 
	ShowWindow(GetConsoleWindow(), show ? SW_SHOW : SW_HIDE); 
}
void hide_cursor() 
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);
}
typedef struct Frame
{
	COORD position[2];
	int flag;
}
Frame;
void SetPos(COORD a)
{
	HANDLE out=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(out, a);
}
void SetPos(int i, int j)
{
	COORD pos={i, j};
	SetPos(pos);
}
void window()
{
	text(0,25);
	show_window(true);
	hide_cursor();
	system("title �´�ף�� 0.18.1 Release");
	system("mode con cols=40 lines=25");
} 
void about_black()
{
	system("cls");
	for(int i=0;i<25;i++)
	{
		for(int j=0;j<40;j++)
		{
			cout<<".";
		}
		cout<<endl; 
	}
}
void hello(int m,int b)
{
	SetPos(m,b);
	cout<<"��ã������ĵ�һҳ";
}
void end()
{
	about_black();
	SetPos(1,1);
	cout<<"ף������,\n" ;
	Sleep(2000); 
	for(int i=1;i<=365;i++)
	{
		Sleep(10);
		cout<<"2023����"<<i<<"�����\n"; 
	}
	system("pause");
}
void text(int m,int n)
{
	CONSOLE_FONT_INFOEX charr;
	charr.cbSize = sizeof(charr);
	charr.nFont = 0;
	charr.dwFontSize.X = m;                  
	charr.dwFontSize.Y = n;                  
	charr.FontFamily = FF_DONTCARE;
	charr.FontWeight = FW_NORMAL;
	std::wcscpy(charr.FaceName, L"Consolas"); 
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &charr);
}
void begin(){
	about_black();
	SetPos(0,10);
	cout<<"���ڼ��س���";
	SetPos(0,11);
	cout<<"�������Ҫ������"; 
	SetPos(2,13);
	cout<<"[                                   ";
	SetPos(38,13);
	cout<<"]";
	SetPos(3,13); 
	for(int i=0;i<35;i++)
	{
		Sleep(200);
		cout<<"=";
		if(i==21)
		{
			Sleep(500);
		}else if(i==33)
		{
			Sleep(2000);
		}
	}
}
int main(){
	window();
	begin();
	about_black();
	hello(10,11);
	Sleep(2000);
	about_black();
	SetPos(5,11);
	cout<<"2023�Ѿ���Ȼ������";
	Sleep(1500);
	SetPos(4,11);
	cout<<"����µ�һ�꣬��׼��������";
	Sleep(2000);
	about_black();
	SetPos(4,11);
	cout<<"��2022��\n";
	Sleep(1000);
	about_black();
	SetPos(10,11);
	cout<<"���˼����������˼�����";
	Sleep(1000);
	about_black();
	SetPos(12,10);
	cout<<"û��ϵ����Ҫ��ƪ�ˡ�";

	system("pause");
	end();
	return 0;
}