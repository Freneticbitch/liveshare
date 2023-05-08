#!/bin/sh

docker image prune --force
docker image rm srcs_nginx
docker image rm srcs_wordpress
docker image rm srcs_mariadb
docker container prune --force
docker volume prune --force
docker volume rm srcs_alemafe_db
docker volume rm srcs_alemafe_nginx
docker volume rm srcs_db
docker volume rm srcs_php_nginx
rm -rf /home/$USER/data/
docker volume list
docker container list
docker image list