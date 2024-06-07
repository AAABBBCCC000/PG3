#include <iostream>
using namespace std;

class MyClass {
public:
	void Update();

	void Approach();
	void Shoot();
	void Escape();

	// メンバ関数ポインタのテーブル
	static void (MyClass::* table[])();

private:
	// メンバ関数ポインタのテーブルを参照するインデックス
	int index = 0;

};

void MyClass::Approach() {
	cout << "敵の接近！" << endl;
}

void MyClass::Shoot() {
	cout << "敵の攻撃！" << endl;
}

void MyClass::Escape() {
	cout << "敵の後退！" << endl;
}

void MyClass::Update() {

	// 関数ポインタのテーブルから関数を実行
	(this->*table[index])();
	char input = getchar();
	//enter
	index = (index + 1) % 3;
}

// staticで宣言したメンバ関数ポインタテーブルの実体
void (MyClass::* MyClass::table[])() = {
  &MyClass::Approach, // インデックス番号0
  &MyClass::Shoot, // インデックス番号1
  &MyClass::Escape  // インデックス番号2
};


int main()
{
	MyClass my;
	
	while (true) {
		my.Update();
    }
	
    return 0;
}