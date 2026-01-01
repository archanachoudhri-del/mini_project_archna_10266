  #include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 50


void markAttendance(int attendance[], int n);
void displayAttendance(int attendance[], int n);
void countAttendance(int attendance[], int n);
void searchAttendance(int attendance[], int n, int roll);
void updateAttendance(int attendance[], int n, int roll);

int main() {
    int attendance[MAX_STUDENTS];
    int n, choice, roll;

    printf("===== Student Attendance Management System =====\n");
    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);

   
    for (int i = 0; i < n; i++) {
        attendance[i] = 0;
    }

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Mark Attendance\n");
        printf("2. Display Attendance\n");
        printf("3. Count Present/Absent\n");
        printf("4. Search Attendance by Roll Number\n");
        printf("5. Update Attendance\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                markAttendance(attendance, n);
                break;
            case 2:
                displayAttendance(attendance, n);
                break;
            case 3:
                countAttendance(attendance, n);
                break;
            case 4:
                printf("Enter roll number to search: ");
                scanf("%d", &roll);
                searchAttendance(attendance, n, roll);
                break;
            case 5:
                printf("Enter roll number to update: ");
                scanf("%d", &roll);
                updateAttendance(attendance, n, roll);
                break;
            case 6:
                printf("Exiting program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}


void markAttendance(int attendance[], int n) {
    printf("\nMark Attendance (0 = Absent, 1 = Present):\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }
}


void displayAttendance(int attendance[], int n) {
    printf("\nAttendance Record:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %s\n", i + 1, attendance[i] ? "Present" : "Absent");
    }
}
  void countAttendance(int attendance[], int n) {
    int present = 0, absent = 0;
    for (int i = 0; i < n; i++) {
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }
    printf("\nTotal Present: %d\n", present);
    printf("Total Absent: %d\n", absent);
}

 
void searchAttendance(int attendance[], int n, int roll) {
    if (roll < 1 || roll > n) {
        printf("Invalid roll number!\n");
        return;
    }
    printf("Student %d is %s\n", roll, attendance[roll - 1] ? "Present" : "Absent");
}

 
void updateAttendance(int attendance[], int n, int roll) {
    if (roll < 1 || roll > n) {
        printf("Invalid roll number!\n");
        return;
    }
    printf("Enter new status for Student %d (0 = Absent, 1 = Present): ", roll);
    scanf("%d", &attendance[roll - 1]);
    printf("Attendance updated successfully!\n");
}
//   ===== Student Attendance Management System =====
// Enter number of students (max 50): 5

// ===== MENU =====
// 1. Mark Attendance
// 2. Display Attendance
// 3. Count Present/Absent
// 4. Search Attendance by Roll Number
// 5. Update Attendance
// 6. Exit
// Enter your choice: 1

// Mark Attendance (0 = Absent, 1 = Present):
// Student 1: 1
// Student 2: 0
// Student 3: 1
// Student 4: 1
// Student 5: 0

// ===== MENU =====
// Enter your choice: 2

// Attendance Record:
// Student 1: Present
// Student 2: Absent
// Student 3: Present
// Student 4: Present
// Student 5: Absent

// ===== MENU =====
// Enter your choice: 3

// Total Present: 3
// Total Absent: 2

// ===== MENU =====
// Enter your choice: 4