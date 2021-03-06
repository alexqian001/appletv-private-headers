/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


@interface NSMutableData (NSMutableData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x34d30cd5
+ (id)dataWithCapacity:(unsigned)capacity;	// 0x34d93275
+ (id)dataWithLength:(unsigned)length;	// 0x34d3d805
- (id)initWithCapacity:(unsigned)capacity;	// 0x34d932b5
- (id)initWithLength:(unsigned)length;	// 0x34d932d9
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x34d92ab5
- (void)appendData:(id)data;	// 0x34d92c45
- (Class)classForCoder;	// 0x34d3c285
- (void)increaseLengthBy:(unsigned)by;	// 0x34d92e0d
- (void *)mutableBytes;	// 0x34d927c5
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x34d92f05
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes length:(unsigned)length;	// 0x34d9280d
- (void)resetBytesInRange:(NSRange)range;	// 0x34d93101
- (void)setData:(id)data;	// 0x34d93211
- (void)setLength:(unsigned)length;	// 0x34d927e9
@end

