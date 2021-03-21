<%-- 
    Document   : index
    Created on : 11-Jan-2021, 20:37:12
    Author     : duy.nn
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>
<!DOCTYPE html>
<c:set value="${param.lanDiep}" var="lanDiepDayHehehe" scope="session"/>
<fmt:setLocale value="${lanDiepDayHehehe}" scope="session"/>
<fmt:setBundle basename="ngonngu" var="bunHehe"/>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title><fmt:message key="tit" bundle="${bunHehe}"/></title>
    </head>
    <body>

        <a href="index.jsp">
            <fmt:message key="linEn" bundle="${bunHehe}"/>
        </a>&nbsp;&nbsp;
        <a href="index.jsp?lanDiep=vi_VN">
            <fmt:message key="linVi" bundle="${bunHehe}"/>
        </a>
        <br/>

        <form action="hien.jsp">
            <fmt:message key="lblName" bundle="${bunHehe}"/>
            <input type="text" name="txtN"/><br/>

            <fmt:message key="lblMoney" bundle="${bunHehe}"/>
            <input type="text" name="txtM"/><br/>

            <fmt:message key="lblDate" bundle="${bunHehe}"/>
            <input type="text" name="txtD"/><br/>

            <input type="submit" value='<fmt:message key="btnShow" bundle="${bunHehe}"/>'/>
        </form>
    </body>
</html>
