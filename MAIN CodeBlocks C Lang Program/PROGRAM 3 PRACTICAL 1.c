#include <stdio.h>
float main()
{   printf("Practical 1\n Question 3\n Name:- Jash Jani\n Enrollment Number:- 92400957004\n");
    const float PI = 3.14159;
    float radius, area;

    printf("Enter the radius of the circle: ");
    	scanf("%f", &radius);

    	area = PI * radius * radius;

    	printf("The area of the circle is: %f\n", area);

    	return 0;
}
