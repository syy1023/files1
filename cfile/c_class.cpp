#include <iostream>
#include <csignal>
#include <unistd.h>
#include <vector>
using namespace std;
//预处理
#define pie 3.1415
//宏
#define mine cout<<"这是宏mine"<<endl
#define DEBUG

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
		return length*width*hight;
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
//接口 
class Circle{
	virtual double getArea()=0;
	private:
		double radium;
	public :void setRadium(double r){
		radium=r;
	} 
};
class littleCircle{
	public:double radium;
	public:double getRadium(double radium){
		return radium/5;
	}
};
//数据抽象	
class Calculator{
	public :
		Calculator(int k=0){
		total=k;
	}
		void addnum(int num){
			total+=num;
		}
		int getTotal(){
			return total;
		}
	private:int total;	
};
//命名空间，如果同时有2个相同名称函数
using namespace std;
namespace first{
	void fun1(){
		cout<<"this is the fun1 from the first namespace: "<<endl;
	}
}
namespace second{
	void fun1(){
		cout<<"this is the fun1 from the second namespace: "<<endl;
	}
}
namespace one{
	void fun2(){
		cout<<"this is the fun1 from the one namespace: "<<endl;
	}
}
namespace two{
	void fun2(){
		cout<<"this is the fun1 from the two namespace: "<<endl;
	}
}
//通过该声明调用制定空间的函数
using namespace one;

//函数模板（模板不能在函数中定义）
template <class Myclass> Myclass myFun(Myclass x,Myclass y){
	return (x>y)?x:y;
}
//信号处理
void signalDealer(int signum){
	cout<<"Interrupt signal<"<<signum<<">\n"<<endl;
}


int main(){	
#if 5
	cout<<"这是条件编译的n"<<endl;
#endif
//指针与地址
    int var=8;
	int *ip;
	ip=&var;
	cout<<"var的值是 ："<<var<<endl;
	cout<<"ip的值是 ："<<ip<<endl;
	cout<<"*ip的值是 ："<<*ip<<endl;
	
//动态内存
	double* rvalue=NULL;
	rvalue=new double;
	*rvalue=1.314;
	cout<<"value of *rvalue is: "<<*rvalue<<endl;
	cout<<"value of rvalue is: "<<rvalue<<endl;
	delete rvalue;
	cout<<"value of *rvalue is: "<<*rvalue<<endl;
	cout<<"value of rvalue is: "<<rvalue<<endl;
//引用
	int gorgeous=1314;
	int& g=gorgeous;
	cout <<"the value of g is :"<<g<<endl;

//类对象
	Box box1;
	Box box2;
	double v=0;
//方法重载
	box1.sayi(1);
	box1.sayi(1,0.9);
	
	littleBox littleBox1;
	littleBox1.setlength(0.999);
	littleBox1.setWidth(1.13);
	littleBox1.hight=0.89;
	littleBox1.percentage=0.8;
//重写运算符，对象作为参数
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
//继承	
	v=littleBox1.getArea();
	cout<<"littleBox1的体积"<<v<<endl;	
	
//多态	
	Father *father;
	Sun sun(1,2);	father=&sun;
	father->talk();
	
	littleCircle littleCircle1;
	cout<<"littleBox1的体积"<<littleCircle1.getRadium(0.98)<<endl;
//数据抽象	
	Calculator cal;
	cal.addnum(1);
	cal.addnum(2);
	cal.addnum(3);
	cout<<"totel result is: "<<cal.getTotal()<<endl;	
//命名空间调用:
	first::fun1();
	second::fun1();
	
	fun2();
//模板函数使用：
	int a1=3,a2=2;
	double b1=3,b2=2;
	cout<<"模板函数使用int类型输出"<<myFun(a1,a2)<<endl;
	cout<<"模板函数使用double类型输出"<<myFun(b1,b2)<<endl;
//宏编译
	cout<<"预处理中pie的值是："<<pie<<endl;
//宏
	mine;
//条件编译,如果DEBUG被编译了就输出"这是#ifdef debug"	
#ifdef DEBUG
		cerr<<"这是#ifdef debug"<<endl;
#endif

//c++自带模板使用
 vector<int> vec;
 int m;
 cout<<"vector未加入值的时候，大小是："<<vec.size()<<endl;
 for(m=0;m<=5;m++){
	 vec.push_back(m);
 }
 cout<<"vec加入值后的大小是： "<<vec.size()<<endl;
 for(m=0;m<=5;m++){
	 cout<<"向量中的五个值是： "<<vec[m]<<endl;
//信号处理
 signal(SIGINT,signalDealer);
while(true){
	cout<<"going to stop******"<<endl;
	sleep(1);
}
 }
 	
	return 0;
	
}
