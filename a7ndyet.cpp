#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
string ValidPassword;
int length;
bool isValidPassword=false;
bool upper=false;
bool lower=false;
bool digit=false;
bool special=false;
do
{
cout<<"Create a adequate password (Make sure to include at least one Uppercase, Lowercase, Numbers, and Specials).\n";
getline(cin, ValidPassword); 
length=ValidPassword.length();
if(length<12)
{
cout<<"Error, Try again! There's something wrong with your password. It might be a few words short or missing a requirement.\n";
}
for(int i=0; i<length; i++)
{
	if(isupper(ValidPassword[i]))
	{
	upper=true;
	}
	if(islower(ValidPassword[i]))
	{
	lower=true;
	}
	if(isdigit(ValidPassword[i]))
	{
	digit=true;
	}
    if(ValidPassword[i] == '!' || ValidPassword[i] == '@' || ValidPassword[i] == '#' || ValidPassword[i] == '$'
      || ValidPassword[i] == '%' || ValidPassword[i] == '^' || ValidPassword[i] == '&' || ValidPassword[i] == '*'
      || ValidPassword[i] == '(' || ValidPassword[i] == ')' || ValidPassword[i] == '-' || ValidPassword[i] == '{'
      || ValidPassword[i] == '}' || ValidPassword[i] == '[' || ValidPassword[i] == ']' || ValidPassword[i] == ':'
      || ValidPassword[i] == ';' || ValidPassword[i] == '"' || ValidPassword[i] == '\'' || ValidPassword[i] == '<'
      || ValidPassword[i] == '>' || ValidPassword[i] == '.' || ValidPassword[i] == '/' || ValidPassword[i] == '?'
      || ValidPassword[i] == '~' || ValidPassword[i] == '`' )
      {
	special=true;
    }
   }
if(upper==true && lower==true && digit==true && special==true)
{
isValidPassword=true;
}
}
while(isValidPassword==false);
cout<<"Good Job! Your password is acceptable, just make sure not to forget it.\n";
return 0;
}