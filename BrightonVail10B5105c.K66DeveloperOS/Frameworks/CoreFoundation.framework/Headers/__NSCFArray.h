/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35738869
- (BOOL)_isDeallocating;	// 0x35738819
- (BOOL)_tryRetain;	// 0x35738809
- (void)addObject:(id)object;	// 0x356b5805
- (Class)classForCoder;	// 0x3573886d
- (id)copyWithZone:(NSZone *)zone;	// 0x356b5b3d
- (unsigned)count;	// 0x3569e915
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3569e705
- (void)finalize;	// 0x35738829
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x356a2ce5
- (unsigned)hash;	// 0x35738801
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x356b5839
- (BOOL)isEqual:(id)equal;	// 0x356ccac5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x356b59e5
- (id)objectAtIndex:(unsigned)index;	// 0x356b5b79
- (oneway void)release;	// 0x356a8365
- (void)removeLastObject;	// 0x357388a9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x356bedf9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x356b5a09
- (id)retain;	// 0x356a8f05
- (unsigned)retainCount;	// 0x35738825
@end
