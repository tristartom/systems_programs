all: c
	git push

c:
	git add -A
	git commit -am 'All'

b:
	make -C socket all
	make -C process all

