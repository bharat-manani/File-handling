//#include <stdio.h>
//#include<string.h>
// int main(){
// 	//file create (file open)
// 	
// 	
// 	FILE* fp;
// fp = fopen("NameandRollnumber.txt","r");
//// printf("File created sucessfully"); 	
//
//// 	//writing inside file
//// 	 fputs("hey boy",(fp));
//// 	fputc('d',(fp))
//// 	fclose(fp);	
// 	
//// 	int Rollnumber;
//// 	char Name[20];
//// 	printf("Enter your Roll number: ");
//// 	scanf("%d",&Rollnumber);
//// 	
//// 	fprintf(fp,"ID : %d \n",Rollnumber);
//// 	
//// 	printf("\nEnter your name: ");
//// 	scanf("%s",Name);
//// 	fprintf(fp,"Name : %s",Name);
//// 	printf("File created sucessfully"); 
//
//
//
//
////if(fp==NULL){
////	printf("404 not found");
////}
//// 	char c;
//// 	
//// 	
//// 	
//// 	while((c = fgetc(fp))!=EOF){
//// 		printf("%c \n",c);
////	 }
////	 fclose(fp);	
//// 	return 0;  
//
//
//
//#define MAX_WORD_LENGTH 256
//
//int is_vowel(char ch) {
//    ch = tolower(ch); 
//    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
//}
//
//int main() {
//    FILE *fp = fopen("filename.txt", "r");
//    if (fp == NULL) {
//        printf("404 not found\n");
//        return 1; 
//    }
//
//    char line[256]; 
//    char vowels[MAX_WORD_LENGTH];
//    char consonants[MAX_WORD_LENGTH];
//
//    
//    while (fgets(line, sizeof(line), fp) != NULL) {
//        char *token = strtok(line, " \t\n"); 
//
//     
//        while (token != NULL) {
//            int vIndex = 0, cIndex = 0;
//            size_t len = strlen(token);
//            
//            
//            for (size_t i = 0; i < len; ++i) {
//                char ch = token[i];
//                if (isalpha(ch)) { 
//                    if (is_vowel(ch)) {
//                        vowels[vIndex++] = ch;
//                    } else {
//                        consonants[cIndex++] = ch;
//                    }
//                }
//            }
//            
//            
//            vowels[vIndex] = '\0';
//            consonants[cIndex] = '\0';
//
//           
//            printf("Word: %s\n", token);
//            printf("Vowels: %s\n", vowels);
//            printf("Consonants: %s\n", consonants);
//            printf("\n");
//
//            token = strtok(NULL, " \t\n");
//        }
//    }
//
//    fclose(fp);
//    return 0;
//}
//
//
////if(fp==NULL){
////	printf("404 not found");
////}
//// int arr[100];
//// 	
//// 	
//// 	
//// 	  while (fgets(arr, sizeof(arr), fp) != NULL){
//// 		printf("%s \n",arr);
////	 }
////	 fclose(fp);	
//// 	return 0; 
////
////
////
////                                                                                             
//// } 














#include<stdio.h>
struct dob{
	int day;
	char month[20];
	int year;
};
struct student{
	
	int id;
	char name[20];
	float per;
	struct dob birthdate;
};

int main(){
	
	struct student s1= {23432,"bharat",89.45};
	printf("ID: %d \n",s1.id);
	printf("Name: %s \n",s1.name);
	printf("percentage: %f \n",s1.per);
	printf("day of dateofbirth: %d \n",s1.d1.day);
	printf("month of dateofbirth: %s \n",s1.d1.month);
	printf("year of dateofbirth: %d \n",s1.d1.year);
	
		
	struct student s2= {567,"Sanjay",78.45};
	printf("ID: %d \n",s2.id);
	printf("Name: %s \n",s2.name);
	printf("percentage: %f \n",s2.per);
	
	
		
	struct student s3;
	
	printf("Enter ID: ");
	scanf(" %d",&s3.id);
	printf("Enter name: ");
	
	scanf("%s",&s3.name);
	printf("enter percentage: ");
	
	scanf(" %f",&s3.per);
	
		printf("ID: %d \n",s3.id);
	printf("Name: %s \n",s3.name);
	printf("percentage: %f \n",s3.per);
	return 0;
}





