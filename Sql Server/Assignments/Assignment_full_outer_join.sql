---display the records from customer and orders table using full outer join---


create table customers(custid int,custname varchar(20),custaddress varchar(50))

insert into customers values(1,'ram','akola')
insert into customers values(2,'pranali','ner')
insert into customers values(3,'komal','nagpur')
insert into customers values(22,'prajkta','chandur railway')
insert into customers values(12,'renuka','sangali')
insert into customers values(24,'pavan','rampur')
insert into customers values(15,'mamata','yavatmal')
insert into customers values(27,'rakhi','nashik')
insert into customers values(5,'rutika','akola')
insert into customers values(233,'pranjali','ner')

select * from customers

create table orders(custid int, prodname varchar(100),amount int,date datetime);

insert into orders values(1,'Laptop',50000,'2022-01-03')
insert into orders values(19,'computer',10000,'2022-03-03')
insert into orders values(24,'Mobile',10000,'2022-05-01')
insert into orders values(5,'Keyboard',1500,'2022-01-09')
insert into orders values(233,'Mouse',500,'2021-11-03')
insert into orders values(11,'TV',50000,'2022-06-07')

select * from orders

select customers.custid,customers.custname,customers.custaddress,orders.prodname,orders.amount,orders.date
from customers
full outer join orders
on customers.custid=orders.custid;