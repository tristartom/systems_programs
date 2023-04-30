b:
	mkdir -p bin
	gcc src/server_main_echo_fork.c src/server_lib.c -o bin/server_echo_fork.out
	gcc src/server_main_web.c src/server_lib.c -o bin/server_web.out
	gcc src/server_main_sum2_signal.c src/server_lib.c -o bin/server_sum2_s.out
	gcc src/server_main_sum2_fork_sharedmem.c src/server_lib.c -o bin/server_sum2_f.out
	gcc src/server_main_sum2.c src/server_lib.c -o bin/server_sum2.out
	gcc src/client_main_echo.c src/client_lib.c -o bin/client_b.out


lib:
	gcc lib_src/mmap.c -o bin/mmap.out
	gcc lib_src/signal_handler.c -o bin/signal_handler.out
	gcc lib_src/signal_sender.c -o bin/signal_sender.c

c:
	./bin/client_b.out 127.0.0.1 4312

s1:
	./bin/server_web.out 4312

s2:
	./bin/server_echo_fork.out 4312

s3:
	./bin/server_sum2.out 4312

s4:
	./bin/server_sum2_s.out 4312

s5:
	./bin/server_sum2_f.out 4312

clean:
	rm bin/*out
