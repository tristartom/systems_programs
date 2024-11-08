all: c
	git config --global user.email tristartom@gmail.com
	git push

c:
	git add -A
	git commit -am 'All'

b:
	make -C socket all
	make -C process all

