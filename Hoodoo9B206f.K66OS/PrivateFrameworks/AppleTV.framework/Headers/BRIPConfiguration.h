/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface BRIPConfiguration : NSObject {
@private
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
	unsigned _wirelessActive : 1;	// 48 = 0x30
	unsigned _wiredUseDHCP : 1;	// 48 = 0x30
	unsigned _wiredActive : 1;	// 48 = 0x30
}
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x36768c79; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x36768ca5
+ (void)_pushWirelessUsageValues;	// 0x36768ed5
+ (id)currentConfiguration;	// 0x367686b9
+ (BOOL)internetAvailable;	// 0x367682c1
+ (BOOL)internetServerReachable:(id)reachable;	// 0x3676834d
+ (id)ipAddressesForHostName:(id)hostName;	// 0x367683a1
+ (BOOL)networkAvailable;	// 0x36768195
+ (BOOL)networkTimeIsApproximatelyCorrect;	// 0x367684f5
+ (BOOL)receivedNTPClockSetNotification;	// 0x36768495
+ (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x367684a5
+ (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x367684c5
+ (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x367684e5
+ (BOOL)showedNetworkTimeDialog;	// 0x367684b5
+ (void)startMonitoringNetworkChanges:(BOOL)changes;	// 0x36768569
+ (BOOL)userDismissedNetworkTimeDialog;	// 0x367684d5
- (id)initFromCurrentConfiguration;	// 0x367685bd
- (id)IPaddressForInterface:(int)interface;	// 0x36768bf9
- (id)MACaddressForInterface:(int)interface;	// 0x36768bd9
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x367695b5
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x36768f75
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x367692ed
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x3676971d
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x367696a9
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x36769865
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x367699f9
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x367698d1
- (void)dealloc;	// 0x36768701
- (id)description;	// 0x36768815
- (id)dnsAddressesForInterface:(int)interface;	// 0x36768c59
- (BOOL)isActiveForInterface:(int)interface;	// 0x36768b79
- (id)routerForInterface:(int)interface;	// 0x36768c39
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x367689d5
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x36768b0d
- (void)setUseDHCPForInterface:(int)interface;	// 0x367689a9
- (id)subnetMaskForInterface:(int)interface;	// 0x36768c19
- (BOOL)useDHCPForInterface:(int)interface;	// 0x36768ba9
// converted property getter: - (id)wirelessNetwork;	// 0x36768c79
- (long)wirelessSignalQuality;	// 0x36768c89
@end

