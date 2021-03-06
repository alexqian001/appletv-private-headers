/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysMappingStrategy.h"


@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
	int _cd_rc;	// 4 = 0x4
	void *_table;	// 8 = 0x8
	unsigned long _length;	// 12 = 0xc
	id _reserved1;	// 16 = 0x10
	id *_keys;	// 20 = 0x14
}
@property(readonly, assign) id *keys;	// G=0x2d04c8f9; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x2d0a6d05
+ (id)alloc;	// 0x2d0a6d09
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d0a6d11
+ (void)initialize;	// 0x2d04a96d
+ (BOOL)supportsSecureCoding;	// 0x2d0a6d01
- (id)initForKeys:(id)keys;	// 0x2d052019
- (id)initForKeys:(id *)keys count:(unsigned)count;	// 0x2d0520d9
- (id)initWithCoder:(id)coder;	// 0x2d0a6f35
- (void)_coreCreationForKeys:(const id *)keys count:(unsigned long)count;	// 0x2d052125
- (void)_coreDealloc:(BOOL)dealloc;	// 0x2d055699
- (BOOL)_isDeallocating;	// 0x2d0a6d79
- (CFArrayRef)_makeBranchTableForKeys:(const char **)keys count:(unsigned long)count;	// 0x2d052335
- (BOOL)_tryRetain;	// 0x2d0a6d2d
- (id)allKeys;	// 0x2d0a6db9
- (Class)classForArchiver;	// 0x2d0a6f19
- (Class)classForCoder;	// 0x2d0a6efd
- (id)copyWithZone:(NSZone *)zone;	// 0x2d0a7169
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d0a7179
- (void)dealloc;	// 0x2d055685
- (void)encodeWithCoder:(id)coder;	// 0x2d0a709d
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x2d055555
- (unsigned)hash;	// 0x2d0a6eb9
- (unsigned)indexForKey:(id)key;	// 0x2d0a6db1
- (BOOL)isEqual:(id)equal;	// 0x2d0a6df5
// converted property getter: - (id *)keys;	// 0x2d04c8f9
- (unsigned)length;	// 0x2d04aacd
- (oneway void)release;	// 0x2d052ba1
- (id)retain;	// 0x2d052b69
- (unsigned)retainCount;	// 0x2d0a6d19
@end

