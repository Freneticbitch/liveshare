HOME_DIR != getent passwd $(SUDO_USER) | cut -d: -f6;

VOLUMES = srcs_db srcs_php_nginx

IMAGES = srcs_nginx srcs_wordpress srcs_mariadb

all:
	mkdir -p ${HOME_DIR}/data/php_nginx
	mkdir -p ${HOME_DIR}/data/db
	docker-compose -f srcs/docker-compose.yml build
	docker-compose -f srcs/docker-compose.yml up -d

clean:
	docker-compose -f srcs/docker-compose.yml down

fclean: clean
	rm -rf /home/$(USER)/data/

re: fclean all

clear-all: fclean purge

purge:
	docker image rm $(IMAGES)
	docker volume rm $(VOLUMES)

.PHONY: all clean fclean re