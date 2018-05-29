// assignment3oconnell.c
#include <stdio.h>
int main(void)                /* a program that does prism computations with three numbers */
{
	int height = 20;
	int depth = 20;
	int width = 20;
	
	int sat; // Surface area of top
	int saff; // of front face
	int sae; // of end
	int sap; // and the whole prism
	sat = depth * width;
	saff = height * width;
	sae = depth * height;
	sap = 2 * (sat + saff + sae);
	
    printf("Surface Areas: \n");
    printf("Top: %d,",sat);
    printf(" Front face: %d,",saff);
    printf(" End: %d,",sae);
    printf(" Whole Prism: %d\n",sap);
    
    int pb; //Perimeter bottom
    int pff; // front face
    int pe; // and end
    pb = 2 * (depth + width);
    pff = 2 * (height + width);
    pe = 2 * (height + depth);
    
    printf("Perimeters: \n");
    printf("Bottom: %d,",pb);
    printf(" Front face: %d,",pff);
    printf(" End: %d\n",pe);
    
    int v; //volume
    v = height * depth * width;
    printf("Volume: %d \n", v);
    
    int d; //diagonal
    d = sqrt(depth*depth + height*height + width*width);
    printf("Diagonal through the center of the prism: %d\n",d);

    
    return 0;
}
