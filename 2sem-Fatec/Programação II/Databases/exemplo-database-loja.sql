create database loja_db;
go

create table produto (
codProd integer not null primary key,
dsProd varchar (50) not null,
saldo integer,
sldMin integer,
prvenda numeric (10,2),
prcusto numeric (10,2)
);

select * from produto
go

insert into produto (codprod, dsprod,saldo,sldmin,prvenda,prcusto)
values (101, 'sabão em pedra', 1470, 200, 1.87,0.95)
go

insert into produto
values (102, 'papel toalha', 109, 300, 5.75,3.10)
go

insert into produto
values (203, 'frigideira', 0, 20, 18.50,5.00),
(478, 'guardanapo', 470,100,1.80,0.20),
(495, 'alvejante ipe',3200,3000,2.76,1.20)
go

--ordem alfabética
select dsprod, prvenda from produto order by dsprod; 

--ordem decrescente
select dsprod, prvenda from produto order by dsprod desc; 