<%-- 
    Document   : index
    Created on : 11-Jan-2021, 20:37:12
    Author     : duy.nn
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>
<!DOCTYPE html>
<fmt:setBundle basename="ngonngu" var="bunHehe"/>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title><fmt:message key="tit" bundle="${bunHehe}"/></title>
    </head>
    <body>

        <fmt:message key="lblName" bundle="${bunHehe}"/>: ${param.txtN}<br/>

        <fmt:message key="lblMoney" bundle="${bunHehe}"/>: 
        <fmt:parseNumber type="number" value="${param.txtM}" var="tien"/>
        <fmt:formatNumber type="currency" value="${tien}"/>
        <br/>

        <fmt:message key="lblDate" bundle="${bunHehe}"/>: 
        <fmt:parseDate type="date" pattern="dd-MM-yyyy" value="${param.txtD}" var="ngay"/>
        <fmt:formatDate type="date" value="${ngay}" dateStyle="long"/>
        <br/>
        
        <a href="index.jsp?lanDiep=${lanDiepDayHehehe}">
            <fmt:message key="btnBack" bundle="${bunHehe}"/>
        </a>
    </form>
</body>
</html>
