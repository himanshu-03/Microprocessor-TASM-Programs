#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,b,result;
	int ch;
	cout<<"--------------------CALCULATOR------------------\n";
	cout<<"\nEnter first number : ";
	cin>>a;
	cout<<"\nEnter second number : ";
	cin>>b;
	cout<<"----------------------------------------\n";
	do
	{
		cout<<"\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Reset \n6.Exit"<<endl;
		cout<<"----------------------------------------\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				asm mov ax,a;
				asm mov bx,b;
				asm add ax,bx;
				asm mov result,ax;
				cout<<"----------------------------------------\n";
				cout<<"Addition of "<<a<<" and "<<b<<" = "<<result<<endl;
				cout<<"----------------------------------------\n";
				break;
			}
			case 2:
			{
				asm mov ax,a;
				asm mov bx,b;
				asm sub ax,bx;
				asm mov result,ax;
				cout<<"----------------------------------------\n";
				cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<result<<endl;
				cout<<"----------------------------------------\n";
				break;
			}
			case 3:
			{
				asm mov ax,a;
				asm mov bx,b;
				asm mul bx;
				asm mov result,ax;
				cout<<"----------------------------------------\n";
				cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<result<<endl;
				cout<<"----------------------------------------\n";
				break;
			}
			case 4:
			{
				asm mov ax,a;
				asm mov bx,b;
				asm div bx;
				asm mov result,ax;
				cout<<"----------------------------------------\n";
				cout<<"Division of "<<a<<" by "<<b<<" = "<<result<<endl;
				cout<<"----------------------------------------\n";
				break;
			}
			case 5:
			{
				cout<<"----------------------------------------\n";
				cout<<"\nEnter first number : ";
				cin>>a;
				cout<<"\nEnter second number : ";
				cin>>b;
				cout<<"\n----------------------------------------\n";
				break;
			}
			case 6:
			{
				break;
			}
			default:
			{
				cout<<"\n----------------------------------------\n";
				cout<<"Wrong Input";
				cout<<"\n----------------------------------------\n";
				break;
			}
		}
	}while(ch!=6);
	getch();
}
