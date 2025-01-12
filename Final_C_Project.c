#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_VOTERS 1000 // maximum number of voters
#define NUM_CANDIDATES 3 // number of candidates
int divyam=0 ,shloka=0 ,shreyas=0, pranav=0, moiz=0, rudra=0, siya=0, vidhi=0, dhyani=0,aarya=0
,aarav=0,abhinav=0,akash=0,aman=0,amaya=0,aditi=0,alia=0,
ananya=0,ayush=0 , ashok=0,
ansh=0,dhruv=0,deepak=0,darsh=0,avani=0,asha=0,ashmita=0,aditya=0,arnav=0,bhargav=0,karthik=
0,gagan=0,dheeraj=0,sanjana=0,nitya=0,navya=0,
arav=0,anshul=0,anmol=0,ashish=0,atul=0,arjun=0,akshara=0,akanksha=0,aadya=0;
struct Number {
 int value;
 int entered;
 int numbers;
 };
void main()
{
 login();
}
//return admin
void login();
void login()
{
int first;
 here:
 pattern();
 printf("\n\nWelcome To SBMP Voting Portal. \n\n");
 printf("Press 1 For Admin. \n");
 printf("Press 2 For Student. \n");
 printf("Enter Here : ");
 scanf("%d",&first);
 system("cls");
 switch(first)
 {
 case 1:
 admin();
 break;
 case 2:
 students();
 break;
 default:
 printf("Invalid Input.\n\n");
 goto here;
 }
}
//For Admin Login.
void admin();
void admin()
{
 char i[100]="pass@123";
 char j[100];
 int department, exit,z;
 pass:
 system("cls");
 printf("Press 1 To Login.\n");
 printf("Press 0 To Exit.\n");
 printf("Enter Here : ");
 scanf("%d",&exit);
 switch (exit)
 {
 case 1:
 again:
 system("cls");
 printf("Enter Password To Login: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("You Have Logged In Successfully !!!\n\n");
 invaliddepart:
 printf("To View Results:- \n");
 printf("Press 1 For Computer Engineering Department.\n");
 printf("Press 2 For Mechanical Engineering Department.\n");
 printf("Press 3 For I.T Department.\n");
 printf("Press 4 To Exit.\n");
 scanf("%d",&department);
 printf("Enter Here : ");
 system("cls");
 switch (department)
 {
 case 1:
 CSE();//CSE function
 break;
 case 2:
 Mech();//Mech function
 break;
 case 3:
 IT();//IT function
 break;
 case 4:
 main();
 break;
 default:
 printf("Invalid Input !!\n\n");
 printf("Enter Again.\n\n");
 goto invaliddepart;
 }
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n");
 printf("Enter PassWord Again.\n\n");
 printf("Press 1 to enter password again:\n");
 printf("Press 2 to exit:\n");
 printf("Enter Here : ");
 scanf("%d",&z);
 switch (z)
 {
 again1:
 case 1:
 goto again;
 break;
 case 2:
 goto pass;
 system("cls");
 break;
 default:
 printf("Error !!");
 goto again1;
 //goto pass;
 }
 case 0:
 system("cls");
 main();
 break;
 default:
 printf("");
 //goto pass1;
 }
}
}
//For CSE Department.
void CSE();
void CSE()
{
 int year, division, key;
 char i[100]="pass@123";
 char j[100];
 a:
 printf("Computer Engineering Department:-\n\n");
 printf("Press 1 For 1st Year.\n");
 printf("Press 2 For 2nd Year.\n");
 printf("Press 3 For 3rd Year.\n");
 printf("Press 4 To Exit.\n\n\n");
 printf("Enter Here : ");
 scanf("%d",&year);
 system("cls");
 switch (year)
 {
 case 1:// 1st Year CSE div A, B.
 Div1:
 printf("For 1st Year:-\n\n");
 printf("Press 1 For Division A.\n");
 printf("Press 2 For Division B.\n");
 printf("Press 3 To Exit And Return To Previous Screen.\n\n\n");
 printf("Enter Here : ");
 scanf("%d",&division);
 system("cls");
 switch (division)
 {
 case 1://div A
 pass0:
 printf("CSE 1st Year Div A.");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("1st Year Division A:-\n\n");
 printf("Results For CR:- \n");
 printf("Aarav Singh Votes = %d\n",aarav);
 printf("Aarya Patel Votes = %d\n",aarya);
 printf("Abhinav Rao Votes = %d\n\n",abhinav);
 if(aarav>aarya && aarav>abhinav)
 {
 printf("Aarav Singh Is Elected As CR With %d Votes.\n\n\n",aarav);
 }
 else if(aarya>aarav && aarya>abhinav)
 {
 printf("Aarya Patel Is Elected As CR With %d Votes.\n\n\n",aarya);
 }
 else if(abhinav>aarav && abhinav>aarya)
 {
 printf("Abhinav Rao Is Elected As CR With %d Votes.\n\n\n",abhinav);
 }
 else if(aarya==abhinav==aarav)
 {
 printf("There Is A Tie Between Aarav Singh With %d Votes, Aarya Patel With %d Votes AndAbhinav Rao With %d Votes.\n\n\n",aarav,aarya,abhinav);
 }
 else if(aarav==abhinav)
 {
 printf("There Is A Tie Between Aarav Singh With %d Votes And Abhinav Rao With %dVotes.\n\n\n",aarav,abhinav);
 }
 else if(aarya==abhinav)
 {
 printf("There Is A Tie Between Aarya Patel With %d Votes And Abhinav Rao With %dVotes.\n\n\n",aarya,abhinav);
 }
 else if(aarav==aarya)
 {
 printf("There Is A Tie Between Aarav Singh With %d Votes And Aarya Patel With %dVotes.\n\n\n",aarav,aarya);
 }
 printf("Results For SCR:- \n");
 printf("Akash Sharma Votes = %d\n",akash);
 printf("Aman Verma Votes = %d\n",aman);
 printf("Amaya Gupta Votes = %d\n\n",amaya);
 if(akash>aman && akash>amaya)
 {
 printf("Akash Sharma Is Elected As SCR With %d Votes.\n\n\n",akash);
 }
 else if(aman>akash && aman>amaya)
 {
 printf("Aman Verma Is Elected As SCR With %d Votes.\n\n\n",aman);
 }
 else if(amaya>akash && amaya>aman)
 {
 printf("Amaya Gupta Is Elected As SCR With %d Votes.\n\n\n",amaya);
 }
 else if(akash==aman==amaya)
 {
 printf("There Is A Tie Between Akash Sharma With %d Votes, Aman Verma With %d VotesAnd Amaya Gupta With %d Votes.\n\n\n",akash,aman,amaya);
 }
 else if(akash==amaya)
 {
 printf("There Is A Tie Between Akash Sharma With %d Votes And Amaya Gupta With %dVotes.\n\n\n",aarav,abhinav);
 }
 else if(aman==amaya)
 {
 printf("There Is A Tie Between Aman Verma With %d Votes And Amaya Gupta With %dVotes.\n\n\n",aarya,abhinav);
 }
 else if(aman==akash)
 {
 printf("There Is A Tie Between Aman Verma With %d Votes And Akash Sharma With %dVotes.\n\n\n",aman,akash);
 }
 printf("Results For LR:- \n");
 printf("Aditi Desai Votes = %d\n",aditi);
 printf("Alia Chatterjee Votes = %d\n",alia);
 printf("Ananya Nair Votes = %d\n\n",ananya);
 if(aditi>alia && aditi>ananya)
 {
 printf("Aditi Desai Is Elected As LR With %d Votes.\n\n\n",aditi);
 }
 else if(alia>aditi && alia>amaya)
 {
 printf("Alia Chatterjee Is Elected As LR With %d Votes.\n\n\n",alia);
 }
 else if(ananya>aditi && ananya>alia)
 {
 printf("Ananya Nair Is Elected As LR With %d Votes.\n\n\n",ananya);
 }
 else if(aditi==alia==ananya)
 {
 printf("There Is A Tie Between Aditi Desai With %d Votes,Alia Chatterjee With %d Votes AndAnanya Nair With %d Votes.\n\n\n",aditi,alia,ananya);
 }
 else if(aditi==ananya)
 {
 printf("There Is A Tie Between Aditi Desai With %d Votes And Ananya Nair With %dVotes.\n\n\n",aditi,ananya);
 }
 else if(alia==ananya)
 {
 printf("There Is A Tie Between Alia Chatterjee With %d Votes And Ananya Nair With %dVotes.\n\n\n",alia,ananya);
 }
 else if(alia==aditi)
 {
 printf("There Is A Tie Between Alia Chatterjee With %d Votes And Aditi Desai With %dVotes.\n\n\n",alia,aditi);
 }
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass0;
 }
 break;
 case 2://div B
 pass1:
 printf("CSE 1st Year Div B.");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("1st Year Division B:-\n\n");
 printf("Results For CR:- \n");
 printf("Divyam Sanghvi Votes = %d\n",divyam);
 printf("Shloka Shetiya Votes = %d\n",shloka);
 printf("Shreyas Vapiwala Votes = %d\n\n",shreyas);
 if(divyam>shloka && divyam>shreyas)
 {
 printf("Divyam Sanghvi Is Elected As CR With %d Votes.\n\n\n",divyam);
 }
 else if(shloka>divyam && shloka>shreyas)
 {
 printf("Shloka Shetiya Is Elected As CR With %d Votes.\n\n\n",shloka);
 }
 else if(shreyas>divyam && shreyas>shloka)
 {
 printf("Shreyas Vapiwala Is Elected As CR With %d Votes.\n\n\n",shreyas);
 }
 else if(divyam==shloka==shreyas)
 {
 printf("There Is A Tie Between Divyam Sanghvi With %d Votes,Shloka Shetiya With %d VotesAnd Shreyas Vapiwala With %d Votes.\n\n\n",divyam,shloka,shreyas);
 }
 else if(divyam==shreyas)
 {
 printf("There Is A Tie Between Divyam Sanghvi With %d Votes And Shreyas VapiwalaWith %dVotes.\n\n\n",divyam,shreyas);
 }
 else if(shloka==shreyas)
 {
 printf("There Is A Tie Between Shloka Shetiya With %d Votes And Shreyas Vapiwala With %dVotes.\n\n\n",shloka,shreyas);
 }
 else if(divyam==shloka)
 {
 printf("There Is A Tie Between Divyam Sanghvi With %d Votes And Shloka Shetiya With %dVotes.\n\n\n",divyam,shloka);
 }
 printf("Results For SCR:- \n");
 printf("Pranav Adigare Votes = %d\n",pranav);
 printf("Moiz Bora Votes = %d\n",moiz);
 printf("Rudra Parmar Votes = %d\n\n",rudra);
 if(pranav>moiz && pranav>moiz)
 {
 printf("Pranav Adigare Is Elected As SCR With %d Votes.\n\n\n",pranav);
 }
 else if(moiz>pranav && moiz>rudra)
 {
 printf("Moiz Bora Is Elected As SCR With %d Votes.\n\n\n",moiz);
 }
 else if(rudra>pranav && rudra>moiz)
 {
 printf("Rudra Parmar Is Elected As SCR With %d Votes.\n\n\n",rudra);
 }
 else if(pranav==moiz==rudra)
 {
 printf("There Is A Tie Between Pranav Adigare With %d Votes,Moiz Bora With %d Votes AndRudra Parmar With %d Votes.\n\n\n",pranav,moiz,rudra);
 }
 else if(pranav==rudra)
 {
 printf("There Is A Tie Between Pranav Adigare With %d Votes And Rudra Parmar With %dVotes.\n\n\n",pranav,rudra);
 }
 else if(moiz==rudra)
 {
 printf("There Is A Tie Between Moiz Bora With %d Votes And Rudra Parmar With %dVotes.\n\n\n",moiz,rudra);
 }
 else if(pranav==moiz)
 {
 printf("There Is A Tie Between Pranav Adigare With %d Votes And Moiz Bora With %dVotes\n\n\n",pranav,moiz);
 }
 printf("Results For LR:- \n");
 printf("Siya Bhagat Votes = %d\n",siya);
 printf("Vidhi Shah Votes = %d\n",vidhi);
 printf("Dhyani Sanghvi Votes = %d\n\n",dhyani);
 if(siya>vidhi && siya>dhyani)
 {
 printf("Siya Bhagat Is Elected As SCR With %d Votes.\n\n\n",siya);
 }
 else if(vidhi>siya && vidhi>dhyani)
 {
 printf("Vidhi Shah Is Elected As SCR With %d Votes.\n\n\n",vidhi);
 }
 else if(dhyani>siya && dhyani>vidhi)
 {
 printf("Dhyani Sanghvi Is Elected As SCR With %d Votes.\n\n\n",dhyani);
 }
 else if(siya==vidhi==dhyani)
 {
 printf("There Is A Tie Between Siya Bhagat With %d Votes,Vidhi Shah With %d Votes AndDhyani Sanghvi With %d Votes.\n\n\n",siya,vidhi,dhyani);
 }
 else if(siya==dhyani)
 {
 printf("There Is A Tie Between Siya Bhagat With %d Votes And Dhyani Sanghvi With %dVotes.\n\n\n",siya,dhyani);
 }
 else if(vidhi==dhyani)
 {
 printf("There Is A Tie Between Vidhi Shah With %d Votes And Dhyani Sanghvi With %dVotes.\n\n\n",vidhi,dhyani);
 }
 else if(vidhi==siya)
 {
 printf("There Is A Tie Between Vidhi Shah With %d Votes And Siya Bhagat With %dVotes.\n\n\n",vidhi,siya);
 }
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass1;
 }
 break;
 case 3:
 goto a;
 break;
 default:
 printf("Invalid Input\n\n");
 goto Div1;
 }
 break;
 case 2:// 2nd Year CSE div A, B.
 Div2:
 printf("For 2nd Year:-\n\n");
 printf("Press 1 For Division A.\n");
 printf("Press 2 For Division B.\n");
 printf("Press 3 To Exit And Return To Previous Screen.\n\n\n");
 printf("Enter Here : ");
 scanf("%d",&division);
 system("cls");
 switch (division)
 {
 case 1://div A
 pass2:
 printf("CSE 2nd Year Div A.");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("2nd Year Division A:-\n\n");
 printf("Results For CR:- \n");
 printf("Ayush Mehra Votes = %d\n",ayush);
 printf("Ashok Kapoor Votes = %d\n",ashok);
 printf("Ansh Mehta Votes = %d\n\n\n\n",ansh);
 printf("Results For SCR:- \n");
 printf("Dhruv Shah Votes = %d\n",dhruv);
 printf("Deepak Agarwal Votes = %d\n",deepak);
 printf("Darsh Kaur Gupta Votes = %d\n\n\n\n",darsh);
 printf("Results For LR:- \n");
 printf("Avani Kulkarni Votes = %d\n",avani);
 printf("Asha Srinivasan Votes = %d\n",asha);
 printf("Asmita Shah Votes = %d\n\n\n\n",ashmita);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass2;
 }
 break;
 case 2://div B
 pass3:
 printf("2nd Year Division B.");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("2nd Year Division B:-\n\n");
 printf("Results For CR:- \n");
 printf("Aditya Kumar Votes = %d\n",aditya);
 printf("Arnav Gupta Votes = %d\n",arnav);
 printf("Bhargav Reddy Votes = %d\n\n\n\n",bhargav);
 printf("Results For SCR:- \n");
 printf("Karthik Nair Votes = %d\n",karthik);
 printf("Gagan Verma Votes = %d\n",gagan);
 printf("Dheeraj Singh Votes = %d\n\n\n\n",dheeraj);
 printf("Results For LR:- \n");
 printf("Sanjana Reddy Votes = %d\n",sanjana);
 printf("Nitya Patel Votes = %d\n",nitya);
 printf("Navya Menon Votes = %d\n\n\n\n",navya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass3;
 }
 break;
 case 3:
 goto a;
 default:
 printf("Invalid Input\n\n");
 goto Div2;
 }
 break;
 case 3:// 3rd Year CSE div A, B.
 Div3:
 printf("For 3rd Year:-\n\n");
 printf("Press 1 For Division A.\n");
 printf("Press 2 For Division B.\n");
 printf("Press 3 To Exit And Return To Previous Screen.\n\n\n");
 printf("Enter Here : ");
 scanf("%d",&division);
 system("cls");
 switch (division)
 {
 case 1://div A
 pass4:
 printf("3rd Year Division A.");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("3rd Year Division A:-\n\n");
 printf("Results For CR:- \n");
 printf("Arav Chakraborty Votes = %d\n",arav);
 printf("Anshul Patel Votes = %d\n",anshul);
 printf("Anmol Das Votes = %d\n\n\n\n",anmol);
 printf("Results For SCR:- \n");
 printf("Ashish Singh Votes = %d\n",ashish);
 printf("Atul Menon Votes = %d\n",atul);
 printf("Arjun Kumar Gupta Votes = %d\n\n\n\n",arjun);
 printf("Results For LR:- \n");
 printf("Akshara Reddy Votes = %d\n",akshara);
 printf("Akanksha Singh Votes = %d\n",akanksha);
 printf("Aadya Sharma Votes = %d\n\n\n\n",aadya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass4;
 }
 break;
 case 2://div B
 pass5:
 printf("3rd Year Division B.");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 system("cls");
 printf("3rd Year Division B:-\n\n");
 printf("Results For CR:- \n");
 printf("Aditya Kumar Votes = %d\n",aditya);
 printf("Arnav Gupta Votes = %d\n",arnav);
 printf("Bhargav Reddy Votes = %d\n\n\n\n",bhargav);
 printf("Results For SCR:- \n");
 printf("Karthik Nair Votes = %d\n",karthik);
 printf("Gagan Verma Votes = %d\n",gagan);
 printf("Dheeraj Singh Votes = %d\n\n\n\n",dheeraj);
 printf("Results For LR:- \n");
 printf("Sanjana Reddy Votes = %d\n",sanjana);
 printf("Nitya Patel Votes = %d\n",nitya);
 printf("Navya Menon Votes = %d\n\n\n\n",navya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass5;
 }
 break;
 case 3:
 goto a;
 default:
 printf("Invalid Input\n\n");
 goto Div3;
 }
 break;
 case 4:
 main();
 default:
 printf("Invalid Input !!\n\n");
 main();
 }
 system("cls");
 login();
}
//For Mech.
void Mech();
void Mech()
{
 int year, key;
 char i[100]="pass@123";
 char j[100];
 printf("Mechanical Engineering Department:-\n\n");
 printf("Press 1 For 1st Year.\n");
 printf("Press 2 For 2nd Year.\n");
 printf("Press 3 For 3rd Year.\n");
 printf("Press 4 To Exit.\n\n\n");
 printf("Enter Here : ");
 scanf("%d",&year);
 system("cls");
 switch (year)
 {
 case 1:
 pass:
 printf("Mechanical 1st Year !!");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("1st Year Mechanical:-\n\n");
 printf("Results For CR:- \n");
 printf("Aarav Singh Votes = %d\n",aarav);
 printf("Aarya Patel Votes = %d\n",aarya);
 printf("Abhinav Rao Votes = %d\n\n\n\n",abhinav);
 printf("Results For SCR:- \n");
 printf("Akash Sharma Votes = %d\n",akash);
 printf("Aman Verma Votes = %d\n",aman);
 printf("Amaya Gupta Votes = %d\n\n\n\n",amaya);
 printf("Results For LR:- \n");
 printf("Aditi Desai Votes = %d\n",aditi);
 printf("Alia Chatterjee Votes = %d\n",alia);
 printf("Ananya Nair Votes = %d\n\n\n\n",ananya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass;
 }
 break;
 case 2:
 pass1:
 printf("Mechanical 2nd Year !!");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("2nd Year Mechanical:-\n\n");
 printf("Results For CR:- \n");
 printf("Aarav Singh Votes = %d\n",aarav);
 printf("Aarya Patel Votes = %d\n",aarya);
 printf("Abhinav Rao Votes = %d\n\n\n\n",abhinav);
 printf("Results For SCR:- \n");
 printf("Akash Sharma Votes = %d\n",akash);
 printf("Aman Verma Votes = %d\n",aman);
 printf("Amaya Gupta Votes = %d\n\n\n\n",amaya);
 printf("Results For LR:- \n");
 printf("Aditi Desai Votes = %d\n",aditi);
 printf("Alia Chatterjee Votes = %d\n",alia);
 printf("Ananya Nair Votes = %d\n\n\n\n",ananya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass1;
 }
 break;
 case 3:
 pass2:
 printf("Mechanical 3rd Year !!");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("3rd Year Mechanical:-\n\n");
 printf("Results For CR:- \n");
 printf("Aarav Singh Votes = %d\n",aarav);
 printf("Aarya Patel Votes = %d\n",aarya);
 printf("Abhinav Rao Votes = %d\n\n\n\n",abhinav);
 printf("Results For SCR:- \n");
 printf("Akash Sharma Votes = %d\n",akash);
 printf("Aman Verma Votes = %d\n",aman);
 printf("Amaya Gupta Votes = %d\n\n\n\n",amaya);
 printf("Results For LR:- \n");
 printf("Aditi Desai Votes = %d\n",aditi);
 printf("Alia Chatterjee Votes = %d\n",alia);
 printf("Ananya Nair Votes = %d\n\n\n\n",ananya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass2;
 }
 break;
 case 4:
 main();
 break;
 default:
 printf("InValid Input !!\n\n");
 main();
 }
 system("cls");
 main();
}
//For IT.
void IT();
void IT()
{
 int year, key;
 char i[100]="pass@123";
 char j[100];
 printf("IT Department:-\n\n");
 printf("Press 1 For 1st Year.\n");
 printf("Press 2 For 2nd Year.\n");
 printf("Press 3 For 3rd Year.\n");
 printf("Press 4 To Exit.\n\n\n");
 printf("Enter Here : ");
 scanf("%d",&year);
 system("cls");
 switch (year)
 {
 case 1:
 pass:
 printf("IT 1st Year !!");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("IT 1st Year :-\n\n");
 printf("Results For CR:- \n");
 printf("Aarav Singh Votes = %d\n",aarav);
 printf("Aarya Patel Votes = %d\n",aarya);
 printf("Abhinav Rao Votes = %d\n\n\n\n",abhinav);
 printf("Results For SCR:- \n");
 printf("Akash Sharma Votes = %d\n",akash);
 printf("Aman Verma Votes = %d\n",aman);
 printf("Amaya Gupta Votes = %d\n\n\n\n",amaya);
 printf("Results For LR:- \n");
 printf("Aditi Desai Votes = %d\n",aditi);
 printf("Alia Chatterjee Votes = %d\n",alia);
 printf("Ananya Nair Votes = %d\n\n\n\n",ananya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass;
 }
 break;
 case 2:
 pass1:
 printf("IT 2nd Year !!");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("IT 2nd Year :-\n\n");
 printf("Results For CR:- \n");
 printf("Aarav Singh Votes = %d\n",aarav);
 printf("Aarya Patel Votes = %d\n",aarya);
 printf("Abhinav Rao Votes = %d\n\n\n\n",abhinav);
 printf("Results For SCR:- \n");
 printf("Akash Sharma Votes = %d\n",akash);
 printf("Aman Verma Votes = %d\n",aman);
 printf("Amaya Gupta Votes = %d\n\n\n\n",amaya);
 printf("Results For LR:- \n");
 printf("Aditi Desai Votes = %d\n",aditi);
 printf("Alia Chatterjee Votes = %d\n",alia);
 printf("Ananya Nair Votes = %d\n\n\n\n",ananya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass1;
 }
 break;
 case 3:
 pass2:
 printf("IT 3rd Year !!");
 printf("\n\n");
 printf("Enter Password To See Results: ");
 scanf("%s",j);
 if(strcmp(j, i) == 0)
 {
 system("cls");
 printf("IT 3rd Year :-\n\n");
 printf("Results For CR:- \n");
 printf("Aarav Singh Votes = %d\n",aarav);
 printf("Aarya Patel Votes = %d\n",aarya);
 printf("Abhinav Rao Votes = %d\n\n\n\n",abhinav);
 printf("Results For SCR:- \n");
 printf("Akash Sharma Votes = %d\n",akash);
 printf("Aman Verma Votes = %d\n",aman);
 printf("Amaya Gupta Votes = %d\n\n\n\n",amaya);
 printf("Results For LR:- \n");
 printf("Aditi Desai Votes = %d\n",aditi);
 printf("Alia Chatterjee Votes = %d\n",alia);
 printf("Ananya Nair Votes = %d\n\n\n\n",ananya);
 printf("Enter Any Number (0-9) To Continue");
 scanf("%d",&key);
 }
 else
 {
 system("cls");
 printf("Password Is Incorrect.\n\n");
 printf("Enter PassWord Again.\n\n");
 goto pass2;
 }
 break;
 case 4:
 main();
 break;
 default:
 printf("InValid Input !!\n\n");
 main();
 }
 system("cls");
 return(main);
 //main();
}
void students();
void students()
{
 int department, tell,z;
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num, mech;
 case4:
 system("cls");
 printf("Select Department.\n\n");
 printf("Press 1 For Computer Engineering Department.\n");
 printf("Press 2 For Mechanical Engineering Department.\n");
 printf("Press 3 For I.T Department.\n");
 printf("Press 4 To Exit.\n\n");
 printf("Enter Here: ");
 scanf("%d",&a);
 system("cls");
 switch(a)
 {
 case 1://CSE Department..
 previous:
 printf("Computer Engineering Department:-\n\n");
 printf("Press 1 For 1st Year.\n");
 printf("Press 2 For 2nd Year.\n");
 printf("Press 3 For 3rd Year.\n");
 printf("Press 4 To Exit And Return To Previous Screen.\n\n");
 printf("Enter Here: ");
 scanf("%d",&b);
 system("cls");
 switch (b)
 {
 case 1:// 1st Year CSE div A, B.
 Div1:
 printf("For 1st Year:-\n\n");
 printf("Press 1 For Division A.\n");
 printf("Press 2 For Division B.\n");
 printf("Press 3 To Exit And Return To Previous Screen.\n\n");
 printf("NOTE: Once you go ahead of this step you can't come back without completing thefurther process.\n");
 printf("So make sure you are at correct path.\n\n");
 printf("Enter Here: ");
 scanf("%d",&division);
 system("cls");
 switch (division)
 {
 case 1://div A
 repeatingcheckCSE1A();
 system("cls");
 main();
 case 2://div B
 repeatingcheckCSE1B();
 system("cls");
 main();
 case 3:
 goto previous;
 default:
 printf("Invalid Input");
 goto Div1;
 }
 case 2://2nd Year CSE div A, B.
 Div2:
 printf("For 1st Year:-\n\n");
 printf("Press 1 For Division A.\n");
 printf("Press 2 For Division B.\n");
 printf("Press 3 To Exit And Return To Previous Screen.\n\n");
 printf("NOTE: Once you go ahead of this step you can't come back without completing thefurther process.\n");
 printf("So make sure you are at correct path.\n\n");
 printf("Enter Here: ");
 scanf("%d",&division);
 system("cls");
 switch (division)
 {
 case 1://div A
 repeatingcheckCSE2A();
 system("cls");
 main();
 case 2://div B
 repeatingcheckCSE2B();
 system("cls");
 main();
 case 3:
 goto previous;
 default:
 printf("Invalid Input");
 goto Div2;
 }
 case 3:
 Div4:
 printf("For 1st Year:-\n\n");
 printf("Press 1 For Division A.\n");
 printf("Press 2 For Division B.\n");
 printf("Press 3 To Exit And Return To Previous Screen.\n\n");
 printf("NOTE: Once you go ahead of this step you can't come back without completing thefurther process.\n");
 printf("So make sure you are at correct path.\n\n");
 printf("Enter Here: ");
 scanf("%d",&division);
 system("cls");
 switch (division)
 {
 case 1://div A
 repeatingcheckCSE3A();
 system("cls");
 main();
 case 2://div B
 repeatingcheckCSE3B();
 system("cls");
 main();
 case 3:
 goto previous;
 default:
 printf("Invalid Input");
 goto Div4;
 }
 case 4:
 goto case4;
 }
 case 2://Mech
 previous1:
 printf("Mechanical Engineering Department:-\n\n");
 printf("Press 1 For 1st Year.\n");
 printf("Press 2 For 2nd Year.\n");
 printf("Press 3 For 3rd Year.\n");
 printf("Press 4 To Exit And Return To Previous Screen.\n\n");
 printf("NOTE: Once you go ahead of this step you can't come back without completing the furtherprocess.\n");
 printf("So make sure you are at correct path.\n\n");
 printf("Enter Here: ");
 scanf("%d",&mech);
 system("cls");
 switch (mech)
 {
 case 1://1st mech
 repeatingcheckMECH1();
 system("cls");
 main();
 case 2://2nd mech
 repeatingcheckMECH2();
 system("cls");
 main();
 case 3://3rd mech
 repeatingcheckMECH3();
 system("cls");
 main();
 case 4://exit
 goto case4;
 default:
 printf("Invalid Input");
 goto previous1;
 }
 case 3://IT
 previous2:
 printf("Mechanical Engineering Department:-\n\n");
 printf("Press 1 For 1st Year.\n");
 printf("Press 2 For 2nd Year.\n");
 printf("Press 3 For 3rd Year.\n");
 printf("Press 4 To Exit And Return To Previous Screen.\n\n");
 printf("NOTE: Once you go ahead of this step you can't come back without completing the furtherprocess.\n");
 printf("So make sure you are at correct path.\n\n");
 printf("Enter Here: ");
 scanf("%d",&mech);
 system("cls");
 switch (mech)
 {
 case 1://1st IT
 repeatingcheckIT1();
 system("cls");
 main();
 case 2://2nd IT
 repeatingcheckIT2();
 system("cls");
 main();
 case 3://3rd IT
 repeatingcheckIT3();
 system("cls");
 main();
 case 4://exit
 goto case4;
 default:
 printf("Invalid Input");
 goto previous2;
 }
 case 4:
 login();
 }
}
void repeatingcheckCSE1A();
void repeatingcheckCSE1A()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("1st Year CSE A.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 here1:
 printf("Enter Roll No. : A0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto here1;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here2:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aarav Singh PRESS 1.\n");
 printf("If You Want To Vote To Aarya Patel PRESS 2.\n");
 printf("If You Want To Vote To Abhinav Rao PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc)
 {
 case 1:
 aarav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aarya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 abhinav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here2;
 }
 //SCR
 here3:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Akash Sharma PRESS 1.\n");
 printf("If You Want To Vote To Aman Verma PRESS 2.\n");
 printf("If You Want To Vote To Amaya Gupta PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 akash+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aman+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 amaya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here3;
 }
 //LR
 here4:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Aditi Desai PRESS 1.\n");
 printf("If You Want To Vote To Alia Chatterjee PRESS 2.\n");
 printf("If You Want To Vote To Ananya Nair PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc)
 {
 case 1:
 aditi+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 alia+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ananya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here4;
 }
system("cls");
}
}
repeatingcheckCSE1B();
repeatingcheckCSE1B()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("1st Year CSE B.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Divyam Sanghvi PRESS 1.\n");
 printf("If You Want To Vote To Shloka Shetiya PRESS 2.\n");
 printf("If You Want To Vote To Shreyas Vapiwala PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 divyam+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 shloka+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 shreyas+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Pranav Adigare PRESS 1.\n");
 printf("If You Want To Vote To Moiz Bora PRESS 2.\n");
 printf("If You Want To Vote To Rudra Parmar PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 pranav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 moiz+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 rudra+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Siya Bhagat PRESS 1.\n");
 printf("If You Want To Vote To Vidhi Shah PRESS 2.\n");
 printf("If You Want To Vote To Dhyani Sanghvi PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 siya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 vidhi+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 dhyani+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckCSE2A();
repeatingcheckCSE2A()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("2nd Year CSE A.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Ayush Mehra PRESS 1.\n");
 printf("If You Want To Vote To Ashok Kapoor PRESS 2.\n");
 printf("If You Want To Vote To Ansh Mehta PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 ayush+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 ashok+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ansh+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Dhruv Shah PRESS 1.\n");
 printf("If You Want To Vote To Deepak Agarwal PRESS 2.\n");
 printf("If You Want To Vote To Darsh Kaur PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 dhruv+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 deepak+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 darsh+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Avani Kulkarni PRESS 1.\n");
 printf("If You Want To Vote To Asha Srinivasan PRESS 2.\n");
 printf("If You Want To Vote To Asmita Shah PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 avani+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 asha+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ashmita+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckCSE2B();
repeatingcheckCSE2B()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("2nd Year CSE B\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aditya Kumar PRESS 1.\n");
 printf("If You Want To Vote To Arnav Gupta PRESS 2.\n");
 printf("If You Want To Vote To Bhargav Reddy PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aditya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 arnav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 bhargav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Karthik Nair PRESS 1.\n");
 printf("If You Want To Vote To Gagan Verma PRESS 2.\n");
 printf("If You Want To Vote To Dheeraj Singh PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 karthik+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 gagan+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 dheeraj+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Sanjana Reddy PRESS 1.\n");
 printf("If You Want To Vote To Nitya Patel PRESS 2.\n");
 printf("If You Want To Vote To Navya Menon PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 sanjana+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 nitya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 navya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckCSE3A();
repeatingcheckCSE3A()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("3rd Year CSE A.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Arav Chakraborty PRESS 1.\n");
 printf("If You Want To Vote To Anshul Patel PRESS 2.\n");
 printf("If You Want To Vote To Anmol Das PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 arav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 anshul+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 anmol+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Ashish Singh PRESS 1.\n");
 printf("If You Want To Vote To Atul Menon PRESS 2.\n");
 printf("If You Want To Vote To Arjun Kumar PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 ashish+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 atul+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 arjun+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Akshara Reddy PRESS 1.\n");
 printf("If You Want To Vote To Akanksha Singh PRESS 2.\n");
 printf("If You Want To Vote To Aadya Sharma PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 akshara+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 akanksha+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 aadya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckCSE3B();
repeatingcheckCSE3B()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("3rd Year CSE B.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aditya Kumar PRESS 1.\n");
 printf("If You Want To Vote To Arnav Gupta PRESS 2.\n");
 printf("If You Want To Vote To Bhargav Reddy PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aditya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 arnav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 bhargav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Karthik Nair PRESS 1.\n");
 printf("If You Want To Vote To Gagan Verma PRESS 2.\n");
 printf("If You Want To Vote To Dheeraj Singh PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 karthik+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 gagan+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 dheeraj+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Sanjana Reddy PRESS 1.\n");
 printf("If You Want To Vote To Nitya Patel PRESS 2.\n");
 printf("If You Want To Vote To Navya Menon PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 sanjana+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 nitya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 navya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckMECH1();
repeatingcheckMECH1()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("1st Year MECH.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aarav Singh PRESS 1.\n");
 printf("If You Want To Vote To Aarya Patel PRESS 2.\n");
 printf("If You Want To Vote To Abhinav Rao PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aarav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aarya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 abhinav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Akash Sharma PRESS 1.\n");
 printf("If You Want To Vote To Aman Verma PRESS 2.\n");
 printf("If You Want To Vote To Amaya Gupta PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 akash+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aman+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 amaya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Aditi Desai PRESS 1.\n");
 printf("If You Want To Vote To Alia Chatterjee PRESS 2.\n");
 printf("If You Want To Vote To Ananya Nair PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aditi+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 alia+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ananya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckMECH2();
repeatingcheckMECH2()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("2nd Year MECH.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aarav Singh PRESS 1.\n");
 printf("If You Want To Vote To Aarya Patel PRESS 2.\n");
 printf("If You Want To Vote To Abhinav Rao PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aarav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aarya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 abhinav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Akash Sharma PRESS 1.\n");
 printf("If You Want To Vote To Aman Verma PRESS 2.\n");
 printf("If You Want To Vote To Amaya Gupta PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 akash+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aman+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 amaya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Aditi Desai PRESS 1.\n");
 printf("If You Want To Vote To Alia Chatterjee PRESS 2.\n");
 printf("If You Want To Vote To Ananya Nair PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aditi+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 alia+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ananya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckMECH3();
repeatingcheckMECH3()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("3rd Year MECH.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aarav Singh PRESS 1.\n");
 printf("If You Want To Vote To Aarya Patel PRESS 2.\n");
 printf("If You Want To Vote To Abhinav Rao PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aarav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aarya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 abhinav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Akash Sharma PRESS 1.\n");
 printf("If You Want To Vote To Aman Verma PRESS 2.\n");
 printf("If You Want To Vote To Amaya Gupta PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 akash+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aman+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 amaya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Aditi Desai PRESS 1.\n");
 printf("If You Want To Vote To Alia Chatterjee PRESS 2.\n");
 printf("If You Want To Vote To Ananya Nair PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aditi+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 alia+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ananya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckIT1();
repeatingcheckIT1()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("1st Year IT.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aarav Singh PRESS 1.\n");
 printf("If You Want To Vote To Aarya Patel PRESS 2.\n");
 printf("If You Want To Vote To Abhinav Rao PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aarav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aarya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 abhinav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Akash Sharma PRESS 1.\n");
 printf("If You Want To Vote To Aman Verma PRESS 2.\n");
 printf("If You Want To Vote To Amaya Gupta PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 akash+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aman+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 amaya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Aditi Desai PRESS 1.\n");
 printf("If You Want To Vote To Alia Chatterjee PRESS 2.\n");
 printf("If You Want To Vote To Ananya Nair PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aditi+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 alia+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ananya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckIT2();
repeatingcheckIT2()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("2nd Year IT.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aarav Singh PRESS 1.\n");
 printf("If You Want To Vote To Aarya Patel PRESS 2.\n");
 printf("If You Want To Vote To Abhinav Rao PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aarav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aarya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 abhinav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Akash Sharma PRESS 1.\n");
 printf("If You Want To Vote To Aman Verma PRESS 2.\n");
 printf("If You Want To Vote To Amaya Gupta PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 akash+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aman+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 amaya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Aditi Desai PRESS 1.\n");
 printf("If You Want To Vote To Alia Chatterjee PRESS 2.\n");
 printf("If You Want To Vote To Ananya Nair PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aditi+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 alia+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ananya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
repeatingcheckIT3();
repeatingcheckIT3()
{
 int a,b,division;
 int rollNum[MAX_VOTERS];
 int vote[MAX_VOTERS];
 int candidateVotes[NUM_CANDIDATES] = {0}; // initialize to zero
 int numVoters = 0;
 int abc;
 int count, i, num;
 printf("PRECAUTIONS: \n\n");
 printf("-> Once started to give votes can't come to previous screen.\n");
 printf("-> One student can only vote once to each candidate from each positioni.e.(CR,SCR,LR).\n");
 printf("-> If you don't want to any of the candidates press 4 rather than giving to anyone.\n\n\n");
 printf("Enter total number of voters: ");
 scanf("%d", &count);
 system("cls");
 printf("3rd Year IT.\n\n");
 // Allocate an array of Number structures
 struct Number numbers[count];
 // Initialize the entered flag to 0 for each number
 for (i = 0; i < count; i++) {
 numbers[i].entered = 0;
 }
 // Read in each number and check if it has been entered before
 for (i = 0; i < count; i++) {
 again:
 printf("Enter Roll No. : B0", i+1);
 scanf("%d", &num);
 // Check if the number has been entered before
 if (numbers[num].entered) {
 printf("Number %d has already been entered.\n", num);
 goto again;
 } else {
 // Mark the number as entered
 numbers[num].entered = 1;
 numbers[num].value = num;
 }
 here5:
 printf("Vote For CR:-\n");
 printf("If You Want To Vote To Aarav Singh PRESS 1.\n");
 printf("If You Want To Vote To Aarya Patel PRESS 2.\n");
 printf("If You Want To Vote To Abhinav Rao PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aarav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aarya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 abhinav+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here5;
 }
 //SCR
 here6:
 printf("Vote For SCR:-\n");
 printf("If You Want To Vote To Akash Sharma PRESS 1.\n");
 printf("If You Want To Vote To Aman Verma PRESS 2.\n");
 printf("If You Want To Vote To Amaya Gupta PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 akash+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 aman+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 amaya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here6;
 }
 //LR
 here7:
 printf("Vote For LR:-\n");
 printf("If You Want To Vote To Aditi Desai PRESS 1.\n");
 printf("If You Want To Vote To Alia Chatterjee PRESS 2.\n");
 printf("If You Want To Vote To Ananya Nair PRESS 3.\n");
 printf("None Of The Above Press 4.\n\n");
 printf("Enter Here: ");
 scanf("%d",&abc);
 switch(abc){
 case 1:
 aditi+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 2:
 alia+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("-----------------------------------\n\n");
 break;
 case 3:
 ananya+=1;
 printf("Your Vote Has Been Successfully Recorded.\n\n");
 printf("------------------------------------\n\n");
 break;
 case 4:
 printf("None Of The Above.\n\n");
 printf("------------------------------------\n\n");
 break;
 default:
 printf("-----------INVALID INPUT----------\n\n\n");
 printf("Enter Again !!!\n\n\n");
 goto here7;
 }
system("cls");
}
}
void pattern();
void pattern()
{
 int i, j;
 char S[7][7] = {
 {'|', '|', '|', '|', '|', '|', '|'},
 {'|', ' ', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' ', ' '},
 {'|', '|', '|', '|', '|', '|', '|'},
 {' ', ' ', ' ', ' ', ' ', ' ', '|'},
 {' ', ' ', ' ', ' ', ' ', ' ', '|'},
 {'|', ' |', '|', '|', '|', '|', '|'}
 };
 char B[7][6] = {
 {'|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', '|', '|', '|', '|', ' '}
 };
 char M[7][7] = {
 {'|', ' ', ' ', ' ', ' ', ' ', '|'},
 {'|', '|', ' ', ' ', ' ', '|', '|'},
 {'|', '|', ' ', ' ', ' ', '|', '|'},
 {'|', '|', ' ', ' ', ' ', '|', '|'},
 {'|', ' ', '|', ' ', '|', ' ', '|'},
 {'|', ' ', '|', ' ', '|', ' ', '|'},
 {'|', ' ', ' ', '|', ' ', ' ', '|'}
 };
 char PP[7][6] = {
 {'|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '}
 };
 // Define patterns for each character
 char V[7][7] = {
 {'|', ' ', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', ' ', '|'},
 {' ', '|', ' ', ' ', ' ', '|', ' '},
 {' ', '|', ' ', ' ', ' ', '|', ' '},
 {' ', ' ', '|', ' ', '|', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '}
 };
 char O[7][6] = {
 {' ', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {' ', '|', '|', '|', '|', ' '}
 };
 char T[7][7] = {
 {'|', '|', '|', '|', '|', '|', '|'},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '}
 };
 char I[7][7] = {
 {'|', '|', '|', '|', '|', '|', '|'},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {'|', '|', '|', '|', '|', '|', '|'}
 };
 char N[7][7] = {
 {'|', ' ', ' ', ' ', ' ', ' ', '|'},
 {'|', '|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', '|', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', '|', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', '|', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|', '|'},
 {'|', ' ', ' ', ' ', ' ', ' ', '|'}
 };
 char G[7][6] = {
 {' ', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', '|', '|', '|'},
 {' ', '|', '|', ' ', ' ', '|'}
 };
 // Define patterns for each character
 char P[7][6] = {
 {'|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '}
 };
 char OO[7][6] = {
 {' ', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {' ', '|', '|', '|', '|', ' '}
 };
 char R[7][6] = {
 {'|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', '|'},
 {'|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', '|', ' ', ' '},
 {'|', ' ', ' ', ' ', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', '|'}
 };
 char TT[7][7] = {
 {'|', '|', '|', '|', '|', '|', '|'},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', ' ', '|', ' ', ' ', ' '}
 };
 char A[7][7] = {
 {' ', ' ', ' ', '|', ' ', ' ', ' '},
 {' ', ' ', '|', ' ', '|', ' ', ' '},
 {' ', '|',' ', ' ', ' ', '|', ' '},
 {' ', '|', '|', '|', '|', '|', ' '},
 {'|', ' ', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', ' ', '|'},
 {'|', ' ', ' ', ' ', ' ', ' ', '|'}
 };
 char L[7][6] = {
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', ' ', ' ', ' ', ' ', ' '},
 {'|', '|', '|', '|', '|', '|'}
 };
 // Loop through the arrays to print each character
 for (i = 0; i < 7; i++) {
 for (j = 0; j < 7; j++) {
 printf("%c", S[i][j]);
 }
 printf(" ");
 for (j = 0; j < 6; j++) {
 printf("%c", B[i][j]);
 }
 printf(" ");
 for (j = 0; j < 7; j++) {
 printf("%c", M[i][j]);
 }
 printf(" ");
 for (j = 0; j < 6; j++) {
 printf("%c", PP[i][j]);
 }
 printf("\n");
 }
 printf("\n");
 // Loop through the arrays to print each character
 for (i = 0; i < 7; i++) {
 for (j = 0; j < 7; j++) {
 printf("%c", V[i][j]);
 }
 printf(" ");
 for (j = 0; j < 6; j++) {
 printf("%c", O[i][j]);
 }
 printf(" ");
 for (j = 0; j < 7; j++) {
 printf("%c", T[i][j]);
 }
 printf(" ");
 for (j = 0; j < 7; j++) {
 printf("%c", I[i][j]);
 }
 printf(" ");
 for (j = 0; j < 7; j++) {
 printf("%c", N[i][j]);
 }
 printf(" ");
 for (j = 0; j < 6; j++) {
 printf("%c", G[i][j]);
 }
 printf("\n");
 }
 // Loop through the arrays to print each character
 printf("\n");
 for (i = 0; i < 7; i++) {
 for (j = 0; j < 6; j++) {
 printf("%c", P[i][j]);
 }
 printf(" ");
 for (j = 0; j < 6; j++) {
 printf("%c", OO[i][j]);
 }
 printf(" ");
 for (j = 0; j < 6; j++) {
 printf("%c", R[i][j]);
 }
 printf(" ");
 for (j = 0; j < 7; j++) {
 printf("%c", TT[i][j]);
 }
 printf(" ");
 for (j = 0; j < 7; j++) {
 printf("%c", A[i][j]);
 }
 printf(" ");
 for (j = 0; j < 6; j++) {
 printf("%c", L[i][j]);
 }
 printf("\n");
 }
 }
