t4:
	gcc alarm2.c
	./a.out
	rm *out


t3:
	gcc alarm.c
	./a.out
	rm *out

t1:
	gcc getpid.c
	./a.out
	./a.out
	rm *out

t2:
	gcc sender_kill.c -o sender.out
	gcc receiver1.c -o receiver1.out

t5:
	gcc receiver2_handler.c -o receiver2.out
	echo "Open another terminal and run command: kill -2 <pid> #-2 is SIGINT"
	./receiver2.out

c:
	rm *out
