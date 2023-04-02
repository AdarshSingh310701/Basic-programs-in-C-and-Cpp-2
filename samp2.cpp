/*C++ program to read and print students information using two classes and simple inheritance.*/
 
#include <iostream>
using namespace std;
 
//Base class
class student_information
{
    private:
        char name[30];
        int  age;
        char gender;
    public:
        void getBasicInfo(void);
        void putBasicInfo(void);
};
 
//function definitions
void student_information::getBasicInfo(void)
{
    cout << "Enter student's basic information:" << endl;
    cout << "Name?: ";    cin >> name;
    cout << "Age?: ";     cin >> age;
    cout << "Gender?: ";cin >> gender;
}
 
void student_information::putBasicInfo(void)
{
    cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
}
 
//Derived class
class student_result:public student_information
{
    private:
        int     totalM;
        float   perc;
        char    grade;
    public:
        void calculate_result(void);
        void display_result(void);
};
void student_result::calculate_result(void)
{ int m1,m2,m3,m4,m5;
    cout << "Enter student's result information:" << endl;
    cout<<"Enter marks in Subject 1:";
    cin>>m1;
    cout<<"Enter marks in Subject 2:";
    cin>>m2;
    cout<<"Enter marks in Subject 3:";
    cin>>m3;
    cout<<"Enter marks in Subject 4:";
    cin>>m4;
    cout<<"Enter marks in Subject 5:";
    cin>>m5;
        totalM=m1+m2+m3+m4+m5;
        perc=(totalM/500)*100;
        if (perc>=90 && perc<=100)
        {grade='A';
		}
		else if (perc>=75 && perc<=89)
		{grade='B';
		}
		else if(perc>=60 && perc<=74)
		{grade='C';
		}
		else if(perc>=45 && perc<=59)
		{grade='D';
		}
		else
		{ grade='F';
		}
}
 
void student_result::display_result(void)
{
    cout << "Total Marks: " << totalM << ",Percentage: " << perc << ",Grade: " << grade << endl;
}
 
int main()
{
    //create object of derived class
    student_result std;
 
    //read student basic and result information
    std.getBasicInfo();
    std.calculate_result();
 
    //print student basic and result information
    std.putBasicInfo();
    std.display_result();
     
    return 0;
}
