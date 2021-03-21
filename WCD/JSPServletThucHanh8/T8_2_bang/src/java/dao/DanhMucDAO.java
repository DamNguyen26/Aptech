/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import java.util.List;
import javax.persistence.EntityManager;
import javax.persistence.Persistence;
import model.DanhMuc;

/**
 *
 * @author duy.nn
 */
public class DanhMucDAO {
    public List<DanhMuc> findAll(){
        EntityManager em = Persistence.createEntityManagerFactory("T8_2_bangPU").createEntityManager();
        String hql = String.format("select a from %s a", DanhMuc.class.getName());
        return em.createQuery(hql, DanhMuc.class)
                .getResultList();
    }
}
