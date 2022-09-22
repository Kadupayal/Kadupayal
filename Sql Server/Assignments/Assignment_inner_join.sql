---create a table customer having custid,custname,telno
---create a table orders having orderid,orderdate,custid ,prodname,qty,rate
---then write a query to display records from customer and orders tables using inner join

create table customer(
custid int,
custname varchar(45) not null,
telno varchar(50)
);



create table orderse(
orderid int primary key identity,
orderdate datetime ,
custid int,
prodname varchar(45),
qty int,
rate int
);


insert into customer (custid,custname,telno)
values(1,'Payal',1234567891),
(2,'Komal',1234567888),
(3,'Revati',1234567772),
(4,'Mangesh',1234566611),
(5,'Raj',1234567833),
(6,'Bhumika',9999999999);

select * from customer

insert into orderse(orderdate,custid,prodname,qty,rate)
values('2022-09-01',1,'Kayboard',2,2000),
('2022-09-02',7,'Mouse',1,1500),
('2022-09-03',2,'computer',5,10000),
('2022-09-05',4,'laptop',2,50000),
('2022-09-06',9,'Mobile',3,20000),
('2022-09-10',22,'radio',5,5000);

select * from orderse

select orderse.custid ,customer.custname,  orderse.prodname,orderse.orderdate , customer.telno
from customer
inner join orderse
on customer.custid=orderse.custid;