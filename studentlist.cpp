/*
 William Wong
 11/4/22
 This project is studentlist, allowing an individual to add a students
 first & last name, their student ID and their gpa
 this project also allows a user to delete that student from the system
 or add even more!
*/

  #include<iostream>
  #include<cstring>
  #include <vector>
  #include <iomanip>
  using namespace std;

  struct student {

   char firstName[50];
   char lastName[50];
   int id;
   float gpa;
  
  };

  // function prototypes below

  void addStudent(vector<student*> &sList);
  void print(vector<student*> &sList);
  void removeStudent(vector<student*> &sList);

  // adds new student to the studentList vector                                                                                                          
  void addStudent(vector<student*> &sList) {

   student* addStudent = new student();
   char firstName1[50];
   char lastName1[50];
   int studentId;
   float gpa1;

   // inputting everything                                                                                                                               
   cout << "Please enter students First Name: " << endl;
   cin >> firstName1;
   cout << "Please enter students Last Name: " << endl;
   cin >> lastName1;
   cout << "Please enter students ID Number: " << endl;
   cin >> studentId;
   cout << "Please enter students GPA: " << endl;
   cin >> gpa1;

   // copys from variables we made above into vector                                                                                                     
   strcpy(addStudent->firstName, firstName1);
   strcpy(addStudent->lastName, lastName1);
   addStudent->id = studentId;
   addStudent->gpa = gpa1;
   sList.push_back(addStudent);
  }

   // method which deletes student from program                                                                                                           
                                                                                                                                                       
  void removeStudent(vector<student*> &sList) {
   int studentId;
   cout << "Please enter the individuals Student ID you would like to delete: " << endl;

   cin >> studentId;

   // asks for studentid num and deletes them from the program                                                                                          
                                                                                                                                                        
   for (int i = 0; i < sList.size(); i++) {
     if ((sList[i]->id) == studentId) {
       sList.erase(sList.begin() + i);
       cout << studentId << " is deleted from the system" << endl;
     }
     else {
       cout << "Unable to identify Stduent" << endl;
     }
    }
   }

  // the students are print below here                                                                                                                   
  void print(vector<student*> &sList) {
   cout << "Listed students are shown below!" << endl;

   // for loop to allow our program to print more than one student                                                                                       
   for (int i = 0; i < sList.size(); i++) {
      cout << sList[i]->firstName << " " << sList[i]->lastName << ", " << sList[i]->id << ", " << setprecision(3) << sList[i]->gpa << endl;
     }
   }

 int main() {

  char input[10];
  bool trueFalse = true;
  vector<student*> sList;

  
  while (trueFalse == true) {
    cout << " " << endl;
    cout << "Choose one of the actions --> Add or Print or Delete or Quit" << endl;

    cin >> input;

    //helps to change all the users letters to lowercase
    //allows for easier use of strcmp below

    for(int i =0; i < strlen(input); i++) {

      input[i] = tolower(input[i]);
      
    }

    /*
      if and else statements below are used to either add, print, or delete
      students, while also giving users the option to quit the program
     */

    if (strcmp(input, "add") == 0) { 
      addStudent(sList);
    }
    else if (strcmp(input, "print") == 0) { 
      print(sList);
    }
    else if (strcmp(input, "delete") == 0) { 
      removeStudent(sList);
    }
    else if (strcmp(input, "quit") == 0) { 
      cout << "Thanks for Playing! Shutting down..." << endl;
      trueFalse = false;
    }
    else { 
      cout << "Please type the exact letters" << endl;
    }
   }   
  }






