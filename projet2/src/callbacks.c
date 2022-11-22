#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"



int x ;
int choix[]={0,0}; 







void
on_is_ajout_radiobutton_h_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{x=1;}
}


void
on_is_ajout_radiobutton_f_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
{x=2;}
}


void
on_is_ajout_button_natt_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
{choix[1]=1;}
}


void
on_is_ajout_button_nata_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
{choix[0]=1;}
}


void
on_is_ajout_button_ajout_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_is_mod_button_che_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_is_mod_radiobutton_h_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_is_mod_checkbutton_natt_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_is_mod_checkbutton_nata_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_is_mod_radiobutton_f_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_is_mod_button_mod_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_is_supp_tree_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_is_che_button_cher_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button29_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_mo_ajouter_radiobutton_1_toggled    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_mo_ajouter_radiobutton_2_toggled    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_mo_ajouter_button_ajouter_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_mo_mod_radiobutton_1_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_mo_mod_radiobutton_2_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_mo_mod_checkbutton_oui_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_mo_mod_button_mod_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_mo_sup_treeview_row_activated       (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_mo_rech_button_cher_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}

