/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ssssssssssss;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author std
 */
@WebServlet(name = "XuLy", urlPatterns = {"/XuLy"})
public class XuLy extends HttpServlet {

    /**
     * Processes requests for both HTTP <code>GET</code> and <code>POST</code>
     * methods.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String name = request.getParameter("txtN");
        String addr = request.getParameter("txtA");
        String phone = request.getParameter("txtP");

        Student stu = new Student();
        stu.setAddr(addr);
        stu.setName(name);
        stu.setPhoneNo(phone);
        request.setAttribute("stu", stu);
        request.setAttribute("stu", stu);

        if (isOk(stu, request)) {
            request.getRequestDispatcher("/hien.jsp").forward(request, response);
        } else {
            request.getRequestDispatcher("/index.jsp").forward(request, response);
        }
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /**
     * Handles the HTTP <code>GET</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Handles the HTTP <code>POST</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

    private boolean isOk(Student stu, HttpServletRequest request) {
        boolean ok = true;
        if(stu.getName() == null || stu.getName().isEmpty()){
            request.setAttribute("nameErr", "name khong co a");
            ok = false;
        }
        if(stu.getAddr()== null || stu.getAddr().isEmpty()){
            request.setAttribute("addrErr", "address khong co a");
            ok = false;
        }
        if(stu.getPhoneNo() == null || stu.getPhoneNo().isEmpty()){
            request.setAttribute("phoneErr", "phonekhong co a");
            ok = false;
        }
        
        return ok;
    }

}
