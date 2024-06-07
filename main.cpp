#include <iostream>
using namespace std;

class MyClass {
public:
	void Update();

	void Approach();
	void Shoot();
	void Escape();

	// �����o�֐��|�C���^�̃e�[�u��
	static void (MyClass::* table[])();

private:
	// �����o�֐��|�C���^�̃e�[�u�����Q�Ƃ���C���f�b�N�X
	int index = 0;

};

void MyClass::Approach() {
	cout << "�G�̐ڋ߁I" << endl;
}

void MyClass::Shoot() {
	cout << "�G�̍U���I" << endl;
}

void MyClass::Escape() {
	cout << "�G�̌�ށI" << endl;
}

void MyClass::Update() {

	// �֐��|�C���^�̃e�[�u������֐������s
	(this->*table[index])();
	char input = getchar();
	//enter
	index = (index + 1) % 3;
}

// static�Ő錾���������o�֐��|�C���^�e�[�u���̎���
void (MyClass::* MyClass::table[])() = {
  &MyClass::Approach, // �C���f�b�N�X�ԍ�0
  &MyClass::Shoot, // �C���f�b�N�X�ԍ�1
  &MyClass::Escape  // �C���f�b�N�X�ԍ�2
};


int main()
{
	MyClass my;
	
	while (true) {
		my.Update();
    }
	
    return 0;
}