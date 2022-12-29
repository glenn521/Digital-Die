#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wiringPi.h>


#define SHELLSCRIPT1 "\
#/bin/bash \n\
echo 1 >> /dev/sevenseg \n\
"

#define SHELLSCRIPT2 "\
#/bin/bash \n\
echo 2 >> /dev/sevenseg \n\
"

#define SHELLSCRIPT3 "\
#/bin/bash \n\
echo 3 >> /dev/sevenseg \n\
"

#define SHELLSCRIPT4 "\
#/bin/bash \n\
echo 4 >> /dev/sevenseg \n\
"

#define SHELLSCRIPT5 "\
#/bin/bash \n\
echo 5 >> /dev/sevenseg \n\
"

#define SHELLSCRIPT6 "\
#/bin/bash \n\
echo 6 >> /dev/sevenseg \n\
"

int main()
{

	int lower, upper, num;

	const int button = 7;
	wiringPiSetup();
	pinMode(button, INPUT);
	
	lower =1;
	upper =6;
	
	while(1){
        if (digitalRead(button) == LOW) {
          
	num = (rand() % (upper - lower + 1)) + lower;

	switch(num)
	{
		case 1: system(SHELLSCRIPT1);
			break;
		case 2: system(SHELLSCRIPT2);
			break;
		case 3: system(SHELLSCRIPT3);
			break;
		case 4: system(SHELLSCRIPT4);
			break;
		case 5: system(SHELLSCRIPT5);
			break;
		case 6: system(SHELLSCRIPT6);
			break;

	}//switch
	
	
	}//while
	};

    return 0;
}


