t5:
	@gcc stdin2.c
	./a.out
	@rm *out


t4:
	@gcc stdin.c
	./a.out
	@rm *out


t3:
	echo Alice > file.txt
	echo Bob >> file.txt
	ls
	gcc fputs.c 
	./a.out 
	ls
	cat file2.txt 
	rm *.out *.txt

t1:
	gcc fputc.c 
	./a.out 
	#failed
	rm *.out

t2:
	echo Alice > file.txt
	echo Bob >> file.txt
	ls
	gcc fputc.c 
	./a.out 
	ls
	cat file2.txt 
	rm *.out *.txt



