

Select Name , ID from Customer orderby Name asc , ID dsc ;



SELECT ID, Name,
CASE
    WHEN Marks > 90 THEN 'A+'
    WHEN Marks > 70 THEN 'A'
WHEN Marks > 50 THEN 'B'
WHEN Marks >= 40 THEN 'C'
    ELSE 'The quantity is under 30'
END AS GRADE
FROM Students;
