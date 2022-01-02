# Ответы на тестовые вопросы
## Сети и виртуализация в Linux
+ Исходя их вывода команды __ip -4 a show eth1__ на ВМ KVM и LXC-контейнере соответсвенно, можно сделать заключение, что причиной недоступности по IP является установленный флаг NOARP в настройках сетевого интерфейса __eth1__ на ВМ KVM. Данный флаг отключает поддержку протокола __ARP__ на интерфейсе __eth1__ и станция (__ВМ KVM__) перестаёт отвечать на ARP-запросы определения MAC-адреса по IP-адресу поступающие на интерфейс __eth1__ от станции __10.30.30.3/24__ (LXC-контейнер). Выполняется сброс временной таблицы соответствия MAC-IP на ВМ KVM и станция теряет доступность по сети Ethernet.
+ Для восстановления доступности станция __ВМ KVM__ по сети Ethernet, необходимо включить подержку протокола __ARP__ на интерфейсе __eth1__ указав явно влаг __arp__:  
```
[root@x ~]# ifconfig eth1 arp
```
## С и тестирование
## Shell-скриптинг
## Python 2
## PCAP, трафик
## Базы данных, SQLAlchemy
