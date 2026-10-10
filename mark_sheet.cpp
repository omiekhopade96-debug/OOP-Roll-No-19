#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		string name;
		int rollNumber;
		float marks[3];
		float average;
	public:
		void inputDetails()
		{
			cout<<"Enter student name:";
			cin>>name;
			cout<<"Enter Roll number:";
			cin>>rollNumber;
			cout<<"Enter marks for 3 subjects:";
			for (int i=0; i<3; i++)
			{
				cin>>marks[i];
			}
		} 
	void calculateAverage()
	{
		float total = 0;
		for(int i = 0; i<3; i++)
		{
			total += marks[i];
		}
		average = total / 3.0;
	}
	void displayResult()
	{
		cout<<"\n--- Student Report Card ---\n";
		cout<<"Name: "<<"\n";
		cout<<"Roll Number: "<<rollNumber<<"\n";
		cout<<"Average: "<<average<<"\n";
		if (average>=40.0)
		{
			cout<<"Status: PASSED\n";
		}
		else 
		{
			cout<<"Status: FAILED\n";
		}
	}
};
int main()
{
	Student s;
	s.inputDetails();
	s.calculateAverage();
	s.displayResult();
	return 0;
}
