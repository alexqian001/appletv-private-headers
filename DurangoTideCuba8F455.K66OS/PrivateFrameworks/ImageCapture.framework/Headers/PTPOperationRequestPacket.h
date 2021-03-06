/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPOperationRequestPacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned _dataPhaseInfo;	// 8 = 0x8
	unsigned short _operationCode;	// 12 = 0xc
	unsigned _transactionID;	// 16 = 0x10
	unsigned _parameters[5];	// 20 = 0x14
}
@property(assign) unsigned long dataPhaseInfo;	// G=0x332d0361; S=0x332d0371; converted property
@property(readonly, assign) int numParameters;	// G=0x332d0381; converted property
@property(assign) unsigned short operationCode;	// G=0x332d0321; S=0x332d0331; converted property
@property(assign) unsigned long parameter1;	// G=0x332d03c5; S=0x332d03d5; converted property
@property(assign) unsigned long parameter2;	// G=0x332d03e5; S=0x332d03f5; converted property
@property(assign) unsigned long parameter3;	// G=0x332d0405; S=0x332d0415; converted property
@property(assign) unsigned long parameter4;	// G=0x332d0425; S=0x332d0435; converted property
@property(assign) unsigned long parameter5;	// G=0x332d0445; S=0x332d0455; converted property
@property(assign) unsigned long transactionID;	// G=0x332d0341; S=0x332d0351; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info;	// 0x332d06f9
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info numParameters:(unsigned long)parameters parameters:(unsigned *)parameters5;	// 0x332d075d
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1;	// 0x332d0685
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x332d0609
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x332d0585
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x332d04f9
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x332d0465
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x332d0c29
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x332d07f1
- (id)contentForTCP;	// 0x332d0a75
- (id)contentForUSB;	// 0x332d099d
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x332d08c5
// converted property getter: - (unsigned long)dataPhaseInfo;	// 0x332d0361
- (id)description;	// 0x332d0b61
// converted property getter: - (int)numParameters;	// 0x332d0381
// converted property getter: - (unsigned short)operationCode;	// 0x332d0321
// converted property getter: - (unsigned long)parameter1;	// 0x332d03c5
// converted property getter: - (unsigned long)parameter2;	// 0x332d03e5
// converted property getter: - (unsigned long)parameter3;	// 0x332d0405
// converted property getter: - (unsigned long)parameter4;	// 0x332d0425
// converted property getter: - (unsigned long)parameter5;	// 0x332d0445
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x332d0391
// converted property setter: - (void)setDataPhaseInfo:(unsigned long)info;	// 0x332d0371
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x332d0331
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x332d03d5
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x332d03f5
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x332d0415
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x332d0435
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x332d0455
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x332d03ad
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x332d0351
// converted property getter: - (unsigned long)transactionID;	// 0x332d0341
@end

