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
        Lay value tu request = 2 cach<br/>
        <h1>Cach 1 request.getAttribute</h1>
        <%=request.getAttribute("idVal") %><br/>
        <%=request.getAttribute("nameVal") %><br/>
        <h1>Cach 2 dung $</h1>
        ${idVal}<br/>
        ${nameVal}<br/>
        
        <br/>
        
        <a href="index.jsp">Ve thoi</a>
    </body>
</html>
