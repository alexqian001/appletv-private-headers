/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary {
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
	id *_keys;	// 32 = 0x20
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35d5f9d1
- (BOOL)_isDeallocating;	// 0x35d5f981
- (BOOL)_tryRetain;	// 0x35d5f971
- (Class)classForCoder;	// 0x35cf7825
- (id)copyWithZone:(NSZone *)zone;	// 0x35cc6089
- (unsigned)count;	// 0x35ca9be5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35ca9d59
- (void)finalize;	// 0x35d5f991
- (unsigned)hash;	// 0x35d5f96d
- (BOOL)isEqual:(id)equal;	// 0x35ce1949
- (id)keyEnumerator;	// 0x35cdaa11
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35cc5e09
- (id)objectForKey:(id)key;	// 0x35ca963d
- (oneway void)release;	// 0x35caf335
- (void)removeAllObjects;	// 0x35cb783d
- (void)removeObjectForKey:(id)key;	// 0x35cc5a09
- (id)retain;	// 0x35ca138d
- (unsigned)retainCount;	// 0x35d5f98d
- (void)setObject:(id)object forKey:(id)key;	// 0x35cc55a5
- (void)setObservationInfo:(void *)info;	// 0x35d5f9d5
@end
