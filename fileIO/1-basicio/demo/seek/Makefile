all: c r clean

c:
	gcc seek.c 

r:
	touch file_append.txt 
	echo Alice > file_append.txt 
	cat file_append.txt 
	./a.out 
	cat file_append.txt 	

clean:
	rm *.txt *.out
