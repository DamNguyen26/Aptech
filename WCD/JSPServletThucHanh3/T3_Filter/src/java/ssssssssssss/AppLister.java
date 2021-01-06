/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ssssssssssss;

import javax.servlet.ServletContextEvent;
import javax.servlet.ServletContextListener;

/**
 * Web application lifecycle listener.
 *
 * @author std
 */
public class AppLister implements ServletContextListener {

    @Override
    public void contextInitialized(ServletContextEvent sce) {
        System.out.println("hehehe, uwng dung duoc start roi");
    }

    @Override
    public void contextDestroyed(ServletContextEvent sce) {
        System.out.println("bye...., shutdown day");
    }
}
