/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject {
	NSString *thingToResolve;	// 4 = 0x4
	int resolveType;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *resolveQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *cacheAccessQueue;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *callbackQueue;	// 20 = 0x14
	BOOL startedResolving;	// 24 = 0x18
}
@property(readonly, assign) NSObject<OS_dispatch_queue> *cacheAccessQueue;	// G=0x360ea371; @synthesize
@property(readonly, assign) NSObject<OS_dispatch_queue> *callbackQueue;	// G=0x360ea385; @synthesize
@property(readonly, assign) NSObject<OS_dispatch_queue> *resolveQueue;	// G=0x360ea35d; @synthesize
@property(assign, nonatomic) int resolveType;	// G=0x360ea31d; S=0x360ea32d; @synthesize
@property(assign) BOOL startedResolving;	// G=0x360ea399; S=0x360ea3b1; @synthesize
@property(retain, nonatomic) NSString *thingToResolve;	// G=0x360ea33d; S=0x360ea34d; @synthesize
- (id)init;	// 0x360ea1b9
// declared property getter: - (id)cacheAccessQueue;	// 0x360ea371
// declared property getter: - (id)callbackQueue;	// 0x360ea385
- (void)cleanup;	// 0x360ea23d
- (void)dealloc;	// 0x360ea2bd
- (void)finalize;	// 0x360ea27d
// declared property getter: - (id)resolveQueue;	// 0x360ea35d
// declared property getter: - (int)resolveType;	// 0x360ea31d
// declared property setter: - (void)setResolveType:(int)type;	// 0x360ea32d
// declared property setter: - (void)setStartedResolving:(BOOL)resolving;	// 0x360ea3b1
// declared property setter: - (void)setThingToResolve:(id)resolve;	// 0x360ea34d
// declared property getter: - (BOOL)startedResolving;	// 0x360ea399
// declared property getter: - (id)thingToResolve;	// 0x360ea33d
@end
