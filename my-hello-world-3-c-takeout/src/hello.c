#include <gtk/gtk.h>

int main(int argc, char **argv)
{
	gtk_init(0, NULL);

	GtkWindow *wnd = (GtkWindow *) gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(wnd, "My Application");
	g_signal_connect((GtkWidget *) wnd, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	gtk_widget_show((GtkWidget *) wnd);

	gtk_main();
	return 0;
}
