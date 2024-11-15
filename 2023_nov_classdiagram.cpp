#include <iostream>
#define SIZE 2
using namespace std;

class Bus{
private:	
	int busID;
	int driverID;
	int areaList;
	int busNumber;
	int capacity;	
public:
	Bus();
	void busDetails;
	void showSeats;	
};

class Department{ 
private:
	int departmentID;
	string departmentName;
	string inchargeName;
	string memberList;
public:
	Department();
	Department(int did, string dname, string iname, string mlist){
		departmentID = did;
	    departmentName = dname;
	    inchargeName = iname;
		memberList = mlist;
	}		
};

#include "Auditorium.h"

class SchoolManagement{
private:	
	string schoolName;
	string address;
	int contactNo;
	Employee *emp[SIZE];
	Student *std[SIZE];
	Department *dep[SIZE];
	Bus *bus[2];
	Auditorium * audi;
public:
	SchoolManagement(){
		dep[0] = new Department();
		dep[1] = new Department();
	}
	SchoolManagement(int did1, string dname1, string iname1, string mlist1, int did2, string dname2, string iname2, string mlist2){
		dep[0] = new Department(did1, dname1, iname1, mlist1);
		dep[1] = new Department(did2, dname2, iname2, mlist2);
	}
	void addstudent(Student * s1, Student * s2){
		std[0] = s1;
		std[1] = s2;
	}
	void addbus(Student * b1, Student * b2){
		bus[0] = b1;
		bus[1] = b2;
	}
	void addemployee(Student * e1, Student * e2){
		emp[0] = e1;
		emp[1] = e2;
	}
	~SchoolManagement(){
		for(int i=0; i<SIZE; i++){
			delete dep[i];
		}
	}	
};

class Bus{
private:
	int busID;
	int driverID;
	int areaList;
	int busNumber;
	int capacity;
public:
	Bus();
	void busDetails();
	void showSeats();
	~Bus();	
};

#include "Bus.h"
#include "Playground.h"
#include "Classroom.h"
#include "Noticeboard.h"

class Student{
private:
	int studentID;
	string studentName;
	int classId;
	string section;
	string mediumOfstudy;
	int busId;
	Bus * bus;
	Playground * pg;
	Classroom * cr;
	Noticeboard * nb;
public:
	Student();
	void busDetails();
	void showSeats();
	~Student();	
};

class Employee{
private:
	int employeeID;
	string employeeName;
	int salary;
	int departmentId;
public:
	Employee();
	void employeeDetails();
	void checkIn();
	void receivesalary();
	~Employee();	
};

class Playground{
private:
	int area;
	int classId;
public:
	Playground();
	void isOccupied();
	~Playground();	
};

class Classroom{
private:
	int classID;
	string className;
	int teacherId;
	int studentCount;
	int equipmentid;
public:
	Classroom();
	void classDetails();
	~Classroom();	
};

class Noticeboard{
private:
	string newList;
	string inchargeName;
public:
	Noticeboard();
	void display();
	void addContent();
	~Noticeboard();	
};

class Auditorium{
private:
	int totalseats;
	int seatOccupied;
	string eventName;
	int eventDate;
	int eventTime;
public:
	Auditorium();
	void bookAuditorium();
	void eventDetails();
	void displaySeats();
	~Auditorium();	
};

class Lab{
private:
	int labID;
	int inchargeId;
	string labName;
	int equipmentId;
	Equipment * eq[SIZE];
public:
	Lab(){
		eq[0] = new Equipment();
		eq[1] = new Equipment();
	}
	Lab(int equid1, int eqcost1, int equid2, int eqcost2){
		eq[0] = new Equipment(equid1, eqcost1);
		eq[1] = new Equipment(equid2, eqcost2);
	}
	void labDetails();
	void isOccupied();
	void payFine();
	~Lab(){
    	for(int i=0; i<SIZE; i++){
    		delete eq[i];
		}
	}
};

class Equipment{
private:
	int equipmentId;
	int cost;
public:
	Equipment(){
		equipmentId = 0;
		cost = 0;
	}
	Equipment(int id, int cost){
		equipmentId = id;
		cost = cost;
	}
	void equipmentDetails();
	void purchaseEquipment();
	void repair();
    
};

class LabEquipments : public Equipment{
private:	
	string quipmentName;
	int equipmentcount;
public:
	LabEquipments();
	~LabEquipments();
};

class ClassEquipments : public Equipment{
private:	
	int classid;
	int benchCount;
	int fanCount;
	int lightCount;
public:
	ClassEquipments();
	~ClassEquipments();
};



