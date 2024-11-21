all:
	gcc setuid.c
	sudo chown root a.out
	ls -ltr a.out
	sudo chmod 4755 a.out
	ls -ltr a.out
	cat /etc/zzz
	echo aaa > /etc/zzz
	./a.out

clean:
	rm -f a.out

