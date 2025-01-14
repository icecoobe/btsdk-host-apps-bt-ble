/*
 * Copyright 2016-2021, Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
 *
 * This software, including source code, documentation and related
 * materials ("Software") is owned by Cypress Semiconductor Corporation
 * or one of its affiliates ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products.  Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */

/*
 * App main
 */
#include "app_include.h"
#include "mainwindow.h"
#include <QApplication>
#include <QFont>

// App main
int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_Use96Dpi);

    QApplication a(argc, argv);

    QFont font = qApp->font();
    font.setPixelSize(11);
    qApp->setFont(font);


    MainWindow w;

    // parse command line args
    // -c <port name>
    // -b <baud rate>
    // -s enable scripting
    QStringList args = a.arguments();
    int num_args = args.count();
    for(int i =1; i < num_args; i++)
    {
        QString str = args.at(i);

        if (str == "-s")
            w.scripting = true;

        if(str == "-c")
        {
            w.str_cmd_port = args.at(i+1);
        }
        if(str == "-b")
        {
            w.str_cmd_baud = args.at(i+1);
        }
        if(str == "-i")
        {
            w.iSpyInstance = args.at(i+1).toInt();
        }
        if(str == "-ip")
        {
            if(args.at(i+1) != NULL && num_args > 2)
                w.str_cmd_ip_addr = args.at(i+1);
            else
                w.str_cmd_ip_addr = "127.0.0.1";
        }
    }

    w.show();

    return a.exec();
}
