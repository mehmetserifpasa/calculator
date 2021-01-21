#include <iostream>

using namespace std;



enum OperationCode 
{
    SumOp           = 1,
    SubstrackOp     = 2,
    MultiplyOp      = 3,
    DivideOp        = 4,
    ExitOp          = 5,
};


// declaration
int sum();
int substrack();
int multiply();
int divide();
void display_operations();


int main() 
{
    int choice = 0;

    while (choice != ExitOp)
    {
        cout << "Please select the desired operation : \n\n";
        display_operations();
        cout << " : ";
        cin >> choice;

        switch (choice)
        {
            case SumOp:
                sum();
                break;
            
            case SubstrackOp:
                substrack();
                break;

            case MultiplyOp:
                multiply();
                break;

            case DivideOp:
                divide();
                break;

            case ExitOp:
                break;
                
            default:
                cout << "Please try again...";
                break;
        }
    }
    

    return 0;
}

///////////////////////////////////
//////// FUNCTION DEFINITION

void display_operations() 
{
    cout << "Sum for 1" << endl;
    cout << "Substract for 2" << endl;
    cout << "Multiply for 3" << endl;
    cout << "Divide for 4" << endl;
    cout << "Exit for 5" << endl;
    cout << endl;
}


int sum()
{
    cout << "Please enter two integer numbers : ";
    int a,b;
    cin >> a >> b;

    cout << "The sum of two variables : " << (a + b) << endl;
    return a + b;
}



int substrack()
{
    cout << "Please enter two integer numbers : ";
    int a,b;
    cin >> a >> b;

    cout << "The substract of two variables : " << (a - b) << endl;
    return a - b;
}


int multiply()
{
    cout << "Please enter two integer numbers : ";
    int a,b;
    cin >> a >> b;

    cout << "The multiply of two variables : " << (a * b) << endl;
    return a * b;
}



int divide()
{
    cout << "Please enter two integer numbers : ";
    int a,b;
    cin >> a >> b;

    cout << "The divide of two variables : " << (a / b) << endl;
    return a / b;
}
