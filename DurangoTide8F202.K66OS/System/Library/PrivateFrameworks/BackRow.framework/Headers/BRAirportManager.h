/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRAirportManager : NSObject {
}
+ (BOOL)associateWithNetwork:(id)network password:(id)password error:(id *)error;	// 0x3298216d
+ (void)checkAirportPower;	// 0x32981c19
+ (void)collectWirelessNetworks;	// 0x32981bf9
+ (void)collectWirelessNetworksWithSSID:(id)ssid;	// 0x32981d4d
+ (id)currentWirelessBSSID;	// 0x329820c9
+ (int)currentWirelessChannel;	// 0x32982049
+ (void)forgetCurrentNetworkWithError:(id *)error;	// 0x32981f0d
+ (void)forgetNetwork:(id)network error:(id *)error;	// 0x32981ba1
+ (void)forgetWiFiNetwork:(WiFiNetwork *)network error:(id *)error;	// 0x32982551
+ (float)getCurrentRawWirelessSignalStrength;	// 0x32981f8d
+ (int)getCurrentWirelessSignalStrength;	// 0x32981bd9
+ (int)getCurrentWirelessSignalStrengthForMaxBars:(unsigned char)maxBars;	// 0x32982001
+ (void)initialize;	// 0x32981901
@end

