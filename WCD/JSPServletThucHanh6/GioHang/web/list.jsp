<%-- 
    Document   : list
    Created on : 30-Dec-2020, 13:34:21
    Author     : Administrator
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt" %>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
        <style>
            .item{
                margin-left: 5px;
                margin-top: 5px;
                width: 200px;
                border: 1px solid red;
                float: left;
            }
            .img_div {
                background: grey;
                float: left;
                width: 80px;
                height: 100px;
            }
            .info {
                margin-left: 81px;
            }
            .info ul li {
                padding: 0;
            }
            .info ul {
                list-style: none;
            }
        </style>
    </head>
    <body>
        <div style="border: 1px solid blue; margin-top:10px;">
            <a href="ClearCart">Cart:</a>
            <table>
            <c:forEach items="${gio}" var="g">
                    <tr>
                        <td>${g.value.name}</td>
                        <td><fmt:formatNumber value="${g.value.price}" type="currency"/></td>
                        <td>${g.value.soLuong}</td>
                        <td><fmt:formatNumber value="${g.value.soLuong*g.value.price}" type="currency"/></td>
                        <td>
                            <a href="Xoa?id=${g.key}">xoa</a>
                        </td>
                    </tr>
            </c:forEach>
                    </table>
        </div>
        <div>
            <c:forEach items="${sanPhams}" var="sp">
                <div class="item">
                    <div class="img_div">&nbsp;</div>
                    <div class="info">
                        <ul>
                            <li>${sp.name}</li>
                            <li>${sp.model}</li>
                            <li>${sp.price}</li>
                        </ul>
                            <a href="AddVaoGioHang?idsp=${sp.productId}">add 2 Cart</a>
                    </div>
                </div>
            </c:forEach>
        </div>
    </body>
</html>
