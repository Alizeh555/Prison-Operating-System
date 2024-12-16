void searchInmate() {
    string searchQuery;
    cout << "Enter inmate name or number to search: ";
    cin >> searchQuery;
    bool found = false;
    for (int i = 0; i < recordCount; i++) {
        if (inmateNames[i] == searchQuery || to_string(inmateNumbers[i]) == searchQuery) {
            cout << endl << "Found Record:" << endl;
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
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No inmate found with that name or number." << endl;
    }
}
void updateBehavior() {
    int inmateNumber;
    cout << "Enter Inmate Number to update behavior: ";
    cin >> inmateNumber;
    for (int i = 0; i < recordCount; i++) {
        if (inmateNumbers[i] == inmateNumber) {
            cout << "Current Strikes: " << strikes[i] << endl;
            do {
                cout << "Enter new strikes: ";
                cin >> strikes[i];
                if (!isValidStrikes(strikes[i])) {
                    cout << "Invalid strike count. It must be non-negative." << endl;
                }
            } while (!isValidStrikes(strikes[i]));
            cout << "Behavior updated successfully!" << endl;
            return;
        }
    }
    cout << "Inmate with number " << inmateNumber << " not found." << endl;
}