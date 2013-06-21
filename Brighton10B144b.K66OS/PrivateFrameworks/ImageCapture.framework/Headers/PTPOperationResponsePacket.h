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
@property(readonly, assign) int numParameters;	// G=0x342157a9; converted property
@property(assign) unsigned long parameter1;	// G=0x342157f1; S=0x34215801; converted property
@property(assign) unsigned long parameter2;	// G=0x34215811; S=0x34215825; converted property
@property(assign) unsigned long parameter3;	// G=0x34215839; S=0x3421584d; converted property
@property(assign) unsigned long parameter4;	// G=0x34215861; S=0x34215875; converted property
@property(assign) unsigned long parameter5;	// G=0x34215889; S=0x3421589d; converted property
@property(assign) unsigned short responseCode;	// G=0x34215769; S=0x34215779; converted property
@property(assign) unsigned long transactionID;	// G=0x34215789; S=0x34215799; converted property
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId;	// 0x34214f45
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId numParameters:(unsigned long)parameters parameters:(unsigned *)parameters4;	// 0x34214ec5
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;	// 0x34214fa5
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x34215015
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x3421508d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x34215111
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x34215199
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x34215225
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x342152f5
- (id)contentForTCP;	// 0x342153c5
- (id)contentForUSB;	// 0x342154a9
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x3421558d
- (id)description;	// 0x3421566d
// converted property getter: - (int)numParameters;	// 0x342157a9
// converted property getter: - (unsigned long)parameter1;	// 0x342157f1
// converted property getter: - (unsigned long)parameter2;	// 0x34215811
// converted property getter: - (unsigned long)parameter3;	// 0x34215839
// converted property getter: - (unsigned long)parameter4;	// 0x34215861
// converted property getter: - (unsigned long)parameter5;	// 0x34215889
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x342157b9
// converted property getter: - (unsigned short)responseCode;	// 0x34215769
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x34215801
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x34215825
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x3421584d
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x34215875
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x3421589d
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x342157d5
// converted property setter: - (void)setResponseCode:(unsigned short)code;	// 0x34215779
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x34215799
// converted property getter: - (unsigned long)transactionID;	// 0x34215789
@end
