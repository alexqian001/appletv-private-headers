/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library
#import "SSDownloadQueueObserver.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver> {
	NSString *_dataStatusIndicator;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	BOOL _isCellularRestricted;	// 12 = 0xc
	double _lastNetworkTypeChangeTime;	// 16 = 0x10
	int _networkUsageCount;	// 24 = 0x18
	int _networkType;	// 28 = 0x1c
	NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
	NSMutableSet *_observedDownloadQueues;	// 36 = 0x24
	NSString *_operatorName;	// 40 = 0x28
	SCNetworkReachabilityRef _reachability;	// 44 = 0x2c
	NSString *_registrationStatus;	// 48 = 0x30
	CTServerConnectionRef _telephonyServer;	// 52 = 0x34
}
@property(readonly, assign) NSString *connectionTypeHeader;	// G=0x36935a9d; 
@property(readonly, assign) NSString *dataStatusIndicator;	// G=0x36936219; 
@property(readonly, assign) double lastNetworkTypeChangeTime;	// G=0x36935fe1; 
@property(readonly, assign) NSString *modemRegistrationStatus;	// G=0x36936411; 
@property(assign) int networkType;	// G=0x369360d9; S=0x3693685d; 
@property(readonly, assign) NSString *operatorName;	// G=0x369365f1; 
@property(readonly, assign) BOOL shouldShowCellularAutomaticDownloadsSwitch;	// G=0x369361a5; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x36935f09; 
@property(readonly, assign, getter=isWiFiEnabled) BOOL wifiEnabled;	// G=0x369363dd; 
+ (void)set3GEnabled:(BOOL)enabled;	// 0x36937405
+ (void)setAirplaneModeEnabled:(BOOL)enabled;	// 0x36937409
+ (void)setWiFiEnabled:(BOOL)enabled;	// 0x3693740d
+ (id)sharedInstance;	// 0x36935609
- (id)init;	// 0x36934f61
- (int)_currentNetworkType;	// 0x36936c35
- (id)_dataStatusIndicator;	// 0x36936d55
- (void)_handleTelephonyNotificationWithName:(CFStringRef)name userInfo:(CFDictionaryRef)info;	// 0x36936a4d
- (int)_networkTypeFromDataIndicator:(id)dataIndicator;	// 0x36936dc5
- (BOOL)_ntsIsUsingNetwork;	// 0x36936f11
- (void)_postTypeChangedNotificationFromValue:(int)value toValue:(int)value2;	// 0x36937009
- (void)_postUsageChangedToValue:(BOOL)value;	// 0x369370f5
- (void)_reloadCellularRestriction;	// 0x369371b5
- (void)_reloadNetworkType;	// 0x369372e1
- (int)_setNetworkType:(int)type;	// 0x36937399
- (void)beginObservingDownloadQueue:(id)queue;	// 0x369356b9
- (void)beginUsingNetwork;	// 0x36935911
// declared property getter: - (id)connectionTypeHeader;	// 0x36935a9d
- (id)copyValueForCarrierBundleKey:(id)carrierBundleKey;	// 0x36935b45
// declared property getter: - (id)dataStatusIndicator;	// 0x36936219
- (void)dealloc;	// 0x36935455
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;	// 0x369369ed
- (void)downloadQueueNetworkUsageChanged:(id)changed;	// 0x369369f1
- (void)endObservingDownloadQueue:(id)queue;	// 0x36935b55
- (void)endUsingNetwork;	// 0x36935d7d
// declared property getter: - (BOOL)isUsingNetwork;	// 0x36935f09
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x369363dd
// declared property getter: - (double)lastNetworkTypeChangeTime;	// 0x36935fe1
// declared property getter: - (id)modemRegistrationStatus;	// 0x36936411
// declared property getter: - (int)networkType;	// 0x369360d9
// declared property getter: - (id)operatorName;	// 0x369365f1
- (void)reloadNetworkType;	// 0x369367e1
// declared property setter: - (void)setNetworkType:(int)type;	// 0x3693685d
// declared property getter: - (BOOL)shouldShowCellularAutomaticDownloadsSwitch;	// 0x369361a5
@end
