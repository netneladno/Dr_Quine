all:
#	clang -Wall -Wextra -Werror -o Colleen Colleen.c; ./Colleen > tmp_Colleen.txt ; 
#	diff tmp_Colleen.txt Colleen.c
	#clang -Wall -Wextra -Werror -o Grace Grace.c
	#./Grace
	#diff Grace.c Grace_kid.c
	clang -g -Wall -Wextra -Werror Sully.c -o Sully ; ./Sully

