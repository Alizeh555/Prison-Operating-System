#include <iostream>
#include <string>
using namespace std;
const int MAX_RECORDS = 100;
string inmateNames[MAX_RECORDS];
int inmateAges[MAX_RECORDS];
string inmateGenders[MAX_RECORDS];
int inmateNumbers[MAX_RECORDS];
string offences[MAX_RECORDS];
string sentenceDurations[MAX_RECORDS];
string familyMemberNames[MAX_RECORDS];
string contactInfos[MAX_RECORDS];
string workAssignments[MAX_RECORDS];
int hoursWorked[MAX_RECORDS];
int strikes[MAX_RECORDS];
int recordCount = 0;
bool isValidAge(int age) {
    return age >= 0;
}
bool isValidStrikes(int strikeCount) {
    return strikeCount >= 0;
}

void displayInmates() {
    if (recordCount == 0) {
        cout << "No records to display." << endl;
        return;
    }
    for (int i = 0; i < recordCount; i++) {
        cout << endl << "Record " << i + 1 << ":" << endl;
        cout << "Name: " << inmateNames[i] << endl;
        cout << "Age: " << inmateAges[i] << endl;
        cout << "Gender: " << inmateGenders[i] << endl;
        cout << "Inmate Number: " << inmateNumbers[i] << endl;
        cout << "Offence: " << offences[i] << endl;
        cout << "Sentence Duration: " << sentenceDurations[i] << endl;
        cout << "Family Member Name: " << familyMemberNames[i] << endl;
        cout << "Contact Info: " << contactInfos[i] << endl;
        cout << "Work Assignment: " << workAssignments[i] << endl;
        cout << "Hours Worked: " << hoursWorked[i] << endl;
        cout << "Strikes: " << strikes[i] << endl;
    }
}