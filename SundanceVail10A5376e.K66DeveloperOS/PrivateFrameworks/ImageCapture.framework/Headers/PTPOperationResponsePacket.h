/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPOperationResponsePacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned short _responseCode;	// 8 = 0x8
	unsigned long _transactionID;	// 12 = 0xc
	unsigned long _parameters[5];	// 16 = 0x10
}
@property(readonly, assign) int numParameters;	// G=0x30d95979; converted property
@property(assign) unsigned long parameter1;	// G=0x30d959c1; S=0x30d959d1; converted property
@property(assign) unsigned long parameter2;	// G=0x30d959e1; S=0x30d959f5; converted property
@property(assign) unsigned long parameter3;	// G=0x30d95a09; S=0x30d95a1d; converted property
@property(assign) unsigned long parameter4;	// G=0x30d95a31; S=0x30d95a45; converted property
@property(assign) unsigned long parameter5;	// G=0x30d95a59; S=0x30d95a6d; converted property
@property(assign) unsigned short responseCode;	// G=0x30d95939; S=0x30d95949; converted property
@property(assign) unsigned long transactionID;	// G=0x30d95959; S=0x30d95969; converted property
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId;	// 0x30d95115
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId numParameters:(unsigned long)parameters parameters:(unsigned *)parameters4;	// 0x30d95095
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;	// 0x30d95175
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x30d951e5
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x30d9525d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x30d952e1
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x30d95369
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x30d953f5
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x30d954c5
- (id)contentForTCP;	// 0x30d95595
- (id)contentForUSB;	// 0x30d95679
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x30d9575d
- (id)description;	// 0x30d9583d
// converted property getter: - (int)numParameters;	// 0x30d95979
// converted property getter: - (unsigned long)parameter1;	// 0x30d959c1
// converted property getter: - (unsigned long)parameter2;	// 0x30d959e1
// converted property getter: - (unsigned long)parameter3;	// 0x30d95a09
// converted property getter: - (unsigned long)parameter4;	// 0x30d95a31
// converted property getter: - (unsigned long)parameter5;	// 0x30d95a59
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x30d95989
// converted property getter: - (unsigned short)responseCode;	// 0x30d95939
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x30d959d1
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x30d959f5
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x30d95a1d
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x30d95a45
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x30d95a6d
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x30d959a5
// converted property setter: - (void)setResponseCode:(unsigned short)code;	// 0x30d95949
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x30d95969
// converted property getter: - (unsigned long)transactionID;	// 0x30d95959
@end

