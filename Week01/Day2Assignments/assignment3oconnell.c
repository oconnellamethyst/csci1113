// assignment3oconnell.c
#include <stdio.h>
#include <math.h>

int main()                /* a program that gets three numbers and does prism computations with three numbers */
{
	float height, depth, width;
	float sat, saff, sae, sap; // Surface area of top, of front face, of end, and the whole prism
	float v; // Volume
	float pb, pff, pe; // Perimeter bottom, front face, and end
	float d; // Diagonal
	
	printf("What is the height?\n");
	scanf("%f", &height);
	printf("What is the depth?\n");
	scanf("%f", &depth);
	printf("What is the height?\n");
	scanf("%f", &width);
	
	sat = depth * width; // Calculates Surface area of top
	saff = height * width; // of front face
	sae = depth * height; // of end
	sap = 2 * (sat + saff + sae); // and the whole prism
	
    printf("\nSurface Areas: \n"); // Prints the surface areas all nice
    printf("Top: %.2f,",sat);
    printf(" Front face: %.2f,",saff);
    printf(" End: %.2f,",sae);
    printf(" Whole Prism: %.2f\n",sap);  
    
    pb = 2 * (depth + width); // Perimeter of bottom
    pff = 2 * (height + width); // front face
    pe = 2 * (height + depth); // and end
    
    printf("\nPerimeters: \n"); // Prints the perimeters all nice
    printf("Bottom: %.2f,",pb);
    printf(" Front face: %.2f,",pff);
    printf(" End: %.2f\n",pe);
    
    v = height * depth * width; // Volumes
    printf("\nVolume: %.2f \n", v); // Prints the volume
    
    d = sqrtf(depth*depth + height*height + width*width); // Diagonal
    printf("\nDiagonal through the center of the prism: %.2f\n",d); // Prints the diagonal
    
    return 0;
}
