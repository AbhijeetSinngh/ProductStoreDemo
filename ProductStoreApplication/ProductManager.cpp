#include<iostream>
#include "ProductManager.h"
#include"ProductStore.h"
#include<string>
#include<vector>
using namespace std;
ProductManager::ProductManager()
{
}

ProductManager::~ProductManager()
{
}
/*	void ProductManager::setMid(int prodMid){
			this->prodMid=prodMid;
		}
		int ProductManager::getprodMid(){
			return prodMid;
		}
		
		void ProductManager::setpmngName(string pmngName){
			this->pmngName=pmngName;
		}
		string ProductManager::getpmngName(){
			return pmngName;
		}*/
		/*	 int pid;
	 string prodName;
	 string prodDesc;
	 double price;*/
	 	int pid;
	       string prodName;
	       string prodDescription;
	        double price;
		void ProductManager::insertDetails(ProductStore &product){
		
	       products.push_back(product);
		}
		void ProductManager::displayDetails(){
			for(int i=0;i<products.size();i++){
				cout<<"name"<<products[i].getProdName()<<endl;
				cout<<"Desc"<<products[i].getProdDesc()<<endl;
				cout<<"Price"<<products[i].getPrice()<<endl;
			}
		}
		void ProductManager::deleteDetails(string name){
			for(int i=0;i<products.size();){
				if(products[i].getProdName()==name){
					products.erase(products.begin()+i);
					
				}else{
					i++;
				}
			}
		}
