/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSXPCCoder.h"

@class NSMutableArray, NSXPCConnection;
@protocol OS_xpc_object, NSXPCEncoderDelegate;

@interface NSXPCEncoder : NSXPCCoder {
	NSMutableArray *_containers;	// 12 = 0xc
	NSObject<OS_xpc_object> *_oolObjects;	// 16 = 0x10
	NSXPCConnection *_connection;	// 20 = 0x14
	CFDictionaryRef _replacedObjects;	// 24 = 0x18
	CFDictionaryRef _replacedByDelegateObjects;	// 28 = 0x1c
	id<NSXPCEncoderDelegate> _delegate;	// 32 = 0x20
	BOOL _askForReplacement;	// 36 = 0x24
}
@property(assign) NSXPCConnection *_connection;	// G=0x361cba31; S=0x360b2b9d; @synthesize
@property(assign) id<NSXPCEncoderDelegate> delegate;	// G=0x361cba45; S=0x360b2bb9; @synthesize=_delegate
- (id)init;	// 0x360b2a99
- (void)_addObject:(id)object forKey:(id)key;	// 0x360b317d
// declared property getter: - (id)_connection;	// 0x361cba31
- (id)_createRootXPCObject;	// 0x360b3bdd
- (void)_encodeArrayOfObjects:(id)objects forKey:(id)key;	// 0x361cb465
- (id)_encodeXPCObject:(id)object;	// 0x361cb299
- (void)_popContainer;	// 0x360b3bbd
- (void)_pushContainer:(id)container;	// 0x360b2b7d
- (void)_pushContainerForKey:(id)key;	// 0x360b3129
- (id)_topContainer;	// 0x360b323d
- (BOOL)allowsKeyedCoding;	// 0x361cb43d
- (void)dealloc;	// 0x360b3ca5
- (id)debugDescription;	// 0x361cb37d
// declared property getter: - (id)delegate;	// 0x361cba45
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x360b3b79
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x361cb8dd
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x361cb9e9
- (void)encodeDataObject:(id)object;	// 0x361cb451
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x361cb84d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x361cb809
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x361cb775
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x361cb7b9
- (void)encodeInt:(int)int forKey:(id)key;	// 0x361cb731
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x361cb89d
- (void)encodeInvocation:(id)invocation;	// 0x360b328d
- (void)encodeObject:(id)object;	// 0x360b3b01
- (void)encodeObject:(id)object forKey:(id)key;	// 0x360b2be9
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x361cb445
- (void)encodeXPCObject:(id)object forKey:(id)key;	// 0x361cb9b5
- (void)finalize;	// 0x361cb30d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x360b2bb9
// declared property setter: - (void)set_connection:(id)connection;	// 0x360b2b9d
@end

