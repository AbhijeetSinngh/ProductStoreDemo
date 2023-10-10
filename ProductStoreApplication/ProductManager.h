#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include"ProductStore.h"
#include<string>
#include<vector>
using namespace std;
class ProductManager
{   private :
//	   int prodMid;
//	   string pmngName;
//	  double salary;
vector<ProductStore> products;
	public:
		ProductManager();
		ProductManager(int prodMid,string pmngName);
		
		~ProductManager();
		
//		void setMid(int prodMid);
//		int getprodMid();
		
//		void setpmngName(string pmngName);
//		string getpmngName();
		/*	 int pid;
	 string prodName;
	 string prodDesc;
	 double price;*/
		void insertDetails(ProductStore& product);
		 void displayDetails();
		 void deleteDetails(string name);
		
	protected:
};

#endif
