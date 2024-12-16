void addInmate() {
    if (recordCount >= MAX_RECORDS) {
        cout << "Maximum records reached. Cannot add more inmates." << endl;
        return;
    }
    cout << "Enter details for Inmate " << recordCount + 1 << endl;
    cout << "Name: ";
    cin >> inmateNames[recordCount];
    do {
        cout << "Age: ";
        cin >> inmateAges[recordCount];
        if (!isValidAge(inmateAges[recordCount])) {
            cout << "Invalid age. Age must be non-negative." << endl;
        }
    } while (!isValidAge(inmateAges[recordCount]));
    cout << "Gender: ";
    cin >> inmateGenders[recordCount];
    cout << "Inmate Number: ";
    cin >> inmateNumbers[recordCount];
    cout << "\nEnter Sentence Details:" << endl;
    cout << "Offence: ";
    cin >> offences[recordCount];
    cout << "Sentence Duration: ";
    cin >> sentenceDurations[recordCount];
    cout << "\nEnter Family Contact Details:" << endl;
    cout << "Family Member Name: ";
    cin >> familyMemberNames[recordCount];
    cout << "Contact Info: ";
    cin >> contactInfos[recordCount];
    cout << "\nEnter Work Assignment Details:" << endl;
    cout << "Work Assignment: ";
    cin >> workAssignments[recordCount];
    cout << "Hours Worked: ";
    cin >> hoursWorked[recordCount];
    do {
        cout << "\nEnter Behavior Details:" << endl;
        cout << "Strikes: ";
        cin >> strikes[recordCount];
        if (!isValidStrikes(strikes[recordCount])) {
            cout << "Invalid strikes. Strike count must be non-negative." << endl;
        }
    } while (!isValidStrikes(strikes[recordCount]));
    recordCount++;
    cout << "\nInmate record added successfully!" << endl;
}