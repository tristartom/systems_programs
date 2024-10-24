all: c
	git push

c:
	git add -A
	git commit -am 'req_resp_raceBal with Weixiang'

b:
	make -C socket all
	make -C process all

