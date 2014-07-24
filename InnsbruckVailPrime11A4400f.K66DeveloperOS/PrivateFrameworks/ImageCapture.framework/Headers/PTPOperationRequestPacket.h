/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import </libobjc.A.h>


@interface PTPOperationRequestPacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned long _dataPhaseInfo;	// 8 = 0x8
	unsigned short _operationCode;	// 12 = 0xc
	unsigned long _transactionID;	// 16 = 0x10
	unsigned long _parameters[5];	// 20 = 0x14
}
@property(assign) unsigned long dataPhaseInfo;	// G=0x31295391; S=0x312953a1; converted property
@property(readonly, assign) int numParameters;	// G=0x312953b1; converted property
@property(assign) unsigned short operationCode;	// G=0x31295351; S=0x31295361; converted property
@property(assign) unsigned long parameter1;	// G=0x312953f9; S=0x31295409; converted property
@property(assign) unsigned long parameter2;	// G=0x31295419; S=0x3129542d; converted property
@property(assign) unsigned long parameter3;	// G=0x31295441; S=0x31295455; converted property
@property(assign) unsigned long parameter4;	// G=0x31295469; S=0x3129547d; converted property
@property(assign) unsigned long parameter5;	// G=0x31295491; S=0x312954a5; converted property
@property(assign) unsigned long transactionID;	// G=0x31295371; S=0x31295381; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info;	// 0x31294a91
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info numParameters:(unsigned long)parameters parameters:(unsigned *)parameters5;	// 0x312949fd
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1;	// 0x31294b01
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x31294b85
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x31294c11
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x31294ca9
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x31294d41
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x31294de9
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x31294ed1
- (id)contentForTCP;	// 0x31294fb1
- (id)contentForUSB;	// 0x312950ad
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x31295195
// converted property getter: - (unsigned long)dataPhaseInfo;	// 0x31295391
- (id)description;	// 0x31295275
// converted property getter: - (int)numParameters;	// 0x312953b1
// converted property getter: - (unsigned short)operationCode;	// 0x31295351
// converted property getter: - (unsigned long)parameter1;	// 0x312953f9
// converted property getter: - (unsigned long)parameter2;	// 0x31295419
// converted property getter: - (unsigned long)parameter3;	// 0x31295441
// converted property getter: - (unsigned long)parameter4;	// 0x31295469
// converted property getter: - (unsigned long)parameter5;	// 0x31295491
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x312953c1
// converted property setter: - (void)setDataPhaseInfo:(unsigned long)info;	// 0x312953a1
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x31295361
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x31295409
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x3129542d
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x31295455
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x3129547d
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x312954a5
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x312953dd
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x31295381
// converted property getter: - (unsigned long)transactionID;	// 0x31295371
@end
