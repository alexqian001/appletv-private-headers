/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSCoder.h> // Unknown library

@class UINibStringIDTable;

__attribute__((visibility("hidden")))
@interface UINibDecoder : NSCoder {
@private
	Class arrayClass;	// 4 = 0x4
	Class setClass;	// 8 = 0x8
	Class dictionaryClass;	// 12 = 0xc
	Class *classes;	// 16 = 0x10
	id *missingClasses;	// 20 = 0x14
	UINibDecoderObjectEntry *objects;	// 24 = 0x18
	UINibDecoderValue *values;	// 28 = 0x1c
	char *valueTypes;	// 32 = 0x20
	void *valueData;	// 36 = 0x24
	unsigned long valueDataSize;	// 40 = 0x28
	UINibDecoderHeader header;	// 44 = 0x2c
	id *objectsByObjectID;	// 96 = 0x60
	unsigned *longObjectClassIDs;	// 100 = 0x64
	char *shortObjectClassIDs;	// 104 = 0x68
	unsigned *keyMasks;	// 108 = 0x6c
	long inlinedValueKey;	// 112 = 0x70
	UINibDecoderRecursiveState recursiveState;	// 116 = 0x74
	UINibStringIDTable *keyIDTable;	// 132 = 0x84
	id delegate;	// 136 = 0x88
	UIKeyToKeyIDCache keyIDCache;	// 140 = 0x8c
	UIKeyAndScopeToValueCache valueCache;	// 728 = 0x2d8
	int lookupRounds;	// 740 = 0x2e4
	int maxPossibleLookupRounds;	// 744 = 0x2e8
	int failedByKeyMask;	// 748 = 0x2ec
	int savedByKeyMask;	// 752 = 0x2f0
}
@property(assign) id delegate;	// G=0x33c5faa5; S=0x33c5fab5; @synthesize
+ (id)unarchiveObjectWithData:(id)data;	// 0x33c5def1
+ (id)unarchiveObjectWithFile:(id)file;	// 0x33c5df81
- (id)initForReadingWithData:(id)data;	// 0x33c5cc11
- (id)initForReadingWithData:(id)data error:(id *)error;	// 0x33c5ca91
- (BOOL)allowsKeyedCoding;	// 0x33c5e0a5
- (BOOL)containsValueForKey:(id)key;	// 0x33c5e0a9
- (void)dealloc;	// 0x33c5cc25
- (BOOL)decodeArrayOfCGFloats:(float *)cgfloats count:(int)count forKey:(id)key;	// 0x33c5f0d1
- (BOOL)decodeArrayOfDoubles:(double *)doubles count:(int)count forKey:(id)key;	// 0x33c5f005
- (BOOL)decodeArrayOfFloats:(float *)floats count:(int)count forKey:(id)key;	// 0x33c5ef3d
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x33c5f8f9
- (BOOL)decodeBoolForKey:(id)key;	// 0x33c5eac5
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x33c5ea2d
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x33c5f975
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x33c5f2cd
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x33c5f199
- (CGRect)decodeCGRectForKey:(id)key;	// 0x33c5f259
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x33c5f1f9
- (id)decodeDataObject;	// 0x33c5f745
- (double)decodeDoubleForKey:(id)key;	// 0x33c5ec21
- (float)decodeFloatForKey:(id)key;	// 0x33c5eb79
- (int)decodeInt32ForKey:(id)key;	// 0x33c5ee9d
- (long long)decodeInt64ForKey:(id)key;	// 0x33c5eca9
- (int)decodeIntForKey:(id)key;	// 0x33c5edfd
- (int)decodeIntegerForKey:(id)key;	// 0x33c5ed5d
- (id)decodeNXObject;	// 0x33c5f6c5
- (id)decodeObject;	// 0x33c5f7c5
- (id)decodeObjectForKey:(id)key;	// 0x33c5e21d
- (id)decodePropertyList;	// 0x33c5f7f1
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x33c5f335
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x33c5f3a9
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x33c5f871
// declared property getter: - (id)delegate;	// 0x33c5faa5
- (void)finishDecoding;	// 0x33c5fa25
- (id)nextGenericKey;	// 0x33c5dfe5
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x33c5e029
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c5fab5
- (unsigned)systemVersion;	// 0x33c5f9f5
- (BOOL)validateAndIndexClasses:(const void *)classes length:(unsigned long)length;	// 0x33c5d0f5
- (BOOL)validateAndIndexData:(id)data error:(id *)error;	// 0x33c5cdf9
- (BOOL)validateAndIndexKeys:(const void *)keys length:(unsigned long)length;	// 0x33c5dd3d
- (BOOL)validateAndIndexObjects:(const void *)objects length:(unsigned long)length;	// 0x33c5d679
- (BOOL)validateAndIndexValues:(const void *)values length:(unsigned long)length;	// 0x33c5d98d
- (int)versionForClassName:(id)className;	// 0x33c5f9fd
@end
