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
            Name: <input type="text" name="txtN" value="${cookie.nameCok.value}"/>
            <br/>

            Address: <input type="text" name="txtA" value="${cookie.addrCok.value}"/>
            <br/>
            Phone No: <input type="text" name="txtP"  value="${cookie.phoneCok.value}"/>
            <br/>
            <input type="submit"/>
        </form>
    </body>
</html>
