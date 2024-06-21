#include <stdio.h>

class Payment
{
public:
	virtual void Voice() {  // 仮想関数として宣言
		printf("支払い方法\n");
	}
};

class Card : public Payment
{
public:
	void Voice() override {  // オーバーライド
		printf("クレジットカード\n");
	}
};

class Cash : public Payment
{
public:
	void Voice() override {  // オーバーライド
		printf("現金\n");
	}
};

int main(void) {
	Payment* 配列名[2] = { new Card, new Cash };

	配列名[0]->Voice();
	配列名[1]->Voice();

	delete 配列名[0];
	delete 配列名[1];

	return 0;
}
