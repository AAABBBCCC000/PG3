#include <stdio.h>

class Payment
{
public:
	virtual void Voice() {  // ���z�֐��Ƃ��Đ錾
		printf("�x�������@\n");
	}
};

class Card : public Payment
{
public:
	void Voice() override {  // �I�[�o�[���C�h
		printf("�N���W�b�g�J�[�h\n");
	}
};

class Cash : public Payment
{
public:
	void Voice() override {  // �I�[�o�[���C�h
		printf("����\n");
	}
};

int main(void) {
	Payment* �z��[2] = { new Card, new Cash };

	�z��[0]->Voice();
	�z��[1]->Voice();

	delete �z��[0];
	delete �z��[1];

	return 0;
}
