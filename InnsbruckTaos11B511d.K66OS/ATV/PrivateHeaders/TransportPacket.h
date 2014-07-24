/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class Buffer;

@interface TransportPacket : XXUnknownSuperclass {
	Buffer *buffer;	// 4 = 0x4
	int payloadLength;	// 8 = 0x8
	BOOL objectID[17];	// 12 = 0xc
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x5609e1
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x560a01
- (void)dealloc;	// 0x560c85
- (id)getError;	// 0x560c81
- (char *)getHeaderObjectID;	// 0x560c71
- (char *)getPayload;	// 0x560c51
- (int)getPayloadLength;	// 0x560c41
@end
