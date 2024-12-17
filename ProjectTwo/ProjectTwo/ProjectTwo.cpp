// Created by Nicholas Wyrwas
// CS-300-15095-M01 DSA: Analysis and Design 2024 C-6
//Professor: Mr. Nathan Lebel

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

// Define a structure for Course
struct Course {
    string courseId;               // Course ID, e.g., "CS101"
    string title;                  // Course title, e.g., "Introduction to Computer Science"
    vector<string> prerequisites;  // List of prerequisite course IDs
};


// Function to split a string by a delimiter
vector<string> split(const string& line, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(line);
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);  // Add each token to the vector
    }
    return tokens;
}

// Function to load courses from a file
bool loadCourses(const string& filename, map<string, Course>& courses) {
    ifstream file(filename);  // Open the file
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return false;  // Return false if file cannot be opened
    }

    string line;
    while (getline(file, line)) {  // Read each line from the file
        vector<string> tokens = split(line, ',');
        if (tokens.size() < 2) {
            cerr << "Error: Invalid line format in file." << endl;
            continue;  // Skip lines that do not have at least course ID and title
        }

        Course course;
        course.courseId = tokens[0];         // First token is the course ID
        course.title = tokens[1];           // Second token is the course title
        for (size_t i = 2; i < tokens.size(); ++i) {
            course.prerequisites.push_back(tokens[i]);  // Remaining tokens are prerequisites
        }
        courses[course.courseId] = course;  // Add the course to the map
    }

    file.close();  // Close the file
    return true;   // Return true if loading was successful
}

// Function to display all courses in alphanumeric order
void printCourseList(const map<string, Course>& courses) {
    cout << "\nCourse List:\n";
    for (const auto& pair : courses) {  // Iterate through all courses in the map
        cout << pair.first << ": " << pair.second.title << endl;  // Print course ID and title
    }
}

// Function to display a single course's details
void printCourseDetails(const map<string, Course>& courses, const string& courseId) {
    auto it = courses.find(courseId);  // Find the course in the map
    if (it == courses.end()) {         // If course is not found
        cout << "Course not found." << endl;
        return;
    }

    const Course& course = it->second;  // Retrieve the course details
    cout << "\nCourse ID: " << course.courseId << endl;
    cout << "Title: " << course.title << endl;
    if (course.prerequisites.empty()) {
        cout << "Prerequisites: None" << endl;  // No prerequisites
    }
    else {
        cout << "Prerequisites: ";
        for (const string& prereq : course.prerequisites) {
            cout << prereq << " ";  // Print each prerequisite
        }
        cout << endl;
    }
}

// Display menu and get user choice
int displayMenu() {
    cout << "\nMenu Options:\n";
    cout << "1. Load Course Data\n";        // Option to load course data from a file
    cout << "2. Print Course List\n";       // Option to display all courses
    cout << "3. Print Course Details\n";    // Option to display details of a specific course
    cout << "9. Exit\n";                    // Option to exit the program
    cout << "What would you like to do?  ";

    int choice;
    cin >> choice;  // Get user input
    if (cin.fail()) {  // Handle invalid input
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return -1;
    }
    return choice;  // Return the user's choice
}


int main() {
    map<string, Course> courses;  // Map to store courses
    bool dataLoaded = false;      // Flag to check if data has been loaded
    string defaultFilename = "CS 300 ABCU_Advising_Program_Input.csv";

    // Automatically load the default file
    if (loadCourses(defaultFilename, courses)) {
        cout << "Course data loaded successfully from " << defaultFilename << "." << endl;
        dataLoaded = true;  // Set flag to true if loading was successful

        cout << endl;

        cout << "Nicholas Wyrwas\n";
        cout << "CS-300-15095-M01 DSA: Analysis and Design 2024 C-6\n";
        cout << "Professor: Mr. Nathan Lebel\n";

        cout << endl;
    }
    else {
        cout << "Error: Could not load default file. Please ensure the file exists in the project folder." << endl;
    }

    while (true) {
        int choice = displayMenu();  // Display menu and get user choice

        switch (choice) {
        case 1: {
            string filename;
            cout << "Enter the filename: ";
            cin >> filename;  // Get file name from the user
            if (loadCourses(filename, courses)) {
                cout << "Course data loaded successfully." << endl;
                dataLoaded = true;  // Set flag to true if loading was successful
            }
            break;
        }
        case 2:
            if (!dataLoaded) {
                cout << "Error: No data loaded. Please load data first." << endl;
            }
            else {
                printCourseList(courses);  // Print all courses
            }
            break;
        case 3: {
            if (!dataLoaded) {
                cout << "Error: No data loaded. Please load data first." << endl;
            }
            else {
                string courseId;
                cout << "Enter course ID: ";
                cin >> courseId;  // Get course ID from the user
                printCourseDetails(courses, courseId);  // Print course details
            }
            break;
        }
        case 9:
            cout << "Thank you for using the course planner!" << endl;
            return 0;  // Exit the program
        default:
            cout << "Invalid choice. Please try again." << endl;  // Handle invalid menu choice
        }
    }

    return 0;
}
