/* 多肽与虚函数
http://www.cnblogs.com/fangyukuan/archive/2010/05/30/1747449.html
   2013-05-22 */

#if 0
#include <iostream>    
using namespace std;   
   
class Vehicle 
{   
public:  
    Vehicle(float speed,int total) 
    { 
        Vehicle::speed=speed; 
        Vehicle::total=total; 
    } 
    virtual void ShowMember() 
    { 
        cout<<speed<<"|"<<total<<endl; 
    } 
    virtual ~Vehicle() 
    { 
        cout<<"载入Vehicle基类析构函数"<<endl; 
        cin.get(); 
    } 
protected:   
    float speed; 
    int total; 
};   
class Car:public Vehicle   
{   
public:   
    Car(int aird,float speed,int total):Vehicle(speed,total)   
    {   
        Car::aird=aird;   
    } 
    virtual void ShowMember() 
    { 
        cout<<speed<<"|"<<total<<"|"<<aird<<endl; 
    } 
    virtual ~Car() 
    { 
        cout<<"载入Car派生类析构函数"<<endl; 
        cin.get(); 
    } 
protected:   
    int aird; 
};   
 
void test(Vehicle &temp) 
{ 
    temp.ShowMember(); 
} 
void DelPN(Vehicle *temp) 
{ 
    delete temp; 
} 
void main() 
{   
	//Vehicle a(120,4); 
	//a.ShowMember();
	//Car b(180,110,4);
	//b.ShowMember();
	//test(a);
	//test(b);
	Car *a = new Car(180,110,1);
	a->ShowMember();
	DelPN(a); 
    cin.get();
}




#include "MinHeap.h"

void main()
{
	int a[] = {3,30,52,14,9,46,29,68,7};
	int n = 9;
	MinHeap heap(a,n);
	heap.makeMinHeap();
	heap.minHeapAddNumber(8);
	heap.minHeapShow();
	heap.minHeapDelNumber();
	heap.minHeapShow();
}




#include<stdio.h>

//int flag = 1;
//void f();
//
//int main(){
//	if(flag)
//	{
//		flag = 0;
//		f();
//		return 0;
//	}
//	int a;
//	scanf("%d",&a);
//	if( a==1 )
//		return 10;
//	else
//		return 20;
//}
//
//void f()
//{
//	printf("%d",main());
//}

#include<string>
#include<iostream>

int size(char * str)
{
	return strlen(str);
}

int main()
{
	/*char c;
	if( (c=getchar())!=EOF )
	{
		main();
	}
	printf("%c",c);*/
	char a[] = "abddofua";
	std::cout<<size(a)<<" "<<sizeof(a)<<std::endl;
	return 0;
}

#endif