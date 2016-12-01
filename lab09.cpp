#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void parser(string eq){
	 char a[10];
	 for(int i = 0; i < eq.length(); i++){
		   a[i] =  eq[i];
	 }
	 for(int i = 0; i < eq.length(); i++){
		   //if(a[i] == 
	 }

	 

}

void main(){
	 string equation;
	 int order = 0, variable = 0;
	 cout << "\tC A L C U L A T O R";
	 cout << "\nEnter order of your equation (max 2): ";
	 cin >> order;
	 if(order != 1 && order != 2){
		  cout << "\nI N V A L I D  O R D E R  S E L E C T E D!";
		  //exit(1);
	 }
	 else{
		  cout << "\nEnter the equation: ";
		  cin.ignore();
		  getline(cin,equation);

	 if(order == 1){
		  int a = 0, b = 0;
		  cout << "The format of the equation is: aX + b = 0\n";
		  cout << "Enter the value of a: "; cin >> a;
		  cout << "Enter the value of b: "; cin >> b;
		  float c = (-b)/a;
		  cout << "The value of X is: " << c;
		  }

	 if(order == 2){
		  cout << "The format of the equation is: aX^2 + bX + c = 0\n";
		  int a = 0, b = 0, c = 0, discriminant = 0;
		  float root1 = 0, root2 = 0;
		  cout << "Enter the value of a: ";
		  cin >> a;
		  cout << "Enter the value of b: ";
		  cin >> b;
		  cout << "Enter the value of c: ";
		  cin >> c;
		  discriminant = ((b*b) - 4*a*c);
		  if(discriminant>0){
		  root1 = (-1*b+sqrt(discriminant))/(2*a);
		  root2 = (-1*b-sqrt(discriminant))/(2*a);
		  }
		  else if(discriminant==0){
		  root1 = root2 =(-1*b)/(2*a);
		  }
		  else{
		  discriminant = -1*discriminant;
		  cout << "The value of X1 is: " << "(" << (-1*b) << "+ i" << sqrt(discriminant) << ")/" << 2*a << "\n";
		  cout << "The value of X2 is: " << "(" << (-1*b) << "+ i" << sqrt(discriminant) << ")/" << 2*a << "\n";
		  
		  }
		  cout << "The value of X1 is: " << root1 << "\n";
		  cout << "The value of X2 is: " << root2 << "\n";
		  }
	 }

	 cout << "\n";
	 system("pause");
}
