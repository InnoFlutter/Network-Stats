#ifndef FLUTTER_PLUGIN_NETWORK_STATUS_P_PLUGIN_H_
#define FLUTTER_PLUGIN_NETWORK_STATUS_P_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace network_status_p {

class NetworkStatus_pPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  NetworkStatus_pPlugin();

  virtual ~NetworkStatus_pPlugin();

  // Disallow copy and assign.
  NetworkStatus_pPlugin(const NetworkStatus_pPlugin&) = delete;
  NetworkStatus_pPlugin& operator=(const NetworkStatus_pPlugin&) = delete;

 private:
  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace network_status_p

#endif  // FLUTTER_PLUGIN_NETWORK_STATUS_P_PLUGIN_H_
