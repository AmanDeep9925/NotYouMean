#include <iostream>
#include <cstring>

using namespace std;

char *mystrtok(char str[],char delim){

	int i;

	 static char* input = NULL;

	 if(str != NULL){
	 	input = str;
	 }

	 if(input == NULL){
	 	return NULL;
	 }

	 char *output = new char[strlen(input)+1];

	 for (i = 0; input[i]!='\0'; ++i){
	 	
	 	if(input[i]!=delim){
	 		output[i] = input[i];
	 	}
	 	else{
	 		output[i] = '\0';
	 		input = input + i + 1;
	 		return output;
	 	}
	}
	output[i] = '\0';

	input = NULL;

	return output;
}


int main(){
	char str[] = "Hi,I am here thinking how to get a girl for V-DAY, I am very desperate!";
	char *ptr;

	ptr = mystrtok(str," ");
	cout << ptr << endl;

}

