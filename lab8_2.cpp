#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float sco) {
    if (sco > 90) {
        return 'A';
    } else {
        if (sco > 75) {
            return 'B';
        } else {
            if (sco > 60) {
                return 'C';
            } else {
                if (sco > 45) {
                    return 'D';
                } else {
                    return 'F';
                }
            }
        }
    }
    return 0;
}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		//[Missing Code 2] Get name of the i-th students that may include whitespace.
		cout << "Score of student " << i+1 << ": ";
		//[Missing Code 3] Get score of the i-th students.
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
