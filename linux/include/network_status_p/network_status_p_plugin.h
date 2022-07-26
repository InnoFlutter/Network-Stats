#ifndef FLUTTER_PLUGIN_NETWORK_STATUS_P_PLUGIN_H_
#define FLUTTER_PLUGIN_NETWORK_STATUS_P_PLUGIN_H_

#include <flutter_linux/flutter_linux.h>

G_BEGIN_DECLS

#ifdef FLUTTER_PLUGIN_IMPL
#define FLUTTER_PLUGIN_EXPORT __attribute__((visibility("default")))
#else
#define FLUTTER_PLUGIN_EXPORT
#endif

typedef struct _NetworkStatus_pPlugin NetworkStatus_pPlugin;
typedef struct {
  GObjectClass parent_class;
} NetworkStatus_pPluginClass;

FLUTTER_PLUGIN_EXPORT GType network_status_p_plugin_get_type();

FLUTTER_PLUGIN_EXPORT void network_status_p_plugin_register_with_registrar(
    FlPluginRegistrar* registrar);

G_END_DECLS

#endif  // FLUTTER_PLUGIN_NETWORK_STATUS_P_PLUGIN_H_
