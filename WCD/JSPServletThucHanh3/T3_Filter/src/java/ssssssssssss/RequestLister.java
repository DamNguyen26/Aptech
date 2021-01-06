/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ssssssssssss;

import javax.servlet.ServletRequestEvent;
import javax.servlet.ServletRequestListener;

/**
 * Web application lifecycle listener.
 *
 * @author std
 */
public class RequestLister implements ServletRequestListener {

    @Override
    public void requestDestroyed(ServletRequestEvent sre) {
        System.out.println("request bi HUY");
    }

    @Override
    public void requestInitialized(ServletRequestEvent sre) {
        System.out.println("request duoc tao");
    }
}
