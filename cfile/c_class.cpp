#include <iostream>
using namespace std;

class Box{	
	public : double hight;		
	public:	
		void setlength(double l){
			length=l;
		}
		void setWidth(double w){
			width=w;
		}
	protected:
		double length;
		double width;
		
	public:double getArea(){
		return length*width*nhight;
	}
//方法重载	
	public:void sayi(int i){
		cout<<"box1 sayi 返回类型为int :"<<i<<endl;
	}
	public:void sayi(int i,float j){
		cout<<"box1 sayi 返回为double,且i,j :"<<(i*j)<<endl;
	}
};
//类的继承，protected方法使用
class littleBox :public Box{
	public:double percentage;	
};
//运算符重载
class Cup{
	public:
		double size;
		char color;			
	Cup operator+(const Cup& c){
		Cup cup;
		cup.size=this->size+c.size;
		return cup;
	}
};
//多态
//注意virtual talk的使用
class Father{
	public:
		int a;
		int t;
		Father(int age,int tall){
		a=age;
		t=tall;
	}
	virtual	int talk()=0;
};
class Sun:public Father{
	public:Sun(int a,int t):Father(a,t){}
	int talk(){
		cout<<"I am the sun"<<endl;
		return (a*t);
	}
};

int main(){		
	Box box1;
	Box box2;
	double v=0;

	box1.sayi(1);
	box1.sayi(1,0.9);
	
	littleBox littleBox1;
	littleBox1.setlength(0.999);
	littleBox1.setWidth(1.13);
	littleBox1.hight=0.89;
	littleBox1.percentage=0.8;
	
	Cup cup1;
	Cup cup2;
	Cup cup3;
	cup1.size=0.89;
	cup2.size=0.98;
	cup3=cup1+cup2;
	cout<<"cup1的size是 ："<<cup1.size<<endl;
	cout<<"cup2的size是 ："<<cup2.size<<endl;
	cout<<"cup1+cup2的size是 ："<<cup3.size<<endl;

	box1.setlength(1.90);
	box1.setWidth(3.90);
	box1.hight=4.90;

	box2.setlength(4.90);
	box2.setWidth(1.90);
	box2.hight=2.90;
	
 	v=box1.getArea();
	cout<<"box1的体积"<<v<<endl;

	v=box2.getArea();
	cout<<"box2的体积"<<v<<endl;
	
	v=littleBox1.getArea();
	cout<<"littleBox1的体积"<<v<<endl;	
	
	
	Father *father;
	Sun sun(1,2);
	father=&sun;
	father->talk();
	return 0;
}
