create table Users(
	UserID int	PRIMARY KEY IDENTITY(1,1) not null,
	Username varchar(20),
	Passwords varchar(30),
	Email Varchar(30) unique check (email LIKE '%_@__%.__%'),
	Addresses nvarchar(200)
)
create table Posts(
	PostID Int primary key ,
	Title nvarchar(200),
	Content nvarchar(500),
	Tag nvarchar(100),
	Statuss Bit,
	CreateTime datetime,
	UpdateTime datetime,
	UserID  int not null foreign key references Users(UserID)
)
create table Comments(
	CommentID int primary key ,
	Content nvarchar(500),
	Statuss bit,
	CreateTime datetime,
	Author nvarchar(30),
	Email varchar(50) not null check (email LIKE '%_@__%.__%'),
	PostID int foreign key references Posts(PostID)
)
CREATE NONCLUSTERED INDEX IX_UserName
ON Users(Username);
SET IDENTITY_INSERT Posts OFF
insert into Users (UserID,UserID,Passwords,Email,Addresses) values(1,'minh','123','123@gmail.com','HN')
insert into Users (UserID,UserID,Passwords,Email,Addresses) values(2,'minhs','123','123s@gmail.com','HNs')
insert into Users (UserID,UserID,Passwords,Email,Addresses) values(3,'minhs','123','123ss@gmail.com','HNss')

insert into Posts (PostID,Title,Content,Tag,Statuss,CreateTime,UpdateTime,UserID) values(1,'hi','hello','xinchao',0,28-07-2022,28-07-2022,1)
insert into Posts (PostID,Title,Content,Tag,Statuss,CreateTime,UpdateTime,UserID) values(2,'his','hellos','xinchaos',1,28-07-2022,28-07-2022,2)
insert into Posts (PostID,Title,Content,Tag,Statuss,CreateTime,UpdateTime,UserID) values(3,'hiss','helloss','xinchaoss',1,28-07-2022,28-07-2022,3)
SET IDENTITY_INSERT [dbo].[Posts] ON

insert into Comments(CommentID,Content,Statuss,CreateTime,Author,Email,PostID) values (1,'hello',1,28-07-2022,'Minh','123@gmail.com',1)
insert into Comments(CommentID,Content,Statuss,CreateTime,Author,Email,PostID) values (2,'hellos',1,28-07-2022,'Minhs','123s@gmail.com',2)
insert into Comments(CommentID,Content,Statuss,CreateTime,Author,Email,PostID) values (3,'hellosss',1,28-07-2022,'Minhss','123ss@gmail.com',3)
select *from Posts where Tag='Social'