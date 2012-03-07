/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMapTable.h"


__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable {
@private
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
- (id)init;	// 0x306844fd
- (id)allKeys;	// 0x306849e9
- (id)allValues;	// 0x30684c71
- (id)copy;	// 0x3068458d
- (unsigned)count;	// 0x306288f1
- (void)dealloc;	// 0x30684501
- (id)description;	// 0x306847e9
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x3068475d
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x30684efd
- (BOOL)isEqual:(id)equal;	// 0x30684555
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x30684665
- (id)objectForKey:(id)key;	// 0x30627b9d
- (void)removeAllItems;	// 0x30684541
- (void)removeObjectForKey:(id)key;	// 0x30628269
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x306846a1
- (void)setObject:(id)object forKey:(id)key;	// 0x30627bc5
@end
