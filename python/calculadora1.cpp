#include <iostream>

using namespace std;

int main()
{

     int number1, number2, result;
    char op;
        cout<< "Enter the first number:"<<endl;
        cin>>number1;

        cout<< "Enter operator [+,-,*,/]:"<<endl;
        cin>>op;

        cout<< "Enter the second number:"<<endl;
        cin>>number2;

        if(op=='+')
       result=number1+number2;
      else if (op=='-')
      result=number1-number2;
      else if (op=='*')
      result=number1*number2;
      else if (op=='/')
      result=number1/number2;

        cout<<number1 <<op <<number2 << "="<< result << endl;

        else
       cout<<"la operacion es inexistente"<< endl;



    return 0;
}
