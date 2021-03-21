<%-- 
    Document   : list
    Created on : 06-Jan-2021, 21:21:24
    Author     : duy.nn
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
        <a href="new.jsp">new sach</a>
        <br/>
        <table>
            <tr>
                <th>ID</th>
                <th>Ten</th>
                <th>Gia tien</th>
                <th>Danh muc</th>
            </tr>
            <c:forEach items="${sachs}" var="s">
                <tr>
                    <td>${s.id}</td>
                    <td>${s.tenSach}</td>
                    <td><fmt:formatNumber value="${s.price}" type="currency"/></td>
                    <td>${s.danhMuc.name}</td>
                </tr>
            </c:forEach>
        </table>
    </body>
</html>
