create table teacher_detail(
teacher_id int primary key,teacher_age int)  

create table teacher_subject(teacher_id int,
subject varchar(20),
constraint t1 foreign key(teacher_id)
references teacher_detail
(teacher_id))

insert into teacher_detail values(111,30)

insert into teacher_subject
values(111,'chemistry')

select * from teacher_detail

select * from teacher_subject

create table teachers(teacher_id int
primary key,teacher_name
varchar(20),country varchar(20),city 
varchar(20),state varchar(20))

insert into teachers 
values(1,'stephan','india','nagpur','mah')

insert into teachers
values(2,'morris','india','nagpur','mah')

insert into teachers 
values(4,'fransis','india','mumbai','mah')

select * from teachers