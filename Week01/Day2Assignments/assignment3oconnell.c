// assignment3oconnell.c
#include <stdio.h>
#include <math.h>

int main()                /* a program that gets three numbers and does prism computations with three numbers */
{
	int height, depth, width;
	int sat, saff, sae, sap; // Surface area of top, of front face, of end, and the whole prism
	int v; // Volume
	int pb, pff, pe; // Perimeter bottom, front face, and end
	float d; // Diagonal
	
	printf("What is the height?\n");
	scanf("%d", &height);
	printf("What is the depth?\n");
	scanf("%d", &depth);
	printf("What is the height?\n");
	scanf("%d", &width);
	
	sat = depth * width; // Calculates Surface area of top
	saff = height * width; // of front face
	sae = depth * height; // of end
	sap = 2 * (sat + saff + sae); // and the whole prism
	
    printf("\nSurface Areas: \n"); // Prints the surface areas all nice
    printf("Top: %d,",sat);
    printf(" Front face: %d,",saff);
    printf(" End: %d,",sae);
    printf(" Whole Prism: %d\n",sap);  
    
    pb = 2 * (depth + width); // Perimeter of bottom
    pff = 2 * (height + width); // front face
    pe = 2 * (height + depth); // and end
    
    printf("\nPerimeters: \n"); // Prints the perimeters all nice
    printf("Bottom: %d,",pb);
    printf(" Front face: %d,",pff);
    printf(" End: %d\n",pe);
    
    v = height * depth * width; // Volumes
    printf("\nVolume: %d \n", v); // Prints the volume
    
    d = sqrtf((float)depth*depth + height*height + width*width); // Diagonal
    printf("\nDiagonal through the center of the prism: %.2f\n",d); // Prints the diagonal
    
    return 0;
}
