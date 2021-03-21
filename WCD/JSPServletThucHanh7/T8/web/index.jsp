<%-- 
    Document   : index
    Created on : 06-Jan-2021, 20:37:15
    Author     : duy.nn
--%>

<%@page import="model.Student"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <form action="hien.jsp">
            Name: <input type="text" name="txtN"/><br/>
            Address: <input type="text" name="txtA"/><br/>
            <input type="submit"/>

            <%
                Student stu = new Student();
                stu.setName("Tien Tung");
                stu.setRollNo("S0011");
            %>
            Ma sv: <%=stu.getRollNo()%>
            Ten sv: <%=stu.getName()%>
            <hr/>

            <jsp:useBean class="model.Student" id="sv" scope="request"/>
            <jsp:setProperty name="sv" property="rollNo" value="S00000000000000011111"/>
            <jsp:setProperty name="sv" property="name" value="Ho Van Cuong"/>
            
            <jsp:getProperty name="sv" property="rollNo"/>
            <jsp:getProperty name="sv" property="name"/>
            </form>
        </body>
    </html>
