#ifndef PRODUCTSTORE_H
#define PRODUCTSTORE_H
#include<string>
using namespace std;
class ProductStore
{    
private:
	 int pid;
	 string prodName;
	 string prodDesc;
	 double price;
	public:
		ProductStore();
		ProductStore(int pid,string pname,string pdesc,double price);
		~ProductStore();
		
		 void setPid(int pid);
		 int getPid();
		 
		 void setProdName(string name);
		 string getProdName();
		 
		 void setProdDesc(string prodDesc);
		string getProdDesc();
		
		void setPrice(int price);
		int getPrice();
		
	protected:
};

#endif
