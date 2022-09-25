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
