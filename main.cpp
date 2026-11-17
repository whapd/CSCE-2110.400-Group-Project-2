#include <iostream>
#include <cctype>
using namespace std;

// printMenu prints out full menu upon call
void printMenu() {
	cout << endl << "===== Campus Resource Reservation System =====" << endl
             << " 1. View All Facilities" << endl
             << " 2. Search Facility by ID" << endl
	     << " 3. Search Facility by Name" << endl
	     << " 4. Search Facility by Category" << endl
             << " 5. View Campus Graph" << endl
             << " 6. Display Graph Counts and Degrees" << endl
             << " 7. Find Reachable Buildings" << endl
	     << " 8. Find Shortest Path" << endl
             << " 9. Add Department" << endl
             << " 10. Search Department" << endl
             << " 11. Display Department Hierarchy" << endl
             << " 12. Run Preorder Traversal" << endl
	     << " 13. Run Postorder Traversal" << endl
	     << " 14. Run Level-order Traversal" << endl
	     << " 15. Department Statistics" << endl
	     << " 16. Facility Category Report" << endl
	     << " 17. Graph Connectivity Report" << endl
             << " 18. Exit" << endl;
}

int main() {
	// DO: GET FILENAME AND LOAD FILES

	int choice = 0;
	while (choice != 18) {
        	printMenu();
        	cout << "Enter choice: ";
		//cin >> choice;
		
		// Error check
		while (!(cin >> choice)) {
			cout << "Enter choice: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}

		if (choice == 1) {
			cout << "STUB: VIEW ALL FACILITIES" << endl;
		}

		else if (choice == 2) {
			cout << "STUB: SEARCH FACILITY BY ID" << endl;
		}

		else if (choice == 3) {
			cout << "STUB: SEARCH FACILITY BY NAME" << endl;
		}

		else if (choice == 4) {
			cout << "STUB: SEARCH FACILITY BY CATEGORY" << endl;
		}

		else if (choice == 5) {
			cout << "STUB: VIEW CAMPUS GRAPH" << endl;
		}
	
		else if (choice == 6) {
			cout << "STUB: DISPLAY GRAPH COUNTS AND DEGREES" << endl;
		}

		else if (choice == 7) {
			cout << "STUB: FIND REACHABLE BUILDINGS (BFS)" << endl;
		}

		else if (choice == 8) {
			cout << "STUB: FIND SHORTEST PATH (BFS)" << endl;
		}

		else if (choice == 9) {
			cout << "STUB: ADD DEPARTMENT" << endl;
        	}
		
		else if (choice == 10) {
			cout << "STUB: SEARCH DEPARTMENT" << endl;
		}
		
		else if (choice == 11) {
			cout << "STUB: DISPLAY DEPARTMENT HIERARCHY" << endl;
		}
		
		else if (choice == 12) {
			cout << "STUB: PREORDER TRAVERSAL" << endl;
		}
		
		else if (choice == 13) {
			cout << "STUB: POSTORDER TRAVERSAL" << endl;
		}
		
		else if (choice == 14) {
			cout << "STUB: LEVEL-ORDER TRAVERSAL" << endl;
		}
		
		else if (choice == 15) {
			cout << "STUB: DEPARTMENT STATISTICS" << endl;
		}
		
		else if (choice == 16) {
			cout << "STUB: FACILITY CATEGORY REPORT" << endl;
		}

		else if (choice == 17) {
			cout << "STUB: GRAPH CONNECTIVITY REPORT" << endl;
		}
    	}

    	cout << "Goodbye." << endl;
	return 0;
}
