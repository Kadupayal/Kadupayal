create table student(rno int,name varchar(20), address varchar(50), mobno varchar(10))
drop table student

insert into student values(1,'payal','amravati',7799345611)
insert into student values(2,'sonali','pandhrkvda',2222222222)
insert into student values(3,'rashmika','nandgaon',3232323232)
insert into student values(4,'raghav','pusad',4545454545)
insert into student values(9,'pallavi','amravati',7799255611)
insert into student values(12,'samiksha','pulgaon',2222111222)
insert into student values(5,'radha','nagpur',3232329999)
insert into student values(6,'raj','amravati',3333454545)
insert into student values(7,'prem','nashik',3233339999)
insert into student values(8,'kripa','amravati',3334444545)

select * from student



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


create table users(userid int,username varchar(20),password varchar(10),emailid varchar(40),gender varchar(20),city varchar(20),country varchar(20))

drop table users

insert into users values(1,'raj',12345678,'kumar157@gmail.com','male','amravati','India')
insert into users values(2,'kamal',11111111,'kamal157@gmail.com','male','akola','India')
insert into users values(3,'ravina',12345111,'ravina12@gmail.com','female','chandrapur','America')
insert into users values(11,'payal',33333678,'payal33@gmail.com','female','amravati','India')
insert into users values(15,'rakshak',99945678,'rak123@gmail.com','male','ner','India')
insert into users values(19,'pranjali',12345555,'pranjali99@gmail.com','female','nashik','japan')
insert into users values(4,'ravi',12777778,'ravi033@gmail.com','male','buldhana','India')
insert into users values(22,'rekha',12346668,'rekha37@gmail.com','female','aurangabad','India')
insert into users values(99,'prachi',33333378,'prachi99@gmail.com','female','vashim','India')
insert into users values(101,'krishna',20202020,'krishna20@gmail.com','male','nagpur','India')

select * from users