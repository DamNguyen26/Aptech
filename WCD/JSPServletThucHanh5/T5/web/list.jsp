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
        <a href="new.jsp">New hoa don</a>
        <br/>
        <table>
            <tr>
                <th>ID</th>
                <th>Name</th>
                <th>Status</th>
                <th>Amount</th>
                <th>Amount2</th>
                <th>Create At</th>
            </tr>
            <c:forEach items="${hoaDons}" var="hd">
                <tr>
                    <td>${hd.id}</td>
                    <td>${hd.name}</td>
                    <td>${hd.status}</td>
                    <td>${hd.amount}</td>
                    <td>
                        <fmt:formatNumber value="${hd.amount}" type="currency"/>
                    </td>
                    <td>
                        ${hd.createdAt}
                    </td>
                </tr>
            </c:forEach>
        </table>
    </body>
</html>
