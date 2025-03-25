#include <stdio.h>
#include <string.h>

struct patient {
    char name[100];
    int age;
    char gender[10];
    char mobile[11];
    char history[15];
    char date[15];
    char spec[25];
    char dateofappointment[15];
    char timeofappointment[15];
    char docname[25];
    char doccontact[11];
    char docspeciality[25];
    int id;
    int cfee;
    int no;
    int tfee;
    char tname[25];
    int mfee;
    char medname[25];
    char pstatus[10];
};

struct doctor {
    char name[20];
    char speciality[3];
    char availability[4];
    char contact[11];
};

int main() {
    int h,v,p,pp,ppp,no,pid,pd,c,status,total,choice,choi,id;
    int l;
    int z;
    int upinum;
    int flag = 1;
    int i;
    int y, x, num, a;
    char ans[3];
    int count = 2;
    int pass;
    int docflag = 1;
    char tans[4];
    char bol[3];
    char pay[4];
    int cash;
    int upi;
    int sum = 0;
    int dailycount = 2;
    int n;
    struct patient patients[100];
    int b,e,nu,f;
    int j;
    char answer[3];
    char tell[3];
    int counter = 6;
    struct doctor d[100];

    strcpy(patients[0].name, "Vijval Gupta");
    patients[0].age = 30;
    strcpy(patients[0].gender, "Male");
    strcpy(patients[0].mobile, "9876543210");
    strcpy(patients[0].history, "Diabetes");
    strcpy(patients[0].date, "2025-02-10");

    strcpy(patients[1].name, "Naman Mittal");
    patients[1].age = 25;
    strcpy(patients[1].gender, "Female");
    strcpy(patients[1].mobile, "9123456789");
    strcpy(patients[1].history, "Asthma");
    strcpy(patients[1].date, "2025-02-15");

    strcpy(d[0].name, "Dr. Pradeep");
    strcpy(d[0].speciality, "1");
    strcpy(d[0].availability, "yes");
    strcpy(d[0].contact, "1234567890");

    strcpy(d[1].name, "Dr. Anand");
    strcpy(d[1].speciality, "2");
    strcpy(d[1].availability, "yes");
    strcpy(d[1].contact, "9876543210");

    strcpy(d[2].name, "Dr. Taylor");
    strcpy(d[2].speciality, "3");
    strcpy(d[2].availability, "yes");
    strcpy(d[2].contact, "1122334455");

    strcpy(d[3].name, "Dr. Wilson");
    strcpy(d[3].speciality, "4");
    strcpy(d[3].availability, "yes");
    strcpy(d[3].contact, "2233445566");

    strcpy(d[4].name, "Dr. Adams");
    strcpy(d[4].speciality, "5");
    strcpy(d[4].availability, "yes");
    strcpy(d[4].contact, "3344556677");

    strcpy(d[5].name, "Dr. Hamza");
    strcpy(d[5].speciality, "6");
    strcpy(d[5].availability, "yes");
    strcpy(d[5].contact, "4455667788");


    printf("\n*********************************************************************\n");
    printf("*                                                                   *\n");
    printf("*                WELCOME TO HOSPITAL MANAGEMENT SYSTEM              *\n");
    printf("*                                                                   *\n");
    printf("*********************************************************************\n");

    for (j = 0; j < 3; j++) {
        printf("\nENTER PASSWORD : ");
        scanf("%d", &pass);

        if (pass == 911) {
            while (flag) {
                printf("\n1 FOR PATIENT MANAGER");
                printf("\n2 FOR DOCTOR MANAGER");
                printf("\n3 FOR APPOINTMENT RELATED");
                printf("\n4 TO ENTER PRICES FOR BILL");
                printf("\n5 FOR BILL");
                printf("\n6 FOR STATISTICS");
                printf("\n7 TO EXIT");
                printf("\n\nENTER YOUR CHOICE: ");
                scanf("%d", &z);

                if (z == 1) {
                    printf("\nPATIENT MANAGER \n ");
                    do {
                        printf("\n1 TO ADD");
                        printf("\n2 TO VIEW");
                        printf("\n3 TO DELETE");
                        printf("\n4 TO EDIT");
                        printf("\n5 TO GO BACK");
                        printf("\n\nENTER YOUR CHOICE: ");
                        scanf("%d", &y);

                        if (y == 1) {
                            printf("ENTER NUMBER OF PATIENTS TO ADD: ");
                            scanf("%d", &n);
                            for (i = 0; i < n; i++) {
                                printf("\nENTER DETAILS OF PATIENT %d\n", count + 1);
                                printf("-------------------------\n");
                                printf("ENTER NAME: ");
                                scanf(" %[^\n]s", patients[count].name);
                                printf("ENTER AGE: ");
                                scanf("%d", &patients[count].age);
                                printf("ENTER GENDER: ");
                                scanf("%s", patients[count].gender);
                                printf("ENTER MOBILE: ");
                                scanf("%s", patients[count].mobile);
                                printf("ENTER MEDICAL HISTORY: ");
                                scanf(" %[^\n]s", patients[count].history);
                                printf("ENTER DATE OF ADMISSION: ");
                                scanf("%s", patients[count].date);
                                count++;
                                dailycount++;
                            }
                        }
                        else if (y == 2) {
                            printf("ENTER PATIENT NUMBER TO VIEW: ");
                            scanf("%d", &x);
                            if (x > 0 && x <= count) {
                                printf("\nPATIENT DETAILS:\n");
                                printf("NAME: %s\n", patients[x - 1].name);
                                printf("AGE: %d\n", patients[x - 1].age);
                                printf("GENDER: %s\n", patients[x - 1].gender);
                                printf("MOBILE: %s\n", patients[x - 1].mobile);
                                printf("MEDICAL HISTORY: %s\n", patients[x - 1].history);
                                printf("ADMISSION DATE: %s\n", patients[x - 1].date);
                            } else {
                                printf("INVALID PATIENT NUMBER!\n");
                            }
                        }
                        else if (y == 3) {
                            printf("ENTER PATIENT NUMBER TO DELETE: ");
                            scanf("%d", &num);
                            if (num > 0 && num <= count) {
                                for (i = num - 1; i < count - 1; i++) {
                                    patients[i] = patients[i + 1];
                                }
                                count--;
                                printf("RECORD DELETED SUCCESSFULLY!\n");
                            } else {
                                printf("INVALID PATIENT NUMBER!\n");
                            }
                        }
                        else if (y == 4) {
                            printf("ENTER PATIENT NUMBER TO EDIT: ");
                            scanf("%d", &num);
                            if (num > 0 && num <= count) {
                                printf("\n1 TO EDIT ALL");
                                printf("\n2 TO EDIT NAME");
                                printf("\n3 TO EDIT AGE");
                                printf("\n4 TO EDIT GENDER");
                                printf("\n5 TO EDIT MOBILE");
                                printf("\n6 TO EDIT HISTORY");
                                printf("\n7 TO EDIT DATE");
                                printf("\nENTER CHOICE: ");
                                scanf("%d", &l);

                                printf("\nENTER NEW DETAILS:\n");
                                if (l == 1 || l == 2) {
                                    printf("ENTER NAME: ");
                                    scanf(" %[^\n]s", patients[num - 1].name);
                                }
                                if (l == 1 || l == 3) {
                                    printf("ENTER AGE: ");
                                    scanf("%d", &patients[num - 1].age);
                                }
                                if (l == 1 || l == 4) {
                                    printf("ENTER GENDER: ");
                                    scanf("%s", patients[num - 1].gender);
                                }
                                if (l == 1 || l == 5) {
                                    printf("ENTER MOBILE: ");
                                    scanf("%s", patients[num - 1].mobile);
                                }
                                if (l == 1 || l == 6) {
                                    printf("ENTER HISTORY: ");
                                    scanf(" %[^\n]s", patients[num - 1].history);
                                }
                                if (l == 1 || l == 7) {
                                    printf("ENTER DATE: ");
                                    scanf("%s", patients[num - 1].date);
                                }
                            }
                        }

                        printf("\nCONTINUE WITH PATIENT MANAGER? (yes/no): ");
                        scanf("%s", ans);
                    } while (strcmp(ans, "no") != 0 && strcmp(ans, "NO") != 0);
                }

                else if (z == 2) {
                    do {
                        printf("\n1 TO ADD");
                        printf("\n2 TO VIEW");
                        printf("\n3 TO DELETE");
                        printf("\n4 TO EDIT");
                        printf("\n5 TO GO BACK");
                        printf("\nENTER CHOICE: ");
                        scanf("%d", &f);

                        if (f == 1) {
                            printf("ENTER NUMBER OF DOCTORS TO ADD: ");
                            scanf("%d", &nu);
                            for (j = 0; j < nu; j++) {
                                printf("\nENTER DETAILS FOR DOCTOR %d:\n", counter + 1);
                                printf("ENTER NAME: ");
                                scanf("%s", d[counter].name);
                                printf("ENTER MOBILE: ");
                                scanf("%s", d[counter].contact);
                                printf("ENTER \n1 FOR CARDIOLOGY \n2 FOR ENT\n3 FOR DERMATOLOGY\n4 FOR ONCOLOGY\n5 FOR PEDIATRICS\n6 FOR PSYCHIATRIST\n");
                                printf("\nENTER DEPARTMENT OF DOCTOR : ");
                                scanf("%s", d[counter].speciality);
                                printf("AVAILABLE? (yes/no): ");
                                scanf("%s", d[counter].availability);
                                counter++;
                            }
                        }
                        else if (f == 2) {
                            printf("ENTER DOCTOR NUMBER TO VIEW: ");
                            scanf("%d", &b);
                            if (b > 0 && b <= counter) {
                                printf("\nDOCTOR DETAILS:\n");
                                printf("NAME: %s\n", d[b - 1].name);
                                printf("CONTACT: %s\n", d[b - 1].contact);
                                printf("DEPARTMENT NO. : %s\n", d[b - 1].speciality);
                                printf("AVAILABILITY: %s\n", d[b - 1].availability);
                            } else {
                                printf("INVALID DOCTOR NUMBER!\n");
                            }
                        }
                        else if (f == 3) {
                            printf("ENTER DOCTOR NUMBER TO DELETE: ");
                            scanf("%d", &e);
                            if (e > 0 && e <= counter) {
                                for (j = e - 1; j < counter - 1; j++) {
                                    d[j] = d[j + 1];
                                }
                                counter--;
                                printf("RECORD DELETED SUCCESSFULLY!\n");
                            } else {
                                printf("INVALID DOCTOR NUMBER!\n");
                            }
                        }
                        else if (f == 4) {
                            printf("ENTER DOCTOR NUMBER TO EDIT: ");
                            scanf("%d", &e);
                            if (e > 0 && e <= counter) {
                                printf("\n1 TO EDIT ALL");
                                printf("\n2 TO EDIT NAME");
                                printf("\n3 TO EDIT CONTACT");
                                printf("\n4 TO EDIT SPECIALITY");
                                printf("\n5 TO EDIT AVAILABILITY");
                                printf("\nENTER CHOICE: ");
                                scanf("%d", &a);

                                if (a == 1 || a == 2) {
                                    printf("ENTER NAME: ");
                                    scanf("%s", d[e - 1].name);
                                }
                                if (a == 1 || a == 3) {
                                    printf("ENTER CONTACT: ");
                                    scanf("%s", d[e - 1].contact);
                                }
                                if (a == 1 || a == 4) {
                                    printf("ENTER DEPARTMENT NO. : ");
                                    scanf("%s", d[e - 1].speciality);
                                }
                                if (a == 1 || a == 5) {
                                    printf("ENTER AVAILABILITY: ");
                                    scanf("%s", d[e - 1].availability);
                                }
                            }
                        }

                        printf("\nCONTINUE WITH DOCTOR MANAGER? (yes/no): ");
                        scanf("%s", answer);
                    } while (strcmp(answer, "no") != 0 && strcmp(answer, "NO") != 0);
                }

                else if (z == 3) {
                    printf("\n1 TO BOOK APPOINTMENT");
                    printf("\n2 TO VIEW APPOINTMENTS");
                    printf("\n3 TO EDIT APPOINTMENT");
                    printf("\n4 TO CANCEL APPOINTMENT");
                    printf("\nENTER CHOICE: ");
                    scanf("%d", &v);

                    if (v == 1) {
                        printf("ENTER PATIENT ID: ");
                        scanf("%d", &h);
                        printf("ENTER APPOINTMENT DATE: ");
                        scanf("%s", patients[h-1].dateofappointment);
                        printf("ENTER APPOINTMENT TIME: ");
                        scanf("%s", patients[h-1].timeofappointment);
                        printf("ENTER ISSUE\n1 FOR HEART RELATED \n2 FOR EAR,NOSE,THROAT RELATED \n3 FOR SKIN RELATED\n4 FOR CANCER/TUMOR RELATED \n5 FOR KIDS RELATED\n6 FOR MENTAL RELATED ISSUES\n ");
                        scanf("%s", tell);

                        docflag = 1;
                        for (int s = 0; s < counter; s++) {
                            if (strcmp(tell,d[s].speciality) == 0) {
                                if (strcmp(d[s].availability, "yes") == 0) {
                                    printf("\nAPPOINTMENT BOOKED SUCCESSFULLY!\n");
                                    printf("\nDOCTOR DETAILS:\n");
                                    printf("DOCTOR ID: %d\n", s+1);
                                    patients[h-1].id = s+1;
                                    printf("NAME: %s\n", d[s].name);
                                    strcpy(patients[h-1].docname, d[s].name);
                                    printf("CONTACT: %s\n", d[s].contact);
                                    strcpy(patients[h-1].doccontact, d[s].contact);
                                    printf("SPECIALITY: %s\n", d[s].speciality);
                                    strcpy(patients[h-1].docspeciality, d[s].speciality);
                                    strcpy(d[s].availability, "no");
                                    docflag = 0;
                                    break;
                                }
                            }
                        }
                        if (docflag == 1) {
                            printf("NO DOCTOR AVAILABLE!\n");
                        }
                    }
                    else if (v == 2) {
                        printf("ENTER PATIENT ID: ");
                        scanf("%d", &p);
                        printf("\nAPPOINTMENT DETAILS:\n");
                        printf("DATE: %s\n", patients[p-1].dateofappointment);
                        printf("TIME: %s\n", patients[p-1].timeofappointment);
                        printf("DOCTOR ID: %d\n", patients[p-1].id);
                        printf("DOCTOR NAME: %s\n", patients[p-1].docname);
                        printf("DOCTOR CONTACT: %s\n", patients[p-1].doccontact);
                        printf("SPECIALITY: %s\n", patients[p-1].docspeciality);
                    }
                    else if (v == 3) {
                        printf("ENTER PATIENT ID: ");
                        scanf("%d", &pp);
                        printf("\n1 TO EDIT ALL");
                        printf("\n2 TO EDIT DATE");
                        printf("\n3 TO EDIT TIME");
                        printf("\nENTER CHOICE: ");
                        scanf("%d", &h);

                        if (h == 1 || h == 2) {
                            printf("ENTER NEW DATE: ");
                            scanf("%s", patients[pp-1].dateofappointment);
                        }
                        if (h == 1 || h == 3) {
                            printf("ENTER NEW TIME: ");
                            scanf("%s", patients[pp-1].timeofappointment);
                        }
                    }
                    else if (v == 4) {
                        printf("ENTER PATIENT ID: ");
                        scanf("%d", &ppp);
                        printf("APPOINTMENT CANCELLED SUCCESSFULLY!\n");
                        strcpy(d[patients[ppp-1].id-1].availability, "yes");
                        strcpy(patients[ppp-1].dateofappointment, "");
                        strcpy(patients[ppp-1].timeofappointment, "");
                        patients[ppp-1].id = 0;
                        strcpy(patients[ppp-1].doccontact, "");
                        strcpy(patients[ppp-1].docspeciality, "");
                        strcpy(patients[ppp-1].docname, "");
                    }
                }

                else if (z == 4) {
                    printf("ENTER PATIENT ID: ");
                    scanf("%d", &pid);
                    printf("ENTER CONSULTATION FEES: ");
                    scanf("%d", &patients[pid-1].cfee);

                    printf("ANY TESTS? (yes/no): ");
                    scanf("%s", tans);
                    if (strcmp(tans, "yes") == 0) {
                        printf("ENTER NUMBER OF TESTS: ");
                        scanf("%d", &patients[pid-1].no);
                        for (int i = 0; i < patients[pid-1].no; i++)
                        {
                            printf("ENTER TEST NAME: ");
                            scanf("%s", patients[pid-1].tname);
                            printf("ENTER TEST FEE: ");
                            scanf("%d", &patients[pid-1].tfee);
                        }

                    } else {
                        patients[pid-1].no = 0;
                        patients[pid-1].tfee = 0;
                    }

                        printf("ENTER MEDICATION NAME: ");
                        scanf("%s", patients[pid-1].medname);
                        printf("ENTER MEDICATION PRICE: ");
                        scanf("%d", &patients[pid-1].mfee);


                }

                else if (z == 5) {
                    printf("ENTER PATIENT ID: ");
                    scanf("%d", &pd);
                    printf("\n                                     VIJVAL HOSPITALS                                         \n");
                    printf("                                           BILL                                               \n");
                    printf("------------------------------------------------------------------------------------------------\n");
                    printf("PATIENT NAME: %s\n", patients[pd-1].name);
                    printf("DOCTOR NAME: %s\n", patients[pd-1].docname);
                    printf("CONSULTATION FEES: Rs. %d\n", patients[pd-1].cfee);

                    if (patients[pd-1].no > 0) {
                        printf("\nTESTS:\n");
                        printf("%-30s Rs. %d\n", patients[pd-1].tname, patients[pd-1].tfee);
                    }

                    printf("\nMEDICATIONS:\n");
                    printf("%-30s Rs. %d\n", patients[pd-1].medname, patients[pd-1].mfee);

                    total = patients[pd-1].cfee + patients[pd-1].tfee + patients[pd-1].mfee;
                    printf("\nTOTAL AMOUNT: Rs. %d\n", total);
                    printf("------------------------------------------------------------------------------------------------\n");

                    printf("\n1 FOR PAYMENT\n2 FOR PAYMENT STATUS\nENTER CHOICE: ");
                    scanf("%d", &c);

                    if (c == 1) {
                        printf("PAYMENT METHOD (cash/upi): ");
                        scanf("%s", pay);

                        if (strcmp(pay, "cash") == 0) {
                            printf("ENTER CASH AMOUNT: ");
                            scanf("%d", &cash);
                            if (cash >= total) {
                                printf("PAYMENT SUCCESSFUL!\n");
                                if (cash > total) {
                                    printf("CHANGE: Rs. %d\n", cash - total);
                                }
                                strcpy(patients[pd-1].pstatus, "PAID");
                                sum += total;
                            } else {
                                printf("INSUFFICIENT AMOUNT!\n");
                                strcpy(patients[pd-1].pstatus, "UNPAID");
                            }
                        }
                        else if (strcmp(pay, "upi") == 0) {
                            printf("ENTER UPI ID: ");
                            scanf("%d", &upinum);
                            printf("ENTER AMOUNT: ");
                            scanf("%d", &upi);
                            if (upi >= total) {
                                printf("PAYMENT SUCCESSFUL!\n");
                                if (upi > total) {
                                    printf("EXCESS PAID: Rs. %d (Collect from counter)\n", upi - total);
                                }
                                strcpy(patients[pd-1].pstatus, "PAID");
                                sum += total;
                            } else {
                                printf("INSUFFICIENT AMOUNT!\n");
                                strcpy(patients[pd-1].pstatus, "UNPAID");
                            }
                        }
                    }
                    else if (c == 2) {
                        printf("PAYMENT STATUS: %s\n", patients[pd-1].pstatus);
                    }
                }

                else if (z == 6) {
                    printf("\nHOSPITAL STATISTICS\n");
                    printf("-------------------\n");
                    printf("TOTAL PATIENTS: %d\n", dailycount);
                    printf("TOTAL REVENUE: Rs. %d\n", sum);
                }

                else if (z == 7) {
                    flag = 0;
                    printf("\nEXITING HOSPITAL MANAGEMENT SYSTEM...\n");
                    printf("THANK YOU FOR USING OUR SERVICE!\n");
                    printf("\nSTAY HEALTHY!\n");
                }
            }
            break;
        }
        else {
            printf("INVALID PASSWORD!\n");
            if (j < 2) {
                printf("PLEASE TRY AGAIN\n");
            } else {
                printf("TOO MANY ATTEMPTS \n\nACCESS DENIED!!!\n");
            }
        }
    }
    return 0;
}