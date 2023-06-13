#include "Student.h"
Student::Student(void): Person()
{
subject="";
}
Student::~Student(void)
{
}
Student::Student(string M, int C, string P, int G): Person(M,C)
{
subject=P;
grade = G;
}
Student::Student(const Student &L)
{
name=L.name;
grade=L.grade;
age=L.age;
subject=L.subject;
}
void Student::Set_subject(int G)
{
subject=G;
}
Student& Student::operator=(const Student&l)
{
if(&l==this)return *this;
name=l.name;
age=l.age;
grade=l.grade;
return *this;
}
istream& operator>>(istream&in,Student&l)
{
cout<<"\nname:"; in>>l.name;
cout<<"\nage:";in>>l.age;
cout<<"\ngrade:";in>>l.grade;
cout<<"\nsubject:";in>>l.subject;
return in;
}
ostream& operator<<(ostream&out,const Student&l)
{
out<<"\nMARK : "<<l.name;
out<<"\ngrade : "<<l.grade;
out<<"\nage : "<<l.age;
out<<"\nsubject : "<<l.subject;
out<<"\n";
return out;
}
void Student::Show()
{
cout<<"\nMARK : "<<name;
cout<<"\ngrade : "<<grade;
cout<<"\nage : "<<age;
cout<<"\nsubject : "<<subject;
cout<<"\n";
}
