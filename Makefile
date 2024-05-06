all: c
	git push

c:
	git add -A
	git commit -am 'fix basicio'

b:
	make -C socket all
	make -C process all

