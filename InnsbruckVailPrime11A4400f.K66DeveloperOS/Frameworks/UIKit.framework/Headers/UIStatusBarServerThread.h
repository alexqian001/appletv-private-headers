/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <GraphicsServices/NSThread.h>
#import "UIKit-Structs.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerThread : NSThread {
	NSMutableArray *_clientPorts;	// 52 = 0x34
	NSMutableArray *_publishers;	// 56 = 0x38
	XXStruct_2dob7A _statusBarData;	// 60 = 0x3c
	XXStruct_2dob7A _composedStatusBarData;	// 2028 = 0x7ec
	XXStruct_qoTvnA _overrides;	// 3996 = 0xf9c
	CFDictionaryRef _doubleHeightStatusStrings;	// 5992 = 0x1768
	CFDictionaryRef _glowAnimationStates;	// 5996 = 0x176c
	NSMutableDictionary *_glowAnimationEndTimes;	// 6000 = 0x1770
	BOOL _composedStatusBarDataValid;	// 6004 = 0x1774
}
- (void)_addClient:(unsigned)client;	// 0x2f7871ad
- (void)_addStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x2f787911
- (void)_addStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x2f78738d
- (void)_broadcastStatusBarDataWithActions:(int)actions;	// 0x2f3e6911
- (void)_broadcastStyleOverrides;	// 0x2f3e73d5
- (id)_doubleHeightStatusStringForStyle:(int)style;	// 0x2f7876f5
- (double)_glowAnimationEndTimeForStyle:(int)style;	// 0x2f787529
- (BOOL)_glowAnimationStateForStyle:(int)style;	// 0x2f787599
- (BOOL)_permanentizeStatusBarOverrideData;	// 0x2f78789d
- (void)_postDoubleHeightStatus:(char *)status forStyle:(int)style;	// 0x2f787709
- (void)_postGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x2f7875f9
- (void)_postStatusBarData:(XXStruct_2dob7A *)data actions:(int)actions;	// 0x2f3e68c5
- (void)_postStatusBarOverrideData:(XXStruct_qoTvnA *)data;	// 0x2f787845
- (id)_publisherForPort:(unsigned)port;	// 0x2f3e70f1
- (void)_removeAnimationEndTimesForOverrides:(int)overrides;	// 0x2f3e7331
- (void)_removeClient:(CFMachPortRef)client;	// 0x2f787279
- (void)_removePublisher:(CFMachPortRef)publisher;	// 0x2f7872f9
- (void)_removeStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x2f787959
- (void)_removeStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x2f3e72b9
- (void)_setAnimationEndTimesForOverrides:(int)overrides;	// 0x2f7873e9
- (XXStruct_2dob7A *)_statusBarData;	// 0x2f3e69e9
- (XXStruct_qoTvnA *)_statusBarOverrideData;	// 0x2f787379
- (int)_styleOverrides;	// 0x2f3e74a5
- (void)main;	// 0x2f786ef9
@end

