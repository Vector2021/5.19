#include<iostream>
using namespace std;
//����ԭ��

//дһ��������
class ABstractCaculator{
public:
	virtual int getResult() = 0;
	virtual void setOperatorNumber(int a, int b) = 0;
};

//�ӷ�������
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
//����������
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
//�˷�������
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
//����������
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