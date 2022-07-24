//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <network_status_p/network_status_p_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) network_status_p_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "NetworkStatus_pPlugin");
  network_status_p_plugin_register_with_registrar(network_status_p_registrar);
}
