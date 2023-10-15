
#ifndef LINKEDLISTS.HPP
#define LINKEDLISTS.HPP

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*A linked list of assignment details ordered by due date*/

struct Assignment
{
    string assignment_name;
    string assigment_class;
    string assignment_due_date;
    bool is_assignment_finished;

    Assignment* next;

    void displayAssignment();
};

class AssignmentOrder
{

    private:

        Assignment* head;

    public:

    AssignmentOrder();
    AssignmentOrder(Assignment* assignment);
    ~AssignmentOrder();

    bool isEmpty();
    void printAssignments();
    void addAssignment(Assignment* assignment);
    Assignment* searchAssigmentByDate(string day, string month, string year);
    void finishAssignment(string assignment_name);
    void parseAssignments(ifstream &input, string searchParameters[], Assignment* &assignments, int &arrayCapacity);
    
};


#endif