
#include <vector>
#include "bitmap_image.hpp"

int main()
{
    bitmap_image image("test.bmp");

    if (!image)
    {
        printf("B³¹d ! Nie znaleziono plku: test.bmp\n");
        return 1;
    }

    image.invert_color_planes();
    image.save_image("test_negative.bmp");

    printf("test.bmp: \n");
    printf("Szerokosc obrazka: %d\n",image.width());
    printf("Wysokosc obrazka: %d\n",image.height());
    printf("Bajtow na piksel: %d\n",image.bytes_per_pixel());

    return 0;
}