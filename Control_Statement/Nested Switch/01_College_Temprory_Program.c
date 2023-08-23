#include <stdio.h>
int main()
{
    int college, branch;
    char study;
    char name[100];
    char surname[25];

    printf("Enter Your Name :");
    scanf(" %s",&name);
    printf("Enter Your Surname :");
    scanf(" %s",&surname);
 
    // Firstly Giving The College List To User For Selecting form them

    printf("Select your Choice \n");
    printf("1) S.B.jain Institute\n");
    printf("2) Ramdeo Baba College\n");
    printf("3) Raisoni College\n");
    printf("Enter Your Choice :");
    scanf("%d", &college);

    // second Gives the Information About the branch of selected college

    switch (college){
        case 1:
            printf("***** Welcome To S.B.Jain Institute *****\n");
            printf("Available Branches In College \n");
            printf("1) Electronics Department \n");
            printf("2) Computer Scince Department \n");
            printf("3) Mechanical Engineering \n");
            printf("Make A choice : ");
            scanf("%d",&branch);
    // Third Now You Select The what we want to study in special branch
            switch(branch){
                case 1:
                    printf("***** Welcome To Electronics Department ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Electronics \n");
                    printf("b) Mix Of Electronics and Computer Science \n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
    // Fourth After Your Choice of special branch then we alloted a section
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Electronics ***** \n");
                            printf("Your Section :'A'\n");
                            break;
                        case 'b':
                            printf("***** Welcome To Mix Of Electronics and Computer Science ******\n");
                            printf("Your Section : 'B'\n");
                            break;
                    }
                    break;
                case 2:
                    printf("***** Welcome To Computer Science Department ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Computer Networking \n");
                    printf("b) Mix Of AI and Computer Science \n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Computer Networking ***** \n");
                            printf("Your Section :'A'");
                            break;
                        case 'b':
                            printf("***** Welcome To Mix Of AI and Computer Science ******\n");
                            printf("Your Section : 'B'");
                            break;
                    }
                    break;
                case 3:
                    printf("***** Welcome To Mechanical Department ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Mechanics \n");
                    printf("b) Mix Of Mechanical and Computer Science \n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Mechanics ***** \n");
                            printf("Your Section :'A' \n ");
                            break;
                        case 'b':
                            printf("***** Welcome To Mix Of Mechanical and Computer Science ******\n");
                            printf("Your Section : 'B' \n");
                            break;
                    }
                    break;
                
            break;
            }
            break;
    // fifth You Selected 2 number college then they alloted their facility
        case 2:
            printf("***** Welcome To Ramdeo Baba Institute *****\n");
            printf("Available Branches In College \n");
            printf("1) Electronics Department \n");
            printf("2) Computer Scince Department \n");
            printf("3) AIDS \n");
            printf("Make A choice : ");
            scanf("%d",&branch);
            switch(branch){
                case 1:
                    printf("***** Welcome To Electronics Department ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Electronics \n");
                    printf("b) Mix Of Electronics and Computer Science \n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Electronics ***** \n");
                            printf("Your Section :'A' \n");
                            break;
                        case 'b':
                            printf("***** Welcome To Mix Of Electronics and Computer Science ******\n");
                            printf("Your Section : 'B' \n");
                            break;
                    }
                    break;
                case 2:
                    printf("***** Welcome To Computer Science Department ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Computer Networking \n");
                    printf("b) Mix Of AI and Computer Science \n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Computer Networking ***** \n");
                            printf("Your Section :'A'\n");
                            break;
                        case 'b':
                            printf("***** Welcome To Mix Of AI and Computer Science ******\n");
                            printf("Your Section : 'B'\n");
                            break;
                    }
                    break;
                case 3:
                    printf("***** Welcome To AIDS ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Data Science \n");
                    printf("b) Free Lancing Course \n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Data Science ***** \n");
                            printf("Your Section :'A'\n");
                            break;
                        case 'b':
                            printf("***** Welcome To Free Lancing Course ******\n");
                            printf("Your Section : 'B'\n");
                            break;
                    }
                    break;
                
            break;
            }
            break;
    // Sixth You Selected 2 number college then they alloted their facility
        case 3:
            printf("***** Welcome To Raisoni Group of Institute *****\n");
            printf("Available Branches In College \n");
            printf("1) AIML Department \n");
            printf("2) Computer Scince Department \n");
            printf("3) AIDS \n");
            printf("Make A choice : ");
            scanf("%d",&branch);
            switch(branch){
                case 1:
                    printf("***** Welcome To AIML ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Machine Learning \n");
                    printf("b) Core Robotics and AI\n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Machine Learning***** \n");
                            printf("Your Section :'A'\n");
                            break;
                        case 'b':
                            printf("***** Welcome To Core Robotics and AI ******\n");
                            printf("Your Section : 'B'\n");
                            break;
                    }
                    break;
                case 2:
                    printf("***** Welcome To Computer Science Department ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Computer Networking \n");
                    printf("b) Mix Of AI and Computer Science \n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Computer Networking ***** \n");
                            printf("Your Section :'A'\n");
                            break;
                        case 'b':
                            printf("***** Welcome To Mix Of AI and Computer Science ******\n");
                            printf("Your Section : 'B'\n");
                            break;
                    }
                    break;
                case 3:
                    printf("***** Welcome To AIDS ***** \n");
                    printf("Further Study\n");
                    printf("a) Core Data Science \n");
                    printf("b) Free Lancing Course \n");
                    printf("Make A choice :");
                    scanf(" %c",&study);
                    switch(study){
                        case 'a':
                            printf("***** Welcome To Core Data Science ***** \n");
                            printf("Your Section :'A'\n");
                            break;
                        case 'b':
                            printf("***** Welcome To Free Lancing Course ******\n");
                            printf("Your Section : 'B'\n");
                            break;
                    }
                    break;
                
            break;
            }
            break;
        default:
            printf("NOT VALID CODE FOR COLLEGE SELECTION \n");
        
        

    break;
    }
    printf("##### THANK YOU SIR / MADAM TO VISIT OUR COLLEGE #####");
    return 0;
}
