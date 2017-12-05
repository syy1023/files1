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
		
	public :double getArea(){
		return length*width*hight;
	}
	
};
class littleBox :public Box{
	public:double percentage;
};

int main(){

	Box box1;
	Box box2;
	double v=0;
	
	littleBox littleBox1;
	littleBox1.setlength(0.999);
	littleBox1.setWidth(1.13);
	littleBox1.hight=0.89;
	littleBox1.percentage=0.8;

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
	

	return 0;

}