/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {
	NSLock *_lock;	// 4 = 0x4
	NSString *_hostname;	// 8 = 0x8
	SCNetworkReachabilityRef _reachability;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
	CFDictionaryRef _observers;	// 20 = 0x14
	BOOL _isReachable;	// 24 = 0x18
	BOOL _receivedAtLeastOneCallback;	// 25 = 0x19
}
@property(assign, nonatomic) NSString *hostname;	// G=0x3073e699; S=0x3073e6a9; @synthesize=_hostname
- (id)initWithHostname:(id)hostname;	// 0x3073dd95
- (void)addObserver:(id)observer selector:(SEL)selector;	// 0x3073e365
- (void)dealloc;	// 0x3073de45
- (id)description;	// 0x3073def5
- (BOOL)hasObservers;	// 0x3073e62d
// declared property getter: - (id)hostname;	// 0x3073e699
- (void)reachabilityChangedWithFlags:(unsigned)flags;	// 0x3073df5d
- (void)removeObserver:(id)observer;	// 0x3073e57d
// declared property setter: - (void)setHostname:(id)hostname;	// 0x3073e6a9
@end
