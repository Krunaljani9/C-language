// C program to demonstrate the
// use of an array within a structure
#include <stdio.h>

// Declaration of the structure candidate
struct candidate {
    int roll_no;
    char grade;

    // Array within the structure
    float marks[4];
};

// Function to displays the content of
// the structure variables
void display(struct candidate a1[3])
{
    for(int j=0;j<3;j++)
    {


    float total=0.00;

    printf("Roll number : %d\n", a1[j].roll_no);
    printf("Grade : %c\n", a1[j].grade);
    printf("Marks secured:\n");
    int i;
    int len = sizeof(a1[j].marks) / sizeof(float);

    // Accessing the contents of the
    // array within the structure
    for (i = 0; i < len; i++) {
        printf("Subject %d : %.2f\n",
               i + 1, a1[j].marks[i]);
               total+=a1[j].marks[i];

    }
    printf("total is %.2f\n",total);
    }
}

// Driver Code
int main()
{
    // Initialize a structure
    struct candidate A[3]
        = { {1, 'A', { 98.5, 77, 89, 78.5 }},{2, 'B', { 98.5, 77, 89, 78.5 }},{3, 'C', { 98.5, 77, 89, 78.5 }} };

    // Function to display structure
    display(A);
    return 0;
}
