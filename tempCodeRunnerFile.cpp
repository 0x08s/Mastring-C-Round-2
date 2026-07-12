#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    cout << "Name       : " << endl;
    cout << "Student ID : "   << endl;

    int id = 246812367;

    int d1 = id / 100000000;
    int d2 = (id / 10000000) % 10;
    int d3 = (id / 1000000)  % 10;
    int d4 = (id / 100000)   % 10;
    int d5 = (id / 10000)    % 10;
    int d6 = (id / 1000)     % 10;
    int d7 = (id / 100)      % 10;
    int d8 = (id / 10)       % 10;
    int d9 = id % 10;

    cout << "\nExtracted Digits: "<< d1 << " " << d3 << " " << d5 << " " << d7 << " " << d9 << " "<< endl;

    int cleared = 0, warning = 0, detained = 0;

    cout << "\n ----------------Attendance Percentage-------------\n";
    cout << "Course\t\tAttended\tTotal\tPercentage\tStanding\n";

    int per = d1 * 10;

    cout << "Mathematics\t" << d1 << "\t\t10\t" << per << "%\t\t";

    if (per >= 75){

    cout << "CLEARED\n";

	cleared++;

	}

    else if (per >= 50){

    cout << "WARNING\n";

	warning++;

	}

    else{

    cout << "DETAINED\n";

	detained++;

	}

    per = d3 * 10;

    cout << "Physics\t\t" << d3 << "\t\t10\t" << per << "%\t\t";

    if (per >= 75){

    cout << "CLEARED\n";

	cleared++;

	}
    else if (per >= 50){

    cout << "WARNING\n";

	warning++;

	}
    else{

    cout << "DETAINED\n";

	detained++;

	}

    per = d5 * 10;

    cout << "English\t\t" << d5 << "\t\t10\t" << per << "%\t\t";

    if (per >= 75){

    cout << "CLEARED\n";

	cleared++;

	}
    else if (per >= 50){

    cout << "WARNING\n";

	warning++;
	}

    else{

    cout << "DETAINED\n";

	detained++;
	}

    per = d7 * 10 ;
    cout << "Programming\t" << d7 << "\t\t10\t" << per << "%\t\t";

    if (per >= 75){

    cout << "CLEARED\n";

	cleared++;

	}
    else if (per >= 50)
        { cout << "WARNING\n";  warning++;  }
    else
        { cout << "DETAINED\n"; detained++; }

    per = d9 * 10;

    cout << "Islamic Std.\t" << d9 << "\t\t10\t" << per << "%\t\t";

    if (per >= 75){

    cout << "CLEARED\n";

	cleared++;
	}

    else if (per >= 50){

    cout << "WARNING\n";

	warning++;

	}

    else{

    cout << "DETAINED\n";

    detained++;

		}

    cout << "\n----------------------Summary----------------------\n";
    cout << "CLEARED: " << cleared  << "\n";
    cout << "WARNING: " << warning  << "\n";
    cout << "DETAINED: " << detained << "\n";

    getch();
    return 0;
}