/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableData.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMutableData : NSMutableData {
@private
	unsigned _reserved : 1;	// 4 = 0x4
	unsigned _needToZero : 1;	// 4 = 0x4
	unsigned _hasVM : 1;	// 4 = 0x4
	unsigned _retainCount : 29;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _capacity;	// 12 = 0xc
	void *_bytes;	// 16 = 0x10
}
@property(assign) unsigned length;	// G=0x319e7dd1; S=0x319e7cb9; converted property
- (id)init;	// 0x319efab1
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x31a0d321
- (id)initWithCapacity:(unsigned)capacity;	// 0x319efac5
- (id)initWithLength:(unsigned)length;	// 0x319e7b5d
- (BOOL)_bytesAreVM;	// 0x31a48f7d
- (void)_freeBytes;	// 0x319f2211
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x319fc3a1
- (void)appendData:(id)data;	// 0x31a28681
- (const void *)bytes;	// 0x319e7dc1
- (void)dealloc;	// 0x319f21d1
- (void)finalize;	// 0x31a491f9
- (void)increaseLengthBy:(unsigned)by;	// 0x31a48f91
// converted property getter: - (unsigned)length;	// 0x319e7dd1
- (void *)mutableBytes;	// 0x319e7db1
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x31a30481
- (void)resetBytesInRange:(NSRange)range;	// 0x31a490cd
// converted property setter: - (void)setLength:(unsigned)length;	// 0x319e7cb9
@end
