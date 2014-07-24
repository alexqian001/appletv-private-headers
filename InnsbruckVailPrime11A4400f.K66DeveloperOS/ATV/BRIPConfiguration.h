/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface BRIPConfiguration : XXUnknownSuperclass {
	NSString *_wirelessNetwork;	// 4 = 0x4
	NSString *_wirelessMACAddress;	// 8 = 0x8
	NSString *_wirelessIPAddress;	// 12 = 0xc
	NSString *_wirelessSubnetMask;	// 16 = 0x10
	NSString *_wirelessRouter;	// 20 = 0x14
	NSArray *_wirelessDNSAddresses;	// 24 = 0x18
	NSString *_wiredMACAddress;	// 28 = 0x1c
	NSString *_wiredIPAddress;	// 32 = 0x20
	NSString *_wiredSubnetMask;	// 36 = 0x24
	NSString *_wiredRouter;	// 40 = 0x28
	NSArray *_wiredDNSAddresses;	// 44 = 0x2c
	unsigned _wirelessUseDHCP : 1;	// 48 = 0x30
	BOOL _wirelessUseManualDNS;	// 49 = 0x31
	unsigned _wirelessActive : 1;	// 50 = 0x32
	unsigned _wiredUseDHCP : 1;	// 50 = 0x32
	BOOL _wiredUseManualDNS;	// 51 = 0x33
	unsigned _wiredActive : 1;	// 52 = 0x34
}
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x40d305; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x40d331
+ (void)_pushWirelessUsageValues;	// 0x40d595
+ (void)clearCachedNetworkStates;	// 0x40c5e1
+ (id)currentConfiguration;	// 0x40cced
+ (BOOL)internetAvailable;	// 0x40c745
+ (BOOL)internetServerReachable:(id)reachable;	// 0x40c94d
+ (id)ipAddressesForHostName:(id)hostName;	// 0x40c9d5
+ (BOOL)networkAvailable;	// 0x40c5f5
+ (CFDictionaryRef)proxiesDictionaryRef;	// 0x40cb15
+ (void)startMonitoringNetworkChanges;	// 0x40caf9
+ (BOOL)usingWireless;	// 0x40c8cd
- (id)initFromCurrentConfiguration;	// 0x40cbf5
- (id)IPaddressForInterface:(int)interface;	// 0x40d275
- (id)MACAddressForActiveInterface;	// 0x40d249
- (id)MACaddressForInterface:(int)interface;	// 0x40d225
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x40dd85
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x40d639
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x40da11
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x40df01
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x40de8d
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x40e0a9
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x40e23d
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x40e115
- (BOOL)_usesManualDNSForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x40dd0d
- (void)dealloc;	// 0x40cd35
- (id)description;	// 0x40ce4d
- (id)dnsAddressesForInterface:(int)interface;	// 0x40d2e1
- (BOOL)isActiveForInterface:(int)interface;	// 0x40d1ad
- (id)routerForInterface:(int)interface;	// 0x40d2bd
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x40d02d
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x40d161
- (void)setUseDHCPForInterface:(int)interface;	// 0x40cfd9
- (void)setUseManualDNSForInterface:(int)interface;	// 0x40d009
- (id)subnetMaskForInterface:(int)interface;	// 0x40d299
- (BOOL)useDHCPForInterface:(int)interface;	// 0x40d1d5
- (BOOL)useManualDNSForInterface:(int)interface;	// 0x40d201
// converted property getter: - (id)wirelessNetwork;	// 0x40d305
- (long)wirelessSignalQuality;	// 0x40d315
@end
