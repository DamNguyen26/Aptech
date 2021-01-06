<%-- 
    Document   : index
    Created on : 16-Dec-2020, 13:42:25
    Author     : std
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
        <style>
            .loi {
                color:red;
            }
        </style>
    </head>
    <body>
        Name: ${stu.name}<br/>
        Dia chi ${stu.addr}<br/>
        So dt: ${stu.phoneNo}<br/>
        <br/>
        <a href="index.jsp">Ve di</a>
    </body>
</html>
