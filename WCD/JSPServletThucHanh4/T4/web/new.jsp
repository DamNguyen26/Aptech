<%-- 
    Document   : view
    Created on : 21-Dec-2020, 13:29:35
    Author     : std
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib  prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <a href="ViewAll">Cancel</a>
        <br/>
        
        ${loi}
        <form action="AddNew">
            ID: <input type="text" name="txtI"/><br/>
            Name: <input type="text" name="txtN"/><br/>
            <input type="submit"/>
        </form>
    </body>
</html>
