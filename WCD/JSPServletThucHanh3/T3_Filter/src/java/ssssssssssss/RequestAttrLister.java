/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ssssssssssss;

import javax.servlet.ServletRequestAttributeEvent;
import javax.servlet.ServletRequestAttributeListener;

/**
 * Web application lifecycle listener.
 *
 * @author std
 */
public class RequestAttrLister implements ServletRequestAttributeListener {

    @Override
    public void attributeAdded(ServletRequestAttributeEvent srae) {
        System.out.println("attributeAdded: " +srae.getName()+": "+ srae.getValue() );
    }

    @Override
    public void attributeRemoved(ServletRequestAttributeEvent srae) {
        System.out.println("attributeRemoved: " +srae.getName()+": "+ srae.getValue() );
    }

    @Override
    public void attributeReplaced(ServletRequestAttributeEvent srae) {
        System.out.println("attributeReplaced: " +srae.getName()+": "+ srae.getValue() );
    }
}
