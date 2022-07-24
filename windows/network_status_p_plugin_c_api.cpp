#include "include/network_status_p/network_status_p_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "network_status_p_plugin.h"

void NetworkStatus_pPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  network_status_p::NetworkStatus_pPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
