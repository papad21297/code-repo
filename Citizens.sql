CREATE TABLE tb_ClassRoom (
    ClassID VARCHAR(10) PRIMARY KEY,
    ClassNO VARCHAR(10),
    ClassFloor INT,
    ClassBuilding VARCHAR(5),
    ClassName VARCHAR(20)
);

INSERT INTO tb_ClassRoom (ClassID, ClassNO, ClassFloor, ClassBuilding, ClassName)
VALUES
    ('A101', '101', 1, 'A', 'A101 Bd. A'),
    ('A102', '102', 1, 'A', 'A102 Bd. A'),
    ('A201', '201', 2, 'A', 'A201 Bd. A'),
    ('A202', '202', 2, 'A', 'A202 Bd. A'),
    ('B101', '101', 1, 'B', 'B101 Bd. B'),
    ('B102', '102', 1, 'B', 'B102 Bd. B'),
    ('B201', '201', 2, 'B', 'B201 Bd. B'),
    ('B202', '201', 2, 'B', 'B201 Bd. B');

CREATE TABLE tb_DayOfWeek (
    ID INT PRIMARY KEY,
    DayName VARCHAR(20)
);

INSERT INTO tb_DayOfWeek (ID, DayName)
VALUES
    (1, 'Sunday'),
    (2, 'Monday'),
    (3, 'Tuesday'),
    (4, 'Wednesday'),
    (5, 'Thursday'),
    (6, 'Friday'),
    (7, 'Saturday');

CREATE TABLE tb_Teacher (
    ID VARCHAR(20) PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    AddressDetail VARCHAR(200),
    Tel VARCHAR(20),
    Email VARCHAR(100)
);

INSERT INTO tb_Teacher (ID, FirstName, LastName, Age, AddressDetail, Tel, Email)
VALUES
    ('T00001', 'Somsri', 'PoolSung', 21, 'Nonthaburi Thailand', '123456789',
        'somsri@Test.com'),
    ('T00002', 'Sommai', 'Jaidi', 49, 'Chiangmai Thailand', '987654321',
        'sommai@Test.com'),
    ('T00003', 'Jaingam', 'Made', 50, 'Lamphun Thailand', '1122334455',
        'Jaingam@Test.com'),
    ('T00004', 'Manop', 'Makpool', 30, 'Surat thani Thailand', '882223333',
        'Mapmop@Test.com');

CREATE TABLE tb_ClassRoomMapping (
    MappingID VARCHAR(20) PRIMARY KEY,
    FOREIGN KEY (ClassID) REFERENCES tb_ClassRoom(ClassID),
    FOREIGN KEY (TeacherID) REFERENCES tb_Teacher(ID),
    FOREIGN KEY (DayOfWeekval) REFERENCES tb_DayOfWeek(ID),
    TimeRange VARCHAR(20),
    StudentCount INT,
);

INSERT INTO tb_ClassRoomMapping (MappingID, ClassID, TeacherID, DayOfWeekval, TimeRange,
    StudentCount)
VALUES
    ('Mp0001', 'A101', 'T0001', 2, '08.00-12.00', 34),
    ('Mp0002', 'B101', 'T0003', 2, '08.00-12.00', 40),
    ('Mp0003', 'B202', 'T0004', 3, '13.00-16.00', 32),
    ('Mp0004', 'A102', 'T0002', 4, '08.00-12.00', 21),
    ('Mp0005', 'B201', 'T0003', 4, '08.00-12.00', 24),
    ('Mp0006', 'B201', 'T0004', 4, '13.00-16.00', 56),
    ('Mp0008', 'B101', 'T0002', 5, '08.00-12.00', 44),
    ('Mp0009', 'A202', 'T0001', 6, '13.00-16.00', 50);
