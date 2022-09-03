#include<iostream>
#include<cstring>
using namespace std;
int strcmp(char a[], char b[])
 {
     int i, j;
     for(i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
         if(a[i] < b[i]) {
             return -1;
         }
         if(a[i] > b[i]) {
             return 1;
         }
     }
     if(strlen(a) == strlen(b)) {
         return 0;
     }
     else if(strlen(a) < strlen(b)) {
         return -1;
     }
     else if(strlen(a) > strlen(b)) {
         return 1;
     }
 }
 int main()
 {
     char s1[1000];
     char s2[1000];
     cin.getline(s1,1000);
     cin.getline(s2,1000);
     cout<<strcmp(s1, s2);
     return 0;
 }
