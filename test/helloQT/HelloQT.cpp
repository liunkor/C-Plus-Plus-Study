    #include <qapplication.h>  
    #include <qlabel.h>  
    int main(int argc,char *argv[])  
    {  
        QApplication app(argc,argv);  
        QLabel *label = new QLabel("Hello Qt!", 0);  
        label->show();  
        app.setMainWidget(label);
		return app.exec();  
    }  
