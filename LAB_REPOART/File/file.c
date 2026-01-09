#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("info_Obaidur.txt", "w");

    

    fprintf(fp, "Name       : MD:Obaidur Rahman Rubayet\n");
    fprintf(fp, "ID         : 2025100000417\n");
    fprintf(fp, "Gender     : M\n");
    fprintf(fp, "Blood Group: B+\n");
    fprintf(fp, "Department : CSE\n");
    fprintf(fp, "CGPA       : 3.69\n");

    fclose(fp);

    printf("File created and information stored successfully.\n");

    return 0;
}
