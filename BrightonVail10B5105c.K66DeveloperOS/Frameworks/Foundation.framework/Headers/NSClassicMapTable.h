/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMapTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable {
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
		void *notAKeyMarker;
	} _keyCallBacks;	// 4 = 0x4
	struct {
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _valueCallBacks;	// 28 = 0x1c
	CFBasicHashRef _ht;	// 40 = 0x28
}
- (id)init;	// 0x36103f65
- (id)allKeys;	// 0x36104465
- (id)allValues;	// 0x36104715
- (id)copy;	// 0x36103ff1
- (unsigned)count;	// 0x36104255
- (void)dealloc;	// 0x36103f69
- (id)description;	// 0x36104269
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x361041c9
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x361049c9
- (BOOL)isEqual:(id)equal;	// 0x36103fbd
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x361040d1
- (id)objectForKey:(id)key;	// 0x3607ad25
- (void)removeAllItems;	// 0x36103fa9
- (void)removeObjectForKey:(id)key;	// 0x3607d0d1
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x3610410d
- (void)setObject:(id)object forKey:(id)key;	// 0x3607b36d
@end
