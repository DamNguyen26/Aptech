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
        <a href="new.jsp">New student</a>
        <c:if test="${empty sinhviens}">Huuuuuu</c:if>
        <c:if test="${not empty sinhviens}">
            <table>
                <tr>
                    <th>ID</th>
                    <th>Name</th>
                    <th>Xoa</th>
                    <th>Edit</th>
                </tr>

                <c:forEach items="${sinhviens}" var="sv">
                    <tr>
                        <td>${sv.id}</td>
                        <td>${sv.name}</td>
                        <td><a href="Xoa?iddddddd=${sv.id}">Xoa di</a></td>
                        <td><a href="ChuanBiData4Update?iddddddd=${sv.id}">Xoa di</a></td>
                    </tr>
                </c:forEach>
            </table>
        </c:if>
    </body>
</html>
