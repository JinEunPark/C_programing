#include <grp.h>
#include <printf.h>
#include <stdio.h>
int main() {

    struct group *grp;
    int n;

    grp = getgrnam("grp1");
    printf("Group Name : %s \n", grp->gr_name);
    printf("GID : %d\n", (int) grp->gr_gid);

    n = 0;
    printf("Members:");
    while (grp->gr_mem[n] != NULL)
        printf("%s ,", grp->gr_mem[n++]);
    printf("\n");
}
//
// Created by 박진은 on 2022/10/30.
//
