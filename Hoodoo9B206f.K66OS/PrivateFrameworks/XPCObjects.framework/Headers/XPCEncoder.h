/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "XPCObjects-Structs.h"
#import <NSCoder.h> // Unknown library


@interface XPCEncoder : NSCoder {
	void *_encoding;	// 4 = 0x4
	void *_currentObject;	// 8 = 0x8
	CFDictionaryRef _encodedObjects;	// 12 = 0xc
	CFDictionaryRef _conditionalObjects;	// 16 = 0x10
	unsigned _nextConditionalObjectID;	// 20 = 0x14
	CFDictionaryRef _replacementObjects;	// 24 = 0x18
}
@property(readonly, assign) void *encoding;	// G=0x327425d5; converted property
+ (void *)newEncodingForRootObject:(id)rootObject;	// 0x327426a5
- (id)init;	// 0x3274260d
- (void)_fixUpConditionalObjects;	// 0x32742725
- (id)_replacementObjectForObject:(id)object;	// 0x32742805
- (void)_verifyCurrentObject;	// 0x32742c29
- (BOOL)allowsKeyedCoding;	// 0x327425e5
- (void)dealloc;	// 0x32742cad
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x327429e9
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x32742879
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x32742a39
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x327428c5
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x32742911
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x327429a9
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x3274293d
- (void)encodeInt:(int)int forKey:(id)key;	// 0x327429c9
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x32742989
- (void)encodeObject:(id)object forKey:(id)key;	// 0x32742afd
- (void)encodeRootObject:(id)object;	// 0x32742c7d
// converted property getter: - (void *)encoding;	// 0x327425d5
- (int)versionForClassName:(id)className;	// 0x32742851
@end

