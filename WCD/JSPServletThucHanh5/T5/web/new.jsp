<%-- 
    Document   : list
    Created on : Dec 28, 2020, 8:38:14 PM
    Author     : duynn5
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <form action="AddNew">
            ID: <input type="text" name="txtI"/><br/>
            Name: <input type="text" name="txtN"/><br/>
            Status: 
            <select name="selS">
                <option>INIT</option>
                <option>FAIL</option>
                <option>SUCCESS</option>
            </select>
            Amount: <input type="text" name="txtA"/><br/>
            <input type="submit"/>
        </form>
    </body>
</html>
