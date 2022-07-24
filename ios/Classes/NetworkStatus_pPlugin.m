#import "NetworkStatus_pPlugin.h"
#if __has_include(<network_status_p/network_status_p-Swift.h>)
#import <network_status_p/network_status_p-Swift.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "network_status_p-Swift.h"
#endif

@implementation NetworkStatus_pPlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  [SwiftNetworkStatus_pPlugin registerWithRegistrar:registrar];
}
@end
