/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRAirportManager : XXUnknownSuperclass {
}
+ (id)_wirelessInterfaceNameForDeviceClient:(WiFiDeviceClient *)deviceClient;	// 0x33f6cd
+ (BOOL)associateWithNetwork:(id)network password:(id)password error:(id *)error;	// 0x340021
+ (void)checkAirportPower;	// 0x33f62d
+ (void)collectWirelessNetworks;	// 0x33f925
+ (void)collectWirelessNetworksWithSSID:(id)ssid;	// 0x33f945
+ (WiFiDeviceClient *)copyCurrentWiFiDeviceClient;	// 0x33f6e1
+ (BOOL)currentNetworkIsManaged;	// 0x33f76d
+ (id)currentWirelessBSSID;	// 0x33fee9
+ (int)currentWirelessChannel;	// 0x33fdd1
+ (BOOL)forgetCurrentNetworkWithError:(id *)error;	// 0x340469
+ (BOOL)forgetNetwork:(id)network error:(id *)error;	// 0x340525
+ (BOOL)forgetWiFiNetwork:(WiFiNetwork *)network error:(id *)error;	// 0x340565
+ (float)getCurrentRawWirelessSignalStrength;	// 0x33fcdd
+ (int)getCurrentWirelessSignalStrength;	// 0x33fd6d
+ (int)getCurrentWirelessSignalStrengthForMaxBars:(unsigned char)maxBars;	// 0x33fd8d
+ (void)initialize;	// 0x33f4a1
+ (BOOL)prepareNetworkIfKnown:(id)known;	// 0x33f865
+ (id)wirelessInterfaceName;	// 0x33f6bd
@end

