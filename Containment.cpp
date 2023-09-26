#include<iostream>
using namespace std;
#include<string.h>
class Address
{
	char city[20];
    int pincode;
    char state[10];
    int houseno;
    public:
    	Address()
    	{
    		strcpy(city,"");
    		pincode = 12345;
    		strcpy(state,"");
    		houseno= 987;
		}
        Address(char *c, int p, char *s, int h)
        {   
        	strcpy(city,c);
        	pincode = p;
			strcpy(state,s);
			houseno = h; 
		}
		void Display()
		{
			cout<<"city is : "<<city<<endl;
			cout<<"pincode is : "<<pincode<<endl;
			cout<<"state is : "<<state<<endl;
			cout<<"houseno is : "<<houseno<<endl;
		}
};

class Student : public Address
{
	int rollno;
	int marks;
	Address adrs;
	
	public:
		Student()
		{
			rollno = 1;
			marks =15;
			adrs= Address();
		}
		
		Student (char* c, int p, char* s, int h, int r, int m):Address(c, p, s, h)
		{
			cout<<"Student Details\n";
			rollno = r;
			marks=m;
		}
		void Display()
		{
			cout<<"Roll no is : "<<rollno<<endl;
			cout<<"marks is : "<<marks<<endl;
			Address::Display();
		}
};

int main()
{
	Student s1("Pune", 22000, "Maharashtra", 234, 2, 80);
	s1.Display();
	return 0;
}


