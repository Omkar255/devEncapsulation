#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Employee {
	private:
		string name;
		int age;
		char grade;

	public:
		void setName(const string& newName) {
			name = newName;
		}
		
		string getName() const {
			return name;
		}

		void setAge(int newAge) {
			if (newAge >= 0) {
				age = newAge;
			} else {
				cout << "Age cannot be negative." << endl;
			}
		}

		int getAge() const {
			return age;
		}

  		void setGrade(char newGrade) {
    			if ((newGrade < 'F' && newGrade >= 'A') || (newGrade < 'f' && newGrade >= 'a')) {
      				grade = toupper(newGrade);
    			} else {
      				cout << "Grade cannot be higher than 'F'." << endl;
    			}
  		}

  		char getGrade() const {
    			return grade;
  		}
};

int main() {

  Employee emp;

  emp.setName("Omkar Tarawade");
  emp.setAge(26);
  emp.setGrade('B');

  cout << "Employee Name: " << emp.getName() << endl;
  cout << "Employee Age: " << emp.getAge() << endl;
  cout << "Employee Grade: " << emp.getGrade() << endl;

  emp.setGrade('h');
  emp.setAge(-5);
  return 0;
}
