#include<iostream>
#include<stdlib.h>
#include<stack_array_int.h>
#include<string.h>
using namespace std;
	void accept(char *,char *);
	void display(char *);
	void evaluate(char *);
int main()
{

	int c,arrsize=20;
	char arrstring[arrsize],copyarrstring[arrsize];
	do
	{
		cout<<"\n\n\n enter your choice \n 1.Accept expression \n 2.Display prefix expresion \n 3.Display evaluated prefix expression \n 4.convert infix to postfix. \n 0.exit.";
		cin>>c;
		switch(c)
		{
			case 1:{
				accept(arrstring,copyarrstring);
				break;
				}
			case 2:{
			    cout<<"\n The infix expression is:";
				display(arrstring);
				break;
				}
			case 3:{
			    if(strcmp(arrstring,copyarrstring)==0)
                {
                    cout<<"\n not coverted to postfix!!! \n Select option 4 to convert...";
                }
                else
                {
                    cout<<"\n The postfix expression is:";
                    display(copyarrstring);
                }
				break;
				}
            case 4:{
				evaluate(copyarrstring);
				break;
				}

			 default:{
					cout<<"\n wrong input entered!!!";
					break;
				      }
		}
	    cout<<"\n___________________________________________________\n";
	}while(c!=0 && c<5 && c>0);
	return 0;
}

	void accept(char *arrstring,char *copyarrstring)
	{
		int len,j=0;
		char temp;
		cout<<"\n Enter the infix expression:";
        cin>>arrstring;
        len=strlen(arrstring);
        for(int i=len-1;i>=j;i--)
        {
            temp=arrstring[j];
            arrstring[j]=arrstring[i];
            arrstring[i]=temp;
            j++;
        }
        cout<<"\n reverse:"<<arrstring;
        strcpy(copyarrstring,arrstring);
        cout<<"\n The infix expression is:";
        display(arrstring);
	}

	void display(char *arrstring)
		{
			cout<<arrstring;
		}

void evaluate(char *copyarrstring){

}



