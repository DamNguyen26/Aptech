
drop table t_order;
create table t_order
(
    id         varchar(50) primary key,
    order_name varchar(100),
    order_status enum('INIT', 'SUCCESS', 'FAIL'),
    create_at datetime,
    amount float
);
insert into t_order(id, order_name, order_status, amount, create_at) values
    ('o00011111', 'tap hoa', 'INIT', 100000, now()),
    ('o00011112', 'tap hoa 22', 'FAIL', 200000, now());

select * from t_order;