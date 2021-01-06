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
        <form action="XuLy">
            Name: <input type="text" name="txtN" value="${stu.name}"/>
            <span class="loi">${nameErr}</span>                
            <br/>

            Address: <input type="text" name="txtA" value="${stu.addr}"/>
            <span class="loi">${addrErr}</span>
            <br/>
            Phone No: <input type="text" name="txtP"  value="${stu.phoneNo}"/>
            <span class="loi">${phoneErr}</span>
            <br/>
            <input type="submit"/>
        </form>
    </body>
</html>
