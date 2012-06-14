/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface PBDataReader : NSObject {
	unsigned _pos;	// 4 = 0x4
	BOOL _error;	// 8 = 0x8
	NSData *_data;	// 12 = 0xc
	unsigned _length;	// 16 = 0x10
}
@property(readonly, retain) NSData *data;	// G=0x36e40ad1; converted property
@property(assign) unsigned length;	// G=0x36e413b9; S=0x36e413c9; @synthesize=_length
@property(assign) unsigned position;	// G=0x36e413d9; S=0x36e413e9; @synthesize=_pos
- (id)initWithData:(id)data;	// 0x36e409f1
// converted property getter: - (id)data;	// 0x36e40ad1
- (void)dealloc;	// 0x36e40a85
- (BOOL)hasError;	// 0x36e40b09
- (BOOL)hasMoreData;	// 0x36e40b19
- (BOOL)isAtEnd;	// 0x36e40ae1
// declared property getter: - (unsigned)length;	// 0x36e413b9
- (unsigned)offset;	// 0x36e40b3d
// declared property getter: - (unsigned)position;	// 0x36e413d9
- (int)read:(const char *)read maxLength:(unsigned)length;	// 0x36e412c9
- (BOOL)readBOOL;	// 0x36e41205
- (unsigned short)readBigEndianFixed16;	// 0x36e40cad
- (unsigned)readBigEndianFixed32;	// 0x36e40d0d
- (unsigned long long)readBigEndianFixed64;	// 0x36e40d69
- (id)readBytes:(unsigned)bytes;	// 0x36e41351
- (id)readData;	// 0x36e41285
- (double)readDouble;	// 0x36e40f19
- (unsigned)readFixed32;	// 0x36e4108d
- (unsigned long long)readFixed64;	// 0x36e410e5
- (float)readFloat;	// 0x36e40f89
- (int)readInt32;	// 0x36e40fed
- (long long)readInt64;	// 0x36e41005
- (BOOL)readInt8;	// 0x36e40e39
- (id)readProtoBuffer;	// 0x36e40dd5
- (int)readSfixed32;	// 0x36e41149
- (long long)readSfixed64;	// 0x36e411a1
- (int)readSint32;	// 0x36e4103d
- (long long)readSint64;	// 0x36e4105d
- (id)readString;	// 0x36e41229
- (void)readTag:(unsigned short *)tag andType:(char *)type;	// 0x36e40b85
- (unsigned)readUint32;	// 0x36e41015
- (unsigned long long)readUint64;	// 0x36e4102d
- (long long)readVarInt;	// 0x36e40e95
- (BOOL)seekToOffset:(unsigned)offset;	// 0x36e40b4d
// declared property setter: - (void)setLength:(unsigned)length;	// 0x36e413c9
// declared property setter: - (void)setPosition:(unsigned)position;	// 0x36e413e9
- (BOOL)skipValueWithTag:(unsigned short)tag andType:(unsigned char)type;	// 0x36e40ba9
@end
