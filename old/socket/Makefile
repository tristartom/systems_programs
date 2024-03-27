b:
	mkdir -p bin
	gcc src/server_main_echo_fork.c src/server_lib.c -o bin/server_echo_fork.out
	gcc src/server_main_web.c src/server_lib.c -o bin/server_web.out
	gcc src/client_main_echo.c src/client_lib.c -o bin/client_b.out


lib:
	cp -r ../process/src ./lib_src
	gcc lib_src/mmap.c -o bin/mmap.out
	gcc lib_src/signal_handler.c -o bin/signal_handler.out
	gcc lib_src/signal_sender.c -o bin/signal_sender.c

c:
	./bin/client_b.out 127.0.0.1 4312

s1:
	./bin/server_web.out 4312

s2:
	./bin/server_echo_fork.out 4312

clean:
	rm bin/*out
