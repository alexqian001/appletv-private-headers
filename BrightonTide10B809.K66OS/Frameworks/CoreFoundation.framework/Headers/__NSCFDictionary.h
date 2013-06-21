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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x311026d1
- (BOOL)_isDeallocating;	// 0x31102681
- (BOOL)_tryRetain;	// 0x31102671
- (Class)classForCoder;	// 0x311026d5
- (id)copyWithZone:(NSZone *)zone;	// 0x31096181
- (unsigned)count;	// 0x31070055
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x310701c9
- (void)finalize;	// 0x31102691
- (unsigned)hash;	// 0x310a3855
- (BOOL)isEqual:(id)equal;	// 0x3108bb71
- (id)keyEnumerator;	// 0x3108bc05
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x310648f5
- (id)objectForKey:(id)key;	// 0x31050355
- (oneway void)release;	// 0x3105c26d
- (void)removeAllObjects;	// 0x31080f65
- (void)removeObjectForKey:(id)key;	// 0x3108a015
- (id)retain;	// 0x3104f65d
- (unsigned)retainCount;	// 0x3110268d
- (void)setObject:(id)object forKey:(id)key;	// 0x31064781
- (void)setObservationInfo:(void *)info;	// 0x3110270d
@end
