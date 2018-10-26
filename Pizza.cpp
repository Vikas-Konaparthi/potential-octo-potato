#include <iostream>
using namespace std;
double unit_price(int diameter,double price);
int main()
{
	int diameter_small,diameter_large;
	double price_small,unitprice_small,price_large,unitprice_large;
	
	cout<<"Welcome to the Pizza Consumers Union by Vikas Konaparthi\n";
	cout<<"Enter the diameter of small pizza (in inches) : ";
    cin>>diameter_small;
    cout<<"Enter the price of small pizza : Rs ";
    cin>>price_small;
    
    cout<<"Enter the diameter of large pizza (in inches) : ";
    cin>>diameter_large;
    cout<<"Enter the price of large pizza : Rs ";
    cin>>price_large;
    
    unitprice_small = unit_price(diameter_small,price_small);
    unitprice_large = unit_price(diameter_large,price_large);
    
    
    cout<<"small pizza\n";
    cout<<"Diameter = " <<diameter_small <<"inches\n" <<"Price = Rs" <<price_small <<"Per square inch = Rs " <<unitprice_small <<endl;
		
	cout<<"large\n"; 
	cout<<"Diameter = " <<diameter_large <<"inches\n" <<"Price = Rs" <<price_large <<"Per square inch = Rs " <<unitprice_large <<endl;
		
	if(unitprice_large < unitprice_small)
	cout<<"The large one is better buy\n";
	else
	    cout<<"The small one is the better buy ";
	    cout<<"Buon Appentito!\n";
	    
	cout<<"A Satrus Global Innovation"  ;  
	return 0;
	
	
	    
		
}

double unit_price(int diameter,double price)

{
	const double PI = 3.14;
	double radius,area;
	radius = diameter/static_cast<double>(2);
	area = PI*radius*radius;
	
	return(price/area);
}
