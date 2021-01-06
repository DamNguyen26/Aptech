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
        <%--lay ve cookies = bien cookie trong $ va goi den "name" cua cookie va goi ham getValue. Nho la bo "get"chi lay "value--%>
        ${cookie.nameCok.value}<br/>
        ${cookie.addrCok.value}<br/>
        ${cookie.phoneCok.value}<br/>
        <br/>
        <a href="index.jsp">Ve di</a>
    </body>
</html>
