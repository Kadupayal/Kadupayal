create table vendor_groups(group_id int identity primary key,group_name varchar(100)not null);

create table vendors(vendor_id int identity primary key,vendor_name varchar(100) not null, group_id int not null);

select * from vendor_groups

insert into vendors(vendor_name,group_id)
values('amit',123)
select * from vendors
drop table vendors
create table vendors(vendor_id int identity primary key,vendor_name varchar(100)not null,group_id int not null,constraint fk_group foreign key(group_id) references vendor_groups(group_id));

select * from vendor_groups

insert into vendors(vendor_name,group_id)
values('amit',123)

insert into vendor_groups values('mkpits')
select * from vendor_groups 

insert into vendors(vendor_name,group_id)
values('amit',1)
select * from vendors
insert into vendors(vendor_name,group_id) values('arjun',2)

insert into vendor_groups values('niit')
select * from vendor_groups

insert into vendors(vendor_name,group_id)values('arjun',2)
select * from vendors 
insert into vendors(vendor_name,group_id)values('arpita',2)
select * from vendors
select * from vendor_groups
delete from vendor_groups where group_id=2
insert into vendor_groups
values('aptech')
select * from vendor_groups 

select * from vendors

delete from orders where orderid=1

insert into orders
values(2,'2022-9-7',102)
select * from orders

insert into orderdetails
values(2,'mouse',2)
select * from orderdetails

delete from orders where orderid=2

delete from orderdetails where orderid=2

delete from orders where orderid=2




drop table vendors
create table vendors(vendor_id int identity primary key, vendor_name varchar(100)not null, group_id int not null,constraint fk1 foreign key(group_id) references vendor_groups(goup_id) on delete no action)
insert into vendors values('amit',1)
delete from vendor_groups where group_id=1

drop table vendors
create table vendors(
vendor_id int identity primary key,
vendor_name varchar(100)not null,
group_id int not null,
constraint fk2 foreign key(group_id)
references 
vendor_groups(group_id)
on delete cascade
)
insert into vendors
values('amit',1)

select * from vendor_groups 

select * from vendors

delete from vendor_groups where group_id=1

select * from vendor_groups

select * from vendors

drop table vendors

create table vendors(
vendor_id int identity primary key,
vendor_name varchar(100) not null,
group_id int,
constraint fk3 foreign key(group_id)
references
vendor_groups(group_id)
on delete set null
)

insert into vendor_groups values(1,'tcs') 
insert into vendors values('amitabh',1)
delete from vendor_groups where group_id=1
select * from vendor_groups
select * from vendors

insert into vendor_groups values(1,'tcs')
insert into vendor_groups values(2,'tata')

insert into vendor_groups values(3,'ipt')

select * from vendor_groups

update vendor_groups set group_name='mkpits' 
where group_id=3

select * from vendor_groups

drop table vendors
CREATE TABLE vendors (
        vendor_id INT IDENTITY PRIMARY KEY,
        vendor_name VARCHAR(100) NOT NULL,
        group_id INT ,
        constraint fk4  foreign key(group_id)
        references vendor_groups(group_id)
        on update no action
        
        )
		insert into vendor_groups values('raisonic')
		select * from vendor_groups

		select * from vendors

	insert into vendors values('amit',4)
	select * from vendors
	select * from vendor_groups
	update vendor_groups set group_id=5 where group_id=4