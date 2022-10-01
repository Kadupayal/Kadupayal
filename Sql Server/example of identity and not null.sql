create table employee(empid int primary key identity(1,1),empname varchar(20))

insert into employee(empname)values('ravi')

select * from employee

insert into employee(empname)values('rajesh')

select * from employee

delete from employee where empid=1

insert into employee(empname)values('rajesh123')

delete from employee

select * from employee

insert into employee(empname)values('rajesh123')




---not null----

create table stud(rno int,name varchar(20) not null)

insert into stud(rno,name)values(6,'ravi')

select * from stud

