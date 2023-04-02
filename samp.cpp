#include<iostream>
using namespace std;
class student_information
{
    private:
        char name[30];
        int  age;
        char gender;
    public:
        void getBasicInfo(void)
        { cout<<"Enter name of student";
        cin>>name;
        cout<<"Enter age";
        cin>>age;
        cout<<"Enter gender(M/F)";
        cin>>gender;
		}
        
        void putBasicInfo(void)
        { cout<<"Name of the student is: "<<name;
        cout<<"Age: "<<age;
        cout<<"Gender: "<<gender;
		}
};
class student_result: public student_information
{
    private:
        int     totalM;
        float   perc;
        char    grade;
    public:
        void CalculateResult(void)
        { cout<<"Enter total marks obtained";
        cin>>totalM;
        perc=(totalM/500)*100;
        if (perc>90)
        {grade='A';
		}
		else if (perc>75)
		{grade='B';
		}
		else if(perc>60)
		{grade='C';
		}
		else
		{grade='D';
		}
		}
        void displayresult(void)
        {cout<<"Total marks obtained"<<totalM;
        cout<<"Percentage"<<perc;
        cout<<"Grade"<<grade;
		}
};
int main()
{ student_information s;
s.getBasicInfo();
s.putBasicInfo();
s.CalculateResult();
s.displayresult();
return 0;}
//Create a class named Shape with a function that prints "This is a shape". Create another class named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape". Create two other classes named Rectangle and Triangle having the same function which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another class named Square having the same function which prints "Square is a rectangle".
//Now, try calling the function by the object of each of these classes.
