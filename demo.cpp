#include<iostream>
using namespace std;
//开闭原则

//写一个抽象类
class ABstractCaculator{
public:
	virtual int getResult() = 0;
	virtual void setOperatorNumber(int a, int b) = 0;
};

//加法计算器
class PulsCaculator : public ABstractCaculator {
public:
	virtual void setOperatorNumber(int a,int b){
		this->mA = a;
		this->mB = b;
	}
	virtual int getResult() {
		return mA + mB;
	}
public:
	int mA;
	int mB;
};
//减法计算器
class MinuteCaculator : public ABstractCaculator {
public:
	virtual void setOperatorNumber(int a, int b) {
		this->mA = a;
		this->mB = b;
	}
	virtual int getResult() {
		return mA - mB;
	}
public:
	int mA;
	int mB;
};
//乘法计算器
class MultiplyCaculator : public ABstractCaculator {
public:
	virtual void setOperatorNumber(int a, int b) {
		this->mA = a;
		this->mB = b;
	}
	virtual int getResult() {
		return mA * mB;
	}
public:
	int mA;
	int mB;
};
//除法计算器
class DivisionCaculator : public ABstractCaculator {
public:
	virtual void setOperatorNumber(int a, int b) {
		this->mA = a;
		this->mB = b;
	}
	virtual int getResult() {
		return mA / mB;
	}
public:
	int mA;
	int mB;
};

void test1(){
	ABstractCaculator* caculator = new PulsCaculator;
	caculator->setOperatorNumber(10, 20);
	cout << caculator->getResult() << endl;
}


int main()
{
	test1();
	return 0;
}