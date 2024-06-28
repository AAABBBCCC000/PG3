#include <stdio.h>

class IShape
{
public:
    virtual void Size() = 0;
    virtual void Draw() = 0;

protected:
    float size;
    float radius;
};

class Circle : public IShape
{
public:
    void Size() override;
    void Draw() override { printf("–ÊÏ %f\n", size); };
};

class Rectangle : public IShape
{
public:
    void Size() override;
    void Draw() override { printf("–ÊÏ %f\n", size); };
};

void Circle::Size()
{
    radius = 5.0f;
    printf("‰~‚Ì”¼Œa %f\n", radius);
    size = radius * radius * 3.14f;
}

void Rectangle::Size()
{
    radius = 5.0f;
    printf("‹éŒ`‚Ì”¼Œa %f\n", radius);
    size = radius * 2.0f * radius * 2.0f;
}

int main(void)
{
    IShape* shapes[2] = { new Circle, new Rectangle };

    shapes[0]->Size();
    shapes[1]->Size();

    shapes[0]->Draw();
    shapes[1]->Draw();

    delete shapes[0];
    delete shapes[1];

    return 0;
}
