#include <stdio.h>

int main() {
    char student_name[50], student_id[20];
    int completed_labs, total_labs;
    float quiz_marks, assignment_marks, project_marks;
    float lab_completion_percentage, total_academic_score;

    printf("Enter Student Name: ");
    scanf(" %s", student_name);

    printf("Enter Student ID: ");
    scanf("%s", student_id);

    printf("Enter Completed Labs: ");
    scanf("%d", &completed_labs);

    printf("Enter Total Labs: ");
    scanf("%d", &total_labs);

    printf("Enter Quiz Marks: ");
    scanf("%f", &quiz_marks);

    printf("Enter Assignment Marks: ");
    scanf("%f", &assignment_marks);

    printf("Enter Project Marks: ");
    scanf("%f", &project_marks);

    lab_completion_percentage = ((float)completed_labs / total_labs) * 100;
    total_academic_score = quiz_marks + assignment_marks + project_marks;

    printf("\n---------------------------------------\n");
    printf("\tSTUDENT PERFORMANCE REPORT\n");
    printf("---------------------------------------\n");
    printf("Student Name\t\t:\t%s\n", student_name);
    printf("Student ID\t\t:\t%s\n", student_id);
    printf("Lab Completion\t\t:\t%.2f%%\n", lab_completion_percentage);
    printf("Total Academic Score\t:\t%.2f\n", total_academic_score);
    

    return 0;
}
