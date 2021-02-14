StringFormatting предназначен для преобразования строк-значения в удобночитаемую строку
# Подключение
Подключаем заголовочный файл StringFormatting.h в свой проект
    #include <include/StringFormatting.h>
# Примеры использования
используем функцию format
```cpp
format("Hi! My name is %s. %s C++ %s", "Andrey", "I learning", "and Java");
```
на выходе получим
```cpp
Hi! My name is Andrey. I learning C++ and Java
```
Удобно применять для формирования запроса по SQL. Как пример:
```cpp
format("SELECT * FROM %s WHERE t1=%s AND name=%s", "tableName", "123123", "Andrii");
```
Получим в итоге:
```cpp
SELECT * FROM tableName WHERE t1=123123 AND name=Andrii
```
Вместо формирования строки путем конкатинации
```cpp
output = "SELECT * FROM " + tableName + " WHERE t1=" + t1 + " AND name=" + name;
```
