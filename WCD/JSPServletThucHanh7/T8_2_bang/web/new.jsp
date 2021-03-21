<%-- 
    Document   : list
    Created on : 06-Jan-2021, 21:21:24
    Author     : duy.nn
--%>

<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@page import="model.DanhMuc"%>
<%@page import="java.util.List"%>
<%@page import="dao.DanhMucDAO"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <%
            List<DanhMuc> list = new DanhMucDAO().findAll();
            pageContext.setAttribute("danhMucs", list);
        %>
        <form action="AddNew">
            ID: <input type="text" name="txtI"/><br/>
            Name: <input type="text" name="txtN"/><br/>
            Price: <input type="text" name="txtP"/><br/>
            Danh muc: 
            <select name="selDm">
                <c:forEach items="${danhMucs}" var="dm">
                    <option value="${dm.id}">${dm.name}</option>
                </c:forEach>
            </select>
            <br/>
            <input type="submit"/>
        </form>
    </body>
</html>
