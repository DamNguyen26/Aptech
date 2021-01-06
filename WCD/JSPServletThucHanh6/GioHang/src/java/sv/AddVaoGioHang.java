/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sv;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.persistence.EntityManager;
import javax.persistence.Persistence;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import model.SanPham;

/**
 *
 * @author Administrator
 */
@WebServlet(name = "AddVaoGioHang", urlPatterns = {"/AddVaoGioHang"})
public class AddVaoGioHang extends HttpServlet {

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
        EntityManager em = Persistence.createEntityManagerFactory("GioHangPU").createEntityManager();

        // lay trong session xem co gio hang khong
        //neu co, lay ve, neu chua co thi tao moi va add vao session
        HttpSession session = request.getSession(true);
        Map<Integer, Item> gioHang = (Map<Integer, Item>) session.getAttribute("gio");
        if (gioHang == null) {
            gioHang = new HashMap<>();
            session.setAttribute("gio", gioHang);
        }
//        add gio hang				
//	kiem tra da ton tai			
//		CHUA	add vao cart	
//		DA	tang so luong	

//	
        int id = Integer.parseInt(request.getParameter("idsp"));
        if (!gioHang.containsKey(id)) {
            SanPham sp = em.find(SanPham.class, id);

            Item item = new Item();
            item.setName(sp.getName());
            item.setPrice(sp.getPrice());
            item.setSoLuong(1);

            gioHang.put(id, item);
        } else {
            Item it = gioHang.get(id);
            it.setSoLuong(it.getSoLuong() + 1);
        }

        response.sendRedirect("ViewAll");

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

}
