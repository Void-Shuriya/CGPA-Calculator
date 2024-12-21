#include <iostream>

void determineGrade(double cgpa) {

	if (cgpa >= 0 && cgpa <= 1.99) {
		std::cout << "You Have Failed!\n\n";
	}

	else if (cgpa >= 2.00 && cgpa <= 2.49) {
		std::cout << "You Have Passed! Your Grade is C!\n\n";
	}

	else if (cgpa >= 2.50 && cgpa <= 2.99) {
		std::cout << "Good Job! Your Grade Obtained is C+!\n\n";
	}

	else if (cgpa >= 3.00 && cgpa <= 3.49) {
		std::cout << "Great! Your Grade Obtained is B!\n\n";
	}

	else if (cgpa >= 3.50 && cgpa <= 4.00) {
		std::cout << "Excellent! Your Grade is A+!\n\n";
	}

	else {
		std::cout << "You Have Entered an Invalid Grade!!\n\n";
	}
}

void viewGrade() {

	std::cout << "\n\n";
	std::cout << " GRADE   ||    CGPA      \n";
	std::cout << "------------------------\n";
	std::cout << "Grade A  -> 3.50 - 4.00\n";
	std::cout << "Grade B  -> 3.00 - 3.49\n";
	std::cout << "Grade C+ -> 2.50 - 2.99\n";
	std::cout << "Grade C  -> 2.00 - 2.49\n";
	std::cout << "Grade F  -> 0.00 - 1.99\n\n";

}

int main() {

	double cgpa;
	int choice;

	std::cout << "Welcome To The Results System\n\n";

	std::cout << "Menu Below\n";
	std::cout << "------------\n";
	std::cout << "1. View Grades\n";
	std::cout << "2. Check Grade\n\n";

	std::cout << "Enter Your Option: ";
	std::cin >> choice;

	if (choice == 1) {

		viewGrade();
	}

	else if (choice == 2) {

		std::cout << "Enter Your CGPA: ";
		std::cin >> cgpa;
		std::cout << "\n";

		determineGrade(cgpa);
	}

	else {

		std::cout << "Please Enter only 1 or 2!!\n";
	}

	std::cout << "This is the End of the System!\n\n";

	return 0;
}