#include <stdio.h>

int main() {
    char incident_id[20], analyst_name[50];
    int affected_systems;
    int recovery_cost_per_system, total_recovery_cost;
    float downtime;

    printf("Enter Incident ID: ");
    scanf("%s", incident_id);

    printf("Enter Analyst Name: ");
    scanf(" %s", analyst_name);

    printf("Enter Number of Affected Systems: ");
    scanf("%d", &affected_systems);

    printf("Enter Estimated Recovery Cost per System: ");
    scanf("%d", &recovery_cost_per_system);

    printf("Enter Downtime (in hours): ");
    scanf("%f", &downtime);

    total_recovery_cost = affected_systems * recovery_cost_per_system;

    printf("\n------------------------------------\n");
    printf("     SECURITY INCIDENT REPORT\n");
    printf("------------------------------------\n");
    printf("Incident ID\t:\t%s\n", incident_id);
    printf("Analyst\t\t:\t%s\n", analyst_name);
    printf("Affected Systems:\t%d\n", affected_systems);
    printf("Recovery Cost\t:\t%d\n", recovery_cost_per_system);
    printf("Total Cost\t:\t%d\n", total_recovery_cost);
    printf("Downtime\t:\t%.2f hours\n", downtime);

    return 0;
}
