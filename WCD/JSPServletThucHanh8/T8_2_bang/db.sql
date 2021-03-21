create table t_danh_muc(id varchar(10) primary key, _name varchar(50));
create table t_sach(id varchar(10) primary key, ten_sach varchar(50), price float, id_danh_muc varchar(10), foreign key(id_danh_muc) references t_danh_muc(id));

insert into t_danh_muc(id, _name) values
    ('DM01', 'Tin hoc'),
    ('DM02', 'Van hoc');
insert into t_sach(id, ten_sach, price, id_danh_muc) values
    ('S0011', 'Lap trinh java', 100000, 'DM01'),
    ('S0012', 'Lap trinh java web', 120000, 'DM01'),
    ('S0013', 'Chi Phep', 120000, 'DM02');
