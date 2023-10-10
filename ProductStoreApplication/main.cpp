#include <iostream>
#include"ProductStore.h"
#include"ProductManager.h"
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//vector<ProductStore> product;
using namespace std;
int main() {

	int choice;
	
	  ProductManager p;
	  do{
	  	cout<<"Please Press:"<<endl;
	  	 cout<<"1.To Insert the product details 2.To Display Product Details 3.For Deletion of Product 4.To Exit"<<endl;
	  	cin>>choice;
	  	switch(choice){
	  		case 1:{
	  			int pid;
	            string prodName;
	            string prodDesc;
	            double price;
	    cout<<"Enter values"<<endl;
	    cout<<"Product ID:";
	    cin>>pid;
	    cout<<"Product Name:";
	    getline(cin>>ws,prodName);
	    
	    cout<<"Product Description:";
	    getline(cin>>ws,prodDesc);
	    cout<<"Product Price:";
	   cin>>price;
				ProductStore ps(pid,prodName,prodDesc,price);
				p.insertDetails(ps);
	  		      cout<<"Insertion successfully"<<endl;
	  		        break;
	  		    }
	  		case 2:{
	  			cout<<"Your SelectionDisplay Values"<<endl;
	  			 p.displayDetails();
				break;
			  }
			  case 3:{
			  	cout<<"Delete details"<<endl;
			  	string name;
			    cin>>name;
			  	p.deleteDetails(name);
			  	cout<<"Delete Successfully";
				break;
			  }
	  		default : {
			    cout<<"Invalid";
	  		         break;
	  		     }
		  }
	  }while(choice!=4);
	return 0;
}
