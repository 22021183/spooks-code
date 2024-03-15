#include <iostream>

using namespace std;

int main()
{
   double merchandisecost,storerent,employeessalary,electricitycost;
    cout << "enter total cost of merchandise:"  << endl;
    cin>>merchandisecost;
    cout<<"enter total cost of the salary of employees:" << endl;
    cin>>employeessalary;
    cout<<"enter total cost of the yearly rent:"<< endl;
    cin>>storerent;
    cout<<"enter total cost the estimated electricity cost"<<endl;
    cin>>electricitycost;

    double totalexpenses = merchandisecost + employeessalary + storerent + electricitycost;

    double desiredNetprofit = merchandisecost * 0.1;

    double newnetprofit = desiredNetprofit/0.85;

    double markup = (newnetprofit + totalexpenses)/merchandisecost;

    cout<<"total markup:"<< markup <<endl;


    return 0;
}
