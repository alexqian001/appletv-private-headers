/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSSetI : NSSet {
	unsigned _used : 26;	// 4 = 0x4
	unsigned _szidx : 6;	// 7 = 0x7
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3;	// 0x3105ade9
+ (id)allocWithZone:(NSZone *)zone;	// 0x31107ea9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31107ea5
- (id)copyWithZone:(NSZone *)zone;	// 0x31089c21
- (unsigned)count;	// 0x3106d4ad
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31084c85
- (void)dealloc;	// 0x3105aff9
- (void)finalize;	// 0x31107e25
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x3106e8d1
- (id)member:(id)member;	// 0x3105af51
- (id)objectEnumerator;	// 0x310a7961
@end

