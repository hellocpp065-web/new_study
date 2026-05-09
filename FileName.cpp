//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//class Point {
//private:
//    double x, y;
//public:
//    Point();
//    Point(double x_, double y_);
//    double distance();
//    double distance(const Point& p);
//    double getX() { return x; }
//    double getY() { return y; }
//    
//};
//Point::Point(){
//    x = 0;
//    y = 0;
//}
//Point::Point(double x_, double y_) {
//    x = x_;
//    y = y_;
//}
//double Point::distance() {
//    return sqrt(x * x + y * y);
//}
//double Point::distance(const Point& p) {
//    double x1 = x - p.x;
//    double y1 = y - p.y;
//    return sqrt(x1* x1 + y1 * y1);
//}
//
//
//int main()
//{
//    double x1, y1, x2, y2, r;
//    cin >> x1 >> y1 >> x2 >> y2 >> r;
//    Point p(x1, y1);
//    Point ctr(x2, y2);
//    
//}
#include<iostream>
#include<string>
using namespace std;

class Animal {
private:
	int num;
	string name;
public:
	Animal(int num, string name)
	{
		this->num = num;
		this->name = name;
	}
	int getnum() { return num; }
	string getname() { return name; }
	virtual void showIt() = 0;
};
class Cat:public Animal {
	int num= getnum();
	string name= getname();
public:
	void showIt()override {
		cout << num << " " << name << " " << "wang wang wang" << endl;
	}
};
int main()
{
	Cat a1;
	int age = 12;
	string name = "mike";

	return 0;
}