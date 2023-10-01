#include<stdio.h>
#include<conio.h>
#include<windows.h>
int a,b,c,z,x1,y1,y2,k;
 void gotoxy(int x,int y)
 {  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

int main()
{
	
z=1;
k=1;

	for(c=1;c<11;c++)
{
	y1=9,y2=9;
	z=c;
		for(a=z,b=k;a<=10;a++,z++,y1--,y2++,b++)
		{
			if(b==10)
			{
				b=0;
				
			}
			gotoxy(y1,z);printf("%d",b);
			gotoxy(y2,z); printf("%d",b);
		
		}
		k=k+2;
		if(k>=10)
		{
			k=1;
		}
}
		getch();

}
