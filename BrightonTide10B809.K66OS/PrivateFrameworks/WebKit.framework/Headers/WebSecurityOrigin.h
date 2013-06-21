/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebSecurityOriginPrivate;
@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
	WebSecurityOriginPrivate *_private;	// 4 = 0x4
	id<WebQuotaManager> _applicationCacheQuotaManager;	// 8 = 0x8
	id<WebQuotaManager> _databaseQuotaManager;	// 12 = 0xc
}
@property(assign) unsigned long long quota;	// G=0x366039b9; S=0x366039d9; converted property
- (id)initWithURL:(id)url;	// 0x36602e5d
- (SecurityOrigin *)_core;	// 0x366038e9
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x365a91cd
- (id)applicationCacheQuotaManager;	// 0x366038f9
- (id)databaseIdentifier;	// 0x3660333d
- (id)databaseQuotaManager;	// 0x36603949
- (void)dealloc;	// 0x365a9219
- (id)domain;	// 0x36603751
- (void)finalize;	// 0x366037e1
- (id)host;	// 0x366031ed
- (BOOL)isEqual:(id)equal;	// 0x36603775
- (unsigned short)port;	// 0x36603761
- (id)protocol;	// 0x3660309d
// converted property getter: - (unsigned long long)quota;	// 0x366039b9
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x366039d9
- (id)stringValue;	// 0x366035f5
- (id)toString;	// 0x36603499
- (unsigned long long)usage;	// 0x36603999
@end
