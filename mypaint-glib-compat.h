#ifndef MYPAINTGLIBCOMPAT_H
#define MYPAINTGLIBCOMPAT_H

#include <mypaint-config.h>

#if MYPAINT_CONFIG_USE_GLIB

#include <glib.h>

#else // not MYPAINT_CONFIG_USE_GLIB

/* From $INCLUDEPATH/glib-2.0/glib/gmacros.h */
#ifdef  __cplusplus
# define G_BEGIN_DECLS  extern "C" {
# define G_END_DECLS    }
#else
# define G_BEGIN_DECLS
# define G_END_DECLS
#endif

/* From $INCLUDEPATH/glib-2.0/glib/gtypes.h */
typedef char gchar;
typedef int gint;
typedef gint gboolean;

/* From $LIBPATH/glib-2.0/include/glibconfig.h */
typedef unsigned short guint16;

#endif // MYPAINT_CONFIG_USE_GLIB

#endif // MYPAINTGLIBCOMPAT_H
