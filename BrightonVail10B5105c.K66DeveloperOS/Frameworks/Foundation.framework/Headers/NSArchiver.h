/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"


@interface NSArchiver : NSCoder {
	void *mdata;	// 4 = 0x4
	void *pointerTable;	// 8 = 0x8
	void *stringTable;	// 12 = 0xc
	void *ids;	// 16 = 0x10
	void *map;	// 20 = 0x14
	void *replacementTable;	// 24 = 0x18
	void *reserved;	// 28 = 0x1c
}
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x360c9c59
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x360c9bc1
+ (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x360c8c75
+ (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x360c8c25
+ (void)initialize;	// 0x360c87d9
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x360c8809
- (id)archiverData;	// 0x360c8a45
- (id)classNameEncodedForTrueClassName:(id)trueClassName;	// 0x360c9ce9
- (id)data;	// 0x360c8a55
- (void)dealloc;	// 0x360c8a65
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x360c949d
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x360c9761
- (void)encodeClassName:(id)name intoClassName:(id)name2;	// 0x360c9c85
- (void)encodeConditionalObject:(id)object;	// 0x360c9a9d
- (void)encodeDataObject:(id)object;	// 0x360c98fd
- (void)encodeObject:(id)object;	// 0x360c97c9
- (void)encodeRootObject:(id)object;	// 0x360c99c9
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x360c8cdd
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x360c9441
- (void)finalize;	// 0x360c8b21
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x360c8bbd
- (int)versionForClassName:(id)className;	// 0x360c8cc1
@end

