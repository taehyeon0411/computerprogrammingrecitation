#include <stdio.h>

typedef struct {
    int width;
    int height;
} Rect;

int area(const Rect *r)
{
    return r->width * r->height;
}

void scaleRect(Rect *r, int k)
{
    r->width *= k;
    r->height *= k;
}

int main(void)
{
    Rect r;
    int k;

    printf("Enter width and height: ");
    if (scanf("%d %d", &r.width, &r.height) != 2)
        return 1;

    printf("[Original]  Width %d, Height %d, Area %d\n",
           r.width, r.height, area(&r));

    printf("Enter scale factor: ");
    if (scanf("%d", &k) != 1)
        return 1;

    scaleRect(&r, k);

    printf("[Scaled x%d] Width %d, Height %d, Area %d\n",
           k, r.width, r.height, area(&r));

    return 0;
}
