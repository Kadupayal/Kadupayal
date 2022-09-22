----create a table studente having columns rno,name,email,city,courseid
----insert some records into student table
----create a table fee having columns feesid,rno,feesdate,amount,courseid
----write a query to display fees details of those student whose city=nagpur
----write a query to display fees details of those student whose city=mumbai
----write a query to display fees details of those student whose city=delhi


create table studente(rno int,name varchar(20),email varchar(100),city varchar(50),courseid int)

insert into studente
values(1,'Payal','payalkadu123@gamil.com','nagpur',123)

insert into studente
values(2,'Komal','Komaljangid121@gamil.com','mumbai',121)

insert into studente
values(3,'Rekha','rekhamishra122@gamil.com','delhi',122)

insert into studente
values(4,'Nayna','naynapuri126@gamil.com','Nashik',126)

insert into studente
values(5,'Aarati','aaratirao129@gamil.com','Ahmadabad',129)

select * from studente

create table fee(feesid int, rno int, feesdate date, amount int, courseid int)

insert into fee
values(1,1,'2022-01-03',5000,12) 

insert into fee
values(2,2,'2022-05-01',10000,13)

insert into fee
values(3,3,'2022-06-09',5000,15)

insert into fee
values(4,4,'2022-05-11',2000,17)

insert into fee
values(5,5,'2022-09-08',15000,19)

select * from fee

select feesid,rno,feesdate,amount,courseid from fee
where rno in
(select rno from studente where city='nagpur')

select feesid,rno,feesdate,amount,courseid from fee
where rno in
(select rno from studente where city='mumbai')

select feesid,rno,feesdate,amount,courseid from fee
where rno in
(select rno from studente where city='delhi')

----create a table courses having column courseid, coursename,fees , duration
----write a query to get student details whose course is java
----write a query to get student details whose course is dotnet
----write a query to get student details whose course is php

create table courses(courseid int, coursename  varchar(45), fees int,duration varchar(100))

insert into courses values(123,'java',5000,'three month')
insert into courses values(121,'dotnet',9000,'six month')
insert into courses values(126,'php',4000,'three month')
insert into courses values(125,'csharp',5000,'three month')

select * from courses

select rno, name, email, city, courseid
from studente where courseid in
(select courseid from courses where coursename='java')

select rno, name, email, city, courseid
from studente where courseid in
(select courseid from courses where coursename='dotnet')

select rno, name, email, city, courseid
from studente where courseid in
(select courseid from courses where coursename='php')