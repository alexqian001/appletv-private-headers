/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMapTable.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable {
@private
	NSSlice keys;	// 4 = 0x4
	NSSlice values;	// 68 = 0x44
	unsigned count;	// 132 = 0x84
	unsigned capacity;	// 136 = 0x88
	unsigned keyOptions;	// 140 = 0x8c
	unsigned valueOptions;	// 144 = 0x90
	unsigned mutations;	// 148 = 0x94
	int growLock;	// 152 = 0x98
	bool shouldRehash;	// 156 = 0x9c
}
@property(readonly, assign) unsigned count;	// G=0x3106e871; converted property
- (id)init;	// 0x3106ea2d
- (id)initWithCoder:(id)coder;	// 0x3106e8bd
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x3100a2b1
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x3106f4fd
- (void)_initBlock;	// 0x3100a3f5
- (void)_setBackingStore;	// 0x3100a675
- (id)allKeys;	// 0x3106e289
- (id)allValues;	// 0x3106e1d9
- (void)assign:(unsigned)assign key:(const void *)key value:(const void *)value isNew:(BOOL)aNew;	// 0x31027bd1
- (void)checkCount:(const char *)count;	// 0x3106e975
- (Class)classForCoder;	// 0x3106e955
- (BOOL)containsKeys:(const void **)keys values:(const void **)values count:(unsigned)count;	// 0x3106f73d
- (id)copy;	// 0x3106f329
// converted property getter: - (unsigned)count;	// 0x3106e871
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3106f811
- (void)dealloc;	// 0x3106ec19
- (id)description;	// 0x3106e359
- (id)dump;	// 0x3106e4dd
- (void)encodeWithCoder:(id)coder;	// 0x3106ef95
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x3106e689
- (void)finalize;	// 0x3106ebbd
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x3106f929
- (void)grow;	// 0x31028a35
- (unsigned)hash;	// 0x3106decd
- (BOOL)isEqual:(id)equal;	// 0x3106ecc9
- (id)keyEnumerator;	// 0x3106f8d9
- (id)keyPointerFunctions;	// 0x3106f6ed
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x3106e611
- (id)objectEnumerator;	// 0x3106e339
- (id)objectForKey:(id)key;	// 0x31027cf1
- (void)raiseCountUnderflowException;	// 0x3106e9ed
- (unsigned)realCount;	// 0x3106ddd9
- (void)rehash;	// 0x3106e45d
- (unsigned)rehashAround:(unsigned)around;	// 0x31027d7d
- (void)removeAllItems;	// 0x3106de75
- (void)removeObjectForKey:(id)key;	// 0x3100a771
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x3106e595
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x3106e7ed
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x3106e739
- (void)setObject:(id)object forKey:(id)key;	// 0x31027b45
- (id)valuePointerFunctions;	// 0x3106f69d
- (void)zeroPairedEntries;	// 0x310706c1
@end

