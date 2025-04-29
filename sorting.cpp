#include<iostream>
using namespace std;

struct Student
{
	char name[50];
	int rollno;
	int age;
};
void sort(Student a[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(a[j].rollno>a[j+1].rollno)
			{
				Student temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

}



void Accept(Student *s1)
{
	cout<<"Enter name of student  :";
	cin>>s1->name;
	cout<<"Enter roll no: ";
	cin>>s1->rollno;
	cout<<"enter age  :";
	cin>>s1->age;
}

void Display( Student *s1)
{
	cout<<"Name :"<<s1->name;
	cout<<"\tRoll No  :"<<s1->rollno;
	cout<<"\tAge :"<<s1->age<<"\n";
}
int main()
{       int n;
	Student s1[10];
	cout<<"Enter number of students :"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		Accept(&s1[i]);
	}
	sort(s1,n);

	for(int i=0;i<n;i++)
	{
		Display(&s1[i]);
	}

	return 0;
}
