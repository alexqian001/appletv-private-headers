/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface ATVAutounbinder : XXUnknownSuperclass {
	NSMapTable *_bindingsByObject;	// 4 = 0x4
	BOOL _assertOnRetainEnabled;	// 8 = 0x8
}
- (id)init;	// 0x266db5
- (void)_assertIllegalRetain;	// 0x267151
- (void)_enableAssertOnRetain;	// 0x26713d
- (void)addBinding:(id)binding fromObject:(id)object;	// 0x266e2d
- (void)dealloc;	// 0x266f51
- (void)removeBinding:(id)binding fromObject:(id)object;	// 0x266ed1
- (id)retain;	// 0x2670ed
@end
