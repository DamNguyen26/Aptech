///*
// * To change this license header, choose License Headers in Project Properties.
// * To change this template file, choose Tools | Templates
// * and open the template in the editor.
// */
//package ssssssssssss;
//
//import java.io.IOException;
//import javax.servlet.Filter;
//import javax.servlet.FilterChain;
//import javax.servlet.FilterConfig;
//import javax.servlet.ServletException;
//import javax.servlet.ServletRequest;
//import javax.servlet.ServletResponse;
//import javax.servlet.annotation.WebFilter;
//import javax.servlet.http.HttpServletRequest;
//import javax.servlet.http.HttpServletResponse;
//
///**
// *
// * @author std
// */
//@WebFilter(filterName = "LoggingFilter", urlPatterns = {"/*"})
//public class LoggingFilter implements Filter {
//
//    @Override
//    public void init(FilterConfig filterConfig) throws ServletException {
//    }
//
//    @Override
//    public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain) throws IOException, ServletException {
//        long start = System.currentTimeMillis();
//        HttpServletRequest rq = (HttpServletRequest) request;
//        System.out.println("start.....");
//        if (rq.getParameter("me") != null) {
//            chain.doFilter(request, response);
//        } else {
//            HttpServletResponse res = (HttpServletResponse) response;
////            res.getWriter().write("khong duoc vao day, huuuuuu");
//            res.sendRedirect("login.jsp?me=hhhhh");
//        }
//
//        System.out.println("end.....L:::::  " + (System.currentTimeMillis() - start));
//    }
//
//    @Override
//    public void destroy() {
//    }
//
//}
