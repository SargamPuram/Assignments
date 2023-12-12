#include<iostream>
#include<vector>
using namespace std;

struct Record {
    string name;
    int age;
    int id;
};

void displayRecord(const Record& record) {
    cout << "ID: " << record.id << "\tName: " << record.name << "\tAge: " << record.age << endl;
}

int main() {
    vector<Record> records = {
        {"Alice", 25, 101},
        {"Bob", 30, 102},
        {"Charlie", 22, 103},
    };

    sort(records.begin(), records.end(), [](const Record& a, const Record& b) {
        return a.id < b.id;
    });

    cout << "Sorted Records:" << endl;
    for (const auto& record : records) {
        displayRecord(record);
    }

    int targetId = 102;
    auto it = lower_bound(records.begin(), records.end(), targetId, [](const Record& a, int val) {
        return a.id < val;
    });

    if (it != records.end() && it->id == targetId) {
        cout << "\nRecord found:\n";
        displayRecord(*it);
    } else {
        cout << "\nRecord with ID " << targetId << " not found.\n";
    }

    return 0;
}
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int dob;  // Date of Birth
    long tel; // Telephone number

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Date of Birth (YYYYMMDD): ";
        cin >> dob;
        cout << "Enter Telephone number: ";
        cin >> tel;
    }

    void display() const {
        cout << "Name: " << name << "\tDOB: " << dob << "\tTel: " << tel << endl;
    }
};

bool operator<(const Person& p1, const Person& p2) {
    return p1.name < p2.name;
}

int main() {
    vector<Person> personnel;
    string searchName;

    int n;
    cout << "Enter the number of persons: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Person p;
        p.input();
        personnel.push_back(p);
    }

    sort(personnel.begin(), personnel.end());

    cout << "Sorted Personnel Records:" << endl;
    for (const auto& person : personnel) {
        person.display();
    }

    cout << "Enter the name to be searched: ";
    cin >> searchName;

    // Binary search
    bool found = binary_search(personnel.begin(), personnel.end(), Person{searchName});

    if (found)
        cout << "Record found";
    else
        cout << "Record not found";

    return 0;
}

*/

/*
#include <algorithm>
#include <iostream>
using namespace std;

class student {
   public:
    int dob;
    long tel;
    string name;

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Birth date: ";
        cin >> dob;
        cout << "Enter telephone: ";
        cin >> tel;
    }
    void display() {
        cout << name << "\t";
        cout << dob << "\t";
        cout << tel << endl;
    }
};
bool camparename(student s1, student s2) {
    return (s1.name < s2.name);
}
int main() {
    student s[10];
    string nm, name1[10];
    int n;
    cout << "Enter the no of students :";
    cin >> n;
    for (int i = 0; i < n; i++) {
        s[i].input();
    }
    sort(s, s + n, camparename);
    cout << "NAME\tBIRTH DATE\tTELEPHONE " << endl;
    for (int i = 0; i < n; i++) {
        name1[i] = s[i].name;
        s[i].display();
    }
    cout << "Enter the record to be searched";
    cin >> nm;
    if (binary_search(name1, name1 + n, nm))
        cout << "Record found";
    else
        cout << "Record not found";
    return 0;
}
*/

