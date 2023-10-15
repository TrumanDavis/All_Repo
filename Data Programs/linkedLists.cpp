#include "linkedLists.hpp"

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

AssignmentOrder::AssignmentOrder()
{
    head = nullptr;
}

AssignmentOrder::AssignmentOrder(Assignment* assignment)
{
    head = assignment;
}

AssignmentOrder::~AssignmentOrder()
{
    while(head)
    {
        delete head;
        head = head->next;
    }

    head = nullptr;
}


bool AssignmentOrder::isEmpty()
{
    if(head == nullptr)
    {
        return true;
    }

    return false;
}

void Assignment::displayAssignment()
{
    if(is_assignment_finished == true)
    {
        cout << "[ " << assignment_name << " - " << assigment_class << " - " << assignment_due_date << "finished!" << " ]" << endl; 
    }
    
    else
    {
        cout << "[ " << assignment_name << " - " << assigment_class << " - " << assignment_due_date << "unfinished." << " ]" << endl; 
    }
}

void AssignmentOrder::printAssignments()
{
    Assignment* currAssignment = head;
    cout << "Listing Assignments" << endl;
    cout << "===================" << endl;

    while(currAssignment)
    {
        currAssignment->displayAssignment();
        currAssignment = currAssignment->next;
    }

    cout << "End of assignment list" << endl;
    cout << "======================" << endl;
}

void AssignmentOrder::addAssignment(Assignment* new_assignment)
{
    if(isEmpty())
    {
        head = new_assignment;
    }

    else
    {
        
    }
}

Assignment* AssignmentOrder::searchAssigmentByDate(string day, string month, string year)
{

}

void AssignmentOrder::finishAssignment(string assignment_name)
{

}
