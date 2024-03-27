kill-loop-loop:
	make -p bin; make -p src;
	gcc src/infloop.c -o bin/loop.out
	gcc ../process/src/signal_sender.c -o bin/sender.out
	./bin/loop.out

kill-loop-sender:
	ps aux | grep loop.out 
	# ./bin/sender.out XXX 9
