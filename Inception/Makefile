HOME_DIR != getent passwd $(SUDO_USER) | cut -d: -f6;

all:
	mkdir -p ${HOME_DIR}/data/php_nginx
	mkdir -p ${HOME_DIR}/data/db
	docker-compose -f srcs/docker-compose.yml build
	docker-compose -f srcs/docker-compose.yml up -d

stop:
	docker-compose -f srcs/docker-compose.yml down