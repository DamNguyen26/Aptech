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
        <form action="Update">
            ID: <input type="text" name="txtI" value="${s.id}" readonly="true"/><br/>
            Name: <input type="text" name="txtN"  value="${s.tenSach}"/><br/>
            Price: <input type="text" name="txtP" value="${s.price}"/><br/>
            Danh muc:
            <select name="selDm">
                <c:forEach items="${danhMucs}" var="dm">
                    <option ${s.danhMuc.id == dm.id ? 'selected' : ''} value="${dm.id}">${dm.name}</option>
                </c:forEach>
            </select>
            <br/>
            <input type="submit"/>
            <a href="ViewAll">Cancel</a>
        </form>
    </body>
</html>
