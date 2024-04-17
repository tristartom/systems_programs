echo-sf:
	gcc -I ../lib ../lib/server_lib.c server_main_echo_fork.c -o server_f.out
	./server_f.out 1234

echo-s:
	gcc -I ../lib ../lib/server_lib.c server_main_echo.c -o server.out
	./server.out 1234

echo-c:
	gcc -I ../lib ../lib/client_lib.c client_main_echo.c -o client.out
	./client.out 127.0.0.1 1234

echo-cb:
	gcc -I ../lib ../lib/client_lib.c client_main_echo_b.c -o client_b.out
	./client_b.out 127.0.0.1 1234
