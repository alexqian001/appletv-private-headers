/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import </libobjc.A.h>

@class NSData;

@interface PTPEndDataPacket : NSObject {
	unsigned short _operationCode;	// 4 = 0x4
	unsigned long _transactionID;	// 8 = 0x8
	NSData *_data;	// 12 = 0xc
}
@property(retain) NSData *data;	// G=0x31292405; S=0x31292415; converted property
@property(assign) unsigned short operationCode;	// G=0x312923c5; S=0x312923d5; converted property
@property(assign) unsigned long transactionID;	// G=0x312923e5; S=0x312923f5; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;	// 0x31291e19
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x31291e8d
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x31291f3d
- (id)contentForTCP;	// 0x3129203d
- (id)contentForUSB;	// 0x31292121
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x31292219
// converted property getter: - (id)data;	// 0x31292405
- (void)dealloc;	// 0x31291ff1
- (id)description;	// 0x3129230d
// converted property getter: - (unsigned short)operationCode;	// 0x312923c5
// converted property setter: - (void)setData:(id)data;	// 0x31292415
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x312923d5
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x312923f5
// converted property getter: - (unsigned long)transactionID;	// 0x312923e5
@end

