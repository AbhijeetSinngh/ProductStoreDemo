#include "ProductStore.h"
#include<iostream>
#include<string>
using namespace std;
ProductStore::ProductStore()
{
}
ProductStore::ProductStore(int pid,string prodName,string prodDesc,double price){
		    this->pid=pid;
			this->prodDesc=prodDesc;
			this->prodName=prodName;
			this->price=price;
}

ProductStore::~ProductStore()
{
}
void ProductStore::setPid(int pid){
	this->pid=pid;
}
int ProductStore::getPid(){
	return pid;
}
void ProductStore::setProdName(string prodName){
	this->prodName=prodName;
}
string ProductStore::getProdName(){
	return prodName;
}
void ProductStore::setPrice(int price){
	this->price=price;
}
int ProductStore::getPrice(){
	return price;
}
void ProductStore::setProdDesc(string pdesc){
	this->prodDesc=pdesc;
}
string ProductStore::getProdDesc(){
	return prodDesc;
}
