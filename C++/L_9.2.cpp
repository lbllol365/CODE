#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
	string name;
	int age;
	char gender;
	string id_number;
public:
	Person(){}
	Person(string the_name,int the_age,char the_gender,string the_idnumber)
	{
		name = the_name;
		age  = the_age;
		gender = the_gender;
		id_number = the_idnumber;
	}
	string get_name()
	{
		return name;
	}
	int get_age(){
		return age;
	}
	char get_gender()
	{
		return gender;
	}
	string get_idnumber()
	{
		return id_number;
	}
	void show()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Age"<<age<<endl;
		cout<<"Gender:"<<gender<<endl;
		cout<<"id_number:"<<id_number<<endl;
	}

};
class Doctor:public Person
{
private:
	string specialty;
	double office_visit_fee;
public:
	Doctor(){}
	Doctor(string the_name,int the_age,char the_gener,string the_idnumber,string the_specialty,double fee):
	Person(the_name,the_age,the_gener,the_idnumber)
	{
		specialty = the_specialty;
		office_visit_fee = fee;
	}
	string get_specialty()
	{
		return specialty;
	}
	double get_offic_visit_fee()
	{
		return office_visit_fee;
	}
	void show()
	{
		Person::show();
		cout<<"specialty:"<<specialty<<endl
			<<"office_visit_fee: "<<office_visit_fee<<endl;
	}
};
int main()
{
	Doctor dr("wu yanhui",37,'m',"410105730126163","pediatrician",100.0);
	dr.show();
	return 0;
}