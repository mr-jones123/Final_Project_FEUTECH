// Student Information System through File Handling and pointers
// Made by Lacap Beer Jeanz Group of TN06
// Professor: Ms Beau Gray Habal
// FEU Institute of Technology
#include <iostream>
#include <fstream> // for file handling
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
// structure that holds information of students
struct Student
{
    string Filename;
    int StudentID;
    string yearlevel;
    string FullName;
    string birthday;
    string address;
    string Gender;
    string DegreeProgram;
};
void welcome_screen();
void add_newrecord();
void search_record();
void display_allrecords();
void delete_record();

int main()
{
    //welcome_screen();
     ofstream ofile("Student.txt");
        if (!ofile)
        {
            cout << "Error in creating file";
            exit(0);
        } else{
            cout << "File created";
        }
    int choice;
    bool done = true;
    while (done)
    {                  // creates an infinite loop
        system("CLS"); // clears the screen
        cout << setw(50) << "\033[5mStudent Information System\033[0m" << endl;
        cout << "1. Add New Record" << endl;
        cout << "2. Search Record" << endl;
        cout << "3. Display All Records" << endl;
        cout << "4. Delete Record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            add_newrecord();
            break;
        case 2:
            search_record();
            break;
        case 3:
            display_allrecords();
            break;
        case 4:
            delete_record();
            break;
        case 5:
            done = false;
            break;
        default:
            break;
        }
    }
}

void welcome_screen()
{
    char answer;
    system("CLS");
    string welcome = "\t\t\t\tHello There!";
    for (int i = 0; i < welcome.length(); i++)
    {
        cout << welcome[i];
        _sleep(100);
    }
    _sleep(3000);
    system("CLS");
    string welcome1 = "\t\t\t\tReady to start? [y/n] ";
    for (int i = 0; i < welcome1.length(); i++)
    {
        cout << welcome1[i];
        _sleep(100);
    }
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
        system("CLS");
        string welcome3 = "\t\t\t\tWell then, let us create your file :D";
        for (int i = 0; i < welcome3.length(); i++)
        {
            cout << welcome3[i];
            _sleep(100);
        }
        _sleep(6000);
        system("CLS");
        string welcome4 = "\t\t\t\tProcessing. Btw I am proud at everything you do :D\n\t\t\t\tKeep being yourself <3";
        for (int i = 0; i < welcome4.length(); i++)
        {
            cout << welcome4[i];
            _sleep(100);
        }
        _sleep(6000);
        system("CLS");
        ofstream ofile("Student.txt");
        if (!ofile)
        {
            cout << "Error in creating file";
            exit(0);
        }
        else
        {
            string final_message = "\t\t\t\tDONE! You got the power!Proceeding to main menu...";
            for (int i = 0; i < final_message.length(); i++)
            {
                cout << final_message[i];
                _sleep(100);
            }
            _sleep(3000);
            system("CLS");
        }
    }
    else
    {
        exit(0);
    }
}
void add_newrecord()
{   
    system("CLS");
    ofstream ofile;
    ofile.open("Student.txt", ios::app);
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.StudentID;
    cout << "Enter Year Level: ";
    cin.ignore();
    getline(cin,s.yearlevel);
    cout << "Enter Full Name: ";
    getline(cin, s.FullName);
    cout<<"Enter Birthday: ";
    getline(cin, s.birthday);
    cout<<"Enter Address: ";
    getline(cin, s.address);
    cout<<"Enter Gender: ";
    getline(cin, s.Gender);
    cout<<"Enter Degree Program: ";
    getline(cin, s.DegreeProgram);

        ofile << setw(10) << s.StudentID 
          << setw(15) << s.yearlevel 
          << setw(25) << s.FullName 
          << setw(15) << s.birthday 
          << setw(25) << s.address 
          << setw(15) << s.Gender 
          << setw(25) << s.DegreeProgram << endl; 


    ofile.close();
}

void search_record()
{
    cout << "Hello";
}
void display_allrecords()
{
    cout << "Hello";
}

void delete_record()
{
    cout << "Hello";
}