create table Geeks(
id int not null,
name varchar(255),
age int,
location varchar(255) default 'noida');

insert into Geeks values(4,'mira',23,'delhi');
insert into Geeks(id,name,age)values(5,'hema',27);
insert into Geeks values(6,'neha',25,'delhi');
insert into Geeks(id,name,age)values(7,'khushi',26);
select * from Geeks


create table sample(id int,age int constraint df default 10)
insert into sample(id) values(11)
select * from sample

alter table sample
drop constraint df
insert into sample(id) values(12)
select * from sample


insert into Geeks values(8,'Komal',24,'delhi');
insert into Geeks values(9,'Payal',26,'null');
select * from Geeks




create table student1
(
id int unique,
name varchar(10),
);
insert into student1 values(1,'amit')
insert into student1(name)values('amit1')
select * from student1

create table student2
(
id int unique,
rno int primary key,
name varchar(10),
);
insert into student2 values(1,11,'amit')
insert into student2(rno,name)values(12,'amit1')
select * from student2
insert into student2(name)values('amit1')


create table student3
(
id int primary key,
rno int unique,
aadarno dec(20,0) unique,
name varchar(10),
);
insert into student3
values(1,11,1234567890,'amit')
insert into student3
values(2,12,1234567890,'amita')


create table vendor_groups2(
group_id int primary key,
group_name varchar(100)not null
);

create table vendors4(
vendor_id int primary key,
vendor_name varchar(100)not null,
group_id int default 100,
constraint fk555 foreign key(group_id)
references
vendor_groups2(group_id)
on update set default
)

insert into vendor_groups2 values(1,'tcs1')

insert into vendors4 values(111,'mkpits',1)

insert into vedor_groups2 values(2,'tcs2')
insert into vendors4
values(112,'mkpits1',2)

update vendor_groups2 set group_id=22
where group_name='tcs1'

select * from vendors4
