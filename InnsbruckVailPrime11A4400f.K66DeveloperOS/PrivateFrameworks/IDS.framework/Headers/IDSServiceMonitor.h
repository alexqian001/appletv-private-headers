/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface IDSServiceMonitor : NSObject {
	int _availability;	// 4 = 0x4
	NSString *_service;	// 8 = 0x8
	int _token;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *service;	// G=0x3117cced; 
- (id)initWithService:(id)service;	// 0x3117c925
- (void)_postAvailability:(int)availability;	// 0x3117cb25
- (void)_updateAvailability;	// 0x3117cbf1
- (void)dealloc;	// 0x3117cac5
- (void)handleActiveAccountsChanged:(id)changed;	// 0x3117cccd
// declared property getter: - (id)service;	// 0x3117cced
- (int)serviceAvailability;	// 0x3117ccdd
- (void)updateAvailability;	// 0x3117cc55
@end
