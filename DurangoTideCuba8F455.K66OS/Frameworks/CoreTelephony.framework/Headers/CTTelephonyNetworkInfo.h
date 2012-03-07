/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject {
@private
	void *_internal;	// 4 = 0x4
	CTCarrier *_subscriberCellularProvider;	// 8 = 0x8
	id _subscriberCellularProviderDidUpdateNotifier;	// 12 = 0xc
}
@property(retain) CTCarrier *subscriberCellularProvider;	// G=0x3060dda1; S=0x3060ddb9; @synthesize=_subscriberCellularProvider
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;	// G=0x3060cfc9; S=0x3060d821; 
- (id)init;	// 0x3060d679
- (void)cleanUpServerConnection;	// 0x3060d2f1
- (void)cleanUpServerConnectionNoLock;	// 0x3060d641
- (void)dealloc;	// 0x3060d781
- (BOOL)getAllowsVOIP:(BOOL *)voip withCTError:(XXStruct_K5nmsA *)cterror;	// 0x3060da79
- (BOOL)getCarrierName:(id)name withCTError:(XXStruct_K5nmsA *)cterror;	// 0x3060d8c5
- (BOOL)getMobileCountryCode:(id)code andIsoCountryCode:(id)code2 withCTError:(XXStruct_K5nmsA *)cterror;	// 0x3060d949
- (BOOL)getMobileNetworkCode:(id)code withCTError:(XXStruct_K5nmsA *)cterror;	// 0x3060d9f5
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x3060db8d
- (void)postUpdatesIfNecessary;	// 0x3060daf5
- (void)reestablishServerConnectionIfNeeded;	// 0x3060d525
// declared property setter: - (void)setSubscriberCellularProvider:(id)provider;	// 0x3060ddb9
// declared property setter: - (void)setSubscriberCellularProviderDidUpdateNotifier:(id)updateNotifier;	// 0x3060d821
- (BOOL)setUpServerConnection;	// 0x3060d335
// declared property getter: - (id)subscriberCellularProvider;	// 0x3060dda1
// declared property getter: - (id)subscriberCellularProviderDidUpdateNotifier;	// 0x3060cfc9
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL *)updateNetworkInfoAnd;	// 0x3060d031
@end
