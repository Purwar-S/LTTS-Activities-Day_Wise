/*
1. Use structures to find the volume and the total surface area of the box.
*/

#include<stdio.h>

struct shape{
    double length;
    double width;
    double height;
};
typedef struct shape sp;

double calculateVolume(sp box){
    return (box.length * box.width * box.height);
}

double calculateSurfaceArea(sp box) {
    double topBottomArea = 2 * (box.length * box.width);
    double sideArea1 = 2 * (box.length * box.height);
    double sideArea2 = 2 * (box.width * box.height);
    return topBottomArea + sideArea1 + sideArea2;
}

int main(){
    sp myBox;
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 2.0;
    
    double volume = calculateVolume(myBox);
    double surfaceArea = calculateSurfaceArea(myBox);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}