<%-- 
    Document   : index
    Created on : 06-Jan-2021, 20:37:15
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
        <%
            out.print("Name:     " + request.getParameter("txtN"));
            out.println("<br/>");
            out.print("Address:     " + request.getParameter("txtA"));
            out.println("<br/>");
        %>
        Ho va ten: ${param.txtN}<br/>
        Dia chi: ${param.txtA}<br/>
        
    </body>
</html>
