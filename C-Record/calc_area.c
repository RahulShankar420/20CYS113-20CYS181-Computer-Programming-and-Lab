#include <stdio.h>

enum type
{
    Circle,
    Rectangle
};

typedef struct
{
    union dimensions
    {
        int length;
        int radius;
    } di;
    enum type Type;
} shape;

void circle(int val, shape sel)
{
    sel.di.radius = val;
    float area = (3.14 * sel.di.radius * sel.di.radius);
    printf("%lf", area);
}

void rectangle(int val, shape sel)
{
    sel.di.length = val;
    int b;
    scanf("%d", &b);
    float area = (sel.di.length * b);
    printf("%lf", area);
}

int main()
{
    shape sel;
    int ch, val;
    scanf("%d%d", &ch, &val);
    switch (ch)
    {
    case 1:
        circle(val, sel);
        break;
    case 2:
        rectangle(val, sel);
        break;
    default:
        printf("Invlid choice");
    }

    return 0;
}
