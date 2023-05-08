FROM debian:buster

RUN	apt update -y && \
	apt upgrade -y && \
	apt install -y mariadb-server gettext-base

WORKDIR /tmp/mariadb/

COPY conf/my.cnf /etc/mysql

COPY conf/script.sh /tmp/mariadb/

ENTRYPOINT ["sh", "/tmp/mariadb/script.sh"]

CMD ["mysqld_safe"]