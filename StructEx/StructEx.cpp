#include<stdio.h>
#include <string.h>

struct staff {
    // declare members of the structure staff
    char name[40]{};
    char role[10]{};
    int age{};
    float salary{};
};

int main() {
    // declare variables of type staff
    struct staff staff_1 = { "Jane Doe", "Admin", 20, 4000.00 };
    strcpy_s(staff_1.role,sizeof(staff_1.role), "Director" );

    // print the details of the staff staff_1;
    printf("Details of staff 1 :\n");
    printf("\tName : %s\n", staff_1.name);
    printf("\tAge : %d\n", staff_1.age);
    printf("\tRole : %s\n", staff_1.role);

    return 0;
}
