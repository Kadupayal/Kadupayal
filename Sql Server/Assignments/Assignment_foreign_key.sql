----create a table students (rno pk , name ,address)
----create a table fees (feesid pk , rno foreign key, amount , date)


create table  students(rno int ,name varchar(20),address varchar(30),primary key(rno))


create table fees(fees_id int,rno int,amount varchar(10),date date,foreign key(rno)
references students(rno))

insert into students values (1,'Dipali','mumbai')
insert into students values(2,'Payal','gaurkheda')
select * from students


insert into fees values(1001,1,'20,000','9-2-2020')
insert into fees values(1001,1,'20,000','9-2-2021')
insert into fees values(1002,2,'26,000','9-2-2020')
insert into fees values(1002,2,'25,000','8-12-2021')
select * from fees

drop table fees

create table fees(fees_id int,rno int,amount varchar(10),date date,foreign key(rno)
references students(rno) on delete no action)


insert into fees values(1001,1,'20,000','9-2-2020')
insert into fees values(1001,1,'20,000','9-12-2021')
insert into fees values(1002,2,'26,000','9-2-2020')

insert into students values(3,'payal','yavatmal')

select * from students
select *from fees

delete from students where rno=3
delete from fees where rno=1

select * from students
select *from fees

drop table fees

create table fees(fees_id int,rno int,amount varchar(10),date date,foreign key(rno)
references students(rno) on delete cascade)

insert into students values(3,'revati','dhamangao')

insert into fees values(1001,1,'20,000','9-2-2020')
insert into fees values(1001,1,'20,000','9-12-2021')
insert into fees values(1002,2,'26,000','9-2-2020')
insert into fees values(1004,3,'45,000','8-7-2021')
select *from fees

insert into students values(5,'komal','amravati')  
select *from students

 delete from students where rno=5

 select *from students
 select *from fees
 delete from fees where rno=1
 select *from fees

  drop table fees

create table fees(fees_id int,rno int,amount varchar(10),date date,foreign key(rno)
references students(rno) on delete set null)

insert into fees values(1001,1,'20,000','9-2-2020')
insert into fees values(1001,1,'20,000','9-12-2021')
insert into fees values(1002,2,'26,000','9-2-2020')
insert into fees values(1004,3,'45,000','8-7-2021')

select *from students
 select *from fees

 
 insert into students values(5,'mouni ','wardha ') 
 
 delete from student where rno=5
 select * from students

  delete from students where rno=1 

  select *from students
 select *from fees    

 drop table fees

  create table fees(fees_id int,rno int,amount varchar(10),date date,foreign key(rno)
references students(rno) on delete set default)

insert into students values(1,'dinesh','babhulgao')

insert into fees values(1001,1,'20,000','9-2-2020')
insert into fees values(1001,1,'20,000','9-12-2021')
insert into fees values(1002,2,'26,000','9-2-2020')
insert into fees values(1004,3,'45,000','8-7-2021')

select *from students
 select *from fees

  delete from student where rno=3

  select * from students
  select * from fees