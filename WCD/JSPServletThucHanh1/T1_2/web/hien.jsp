<%-- 
    Document   : index
    Created on : Dec 14, 2020, 7:40:48 PM
    Author     : duy.nn
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <%--
goi  myDataHeheeeeeeeeeeee.getId(), myDataHeheeeeeeeeeeee.getName()xxxxx nhung bo chu "get" di, va cho ky tu dau tien nho lai
myDataHeheeeeeeeeeeee.getId() --> myDataHeheeeeeeeeeeee.Id() --> myDataHeheeeeeeeeeeee.id
        --%>
        ${myDataHeheeeeeeeeeeee.id}<br/>
        ${myDataHeheeeeeeeeeeee.name}<br/>
        ${myDataHeheeeeeeeeeeee.phoneNo}<br/>
        
        <br/>
        
        <a href="index.jsp">Ve thoi</a>
    </body>
</html>
