int main() {
    int choice;
    do {
        cout << endl << "Prison Management System" << endl;
        cout << "1. Add Inmate" << endl;
        cout << "2. Display Inmates" << endl;
        cout << "3. Search Inmate" << endl;
        cout << "4. Update Behavior" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addInmate();
                break;
            case 2:
                displayInmates();
                break;
            case 3:
                searchInmate();
                break;
            case 4:
                updateBehavior();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);
    return 0;
}