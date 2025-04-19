#include <gtk/gtk.h>

// Callback d'activation : création de la fenêtre
static void
activate (GtkApplication *app, gpointer user_data)
{
    GtkWidget *window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (window), "Ma première fenêtre GTK");
    gtk_window_set_default_size (GTK_WINDOW (window), 400, 200);

    // Remplace gtk_widget_show(window)
    gtk_window_present (GTK_WINDOW (window));
}

int
main (int argc, char **argv)
{
    GtkApplication *app;
    int status;

    // Remplace G_APPLICATION_FLAGS_NONE
    app = gtk_application_new ("com.mondomaine.MonApp",
                               G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);

    status = g_application_run (G_APPLICATION (app), argc, argv);
    g_object_unref (app);
    return status;
}
