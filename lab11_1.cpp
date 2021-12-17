#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int student_num;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << student_num+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A') count[0]++; // if grade is A
		else if(grade == 'B') count[1]++; // if grade is B
		//and so on ... for grade = C, D, F
		else if(grade == 'C') count[2]++; // if grade is C
		else if(grade == 'D') count[3]++; // if grade is D
		else if(grade == 'F') count[4]++; // if grade is F
		else if(grade == '0') break; //terminate loop
		else{
			cout << "Wrong input. Please input again." << endl; // grade is wrong input
			continue;
		}
		student_num++;
	}while(true);
	
	
	cout << "In total " << student_num << " students." << endl;
	cout << "A = " << count[0] << ", ";
	cout << "B = " << count[1] << ", ";
	cout << "C = " << count[2] << ", ";
	cout << "D = " << count[3] << ", ";
	cout << "F = " << count[4] << " ";

	return 0;
}
