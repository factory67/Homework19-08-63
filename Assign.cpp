#include <iostream>
using namespace std;
int main()
{
	char ch;
	int total=0,i=0;
	float gpa=0;
	do{
		cout<<"Enter the letter grade (Enter 'x' to exit) \n";
		cin>>ch;
		if(ch =='a')total+=4;
		else if (ch=='b')total+=3;
		else if (ch=='c')total+=2;
		else if (ch=='d')total+=1;
		else if (ch=='f')total+=0;
		else if(ch=='x')break;
		i++;
		}while (ch != 'x');
	cout<<"Total Grade Points : "<<total<<endl;
	cout<<"GPA :"<<(float) total/i<<endl;
    return 0;
}