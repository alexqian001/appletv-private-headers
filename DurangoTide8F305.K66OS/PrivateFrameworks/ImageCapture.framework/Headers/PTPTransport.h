/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPTransport : NSObject {
	unsigned short _transportType;	// 4 = 0x4
	int _role;	// 8 = 0x8
	int _connectionStatus;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
	BOOL _timedOut;	// 20 = 0x14
	BOOL _responseReceived;	// 21 = 0x15
}
@property(readonly, assign) int connectionStatus;	// G=0x3130102d; converted property
@property(readonly, assign) int role;	// G=0x31301049; converted property
@property(assign) BOOL timedOut;	// G=0x3130105d; S=0x3130106d; converted property
@property(readonly, assign) unsigned short transportType;	// G=0x3130101d; converted property
- (id)init;	// 0x313010a1
- (void)abortPendingIO;	// 0x3130108d
- (void)cancelTransaction:(id)transaction;	// 0x31301091
- (BOOL)connected;	// 0x31301059
// converted property getter: - (int)connectionStatus;	// 0x3130102d
- (void)deviceReset;	// 0x3130109d
- (unsigned short)deviceStatus;	// 0x31301095
// converted property getter: - (int)role;	// 0x31301049
- (BOOL)sendData:(id)data;	// 0x31301081
- (BOOL)sendEvent:(id)event;	// 0x31301089
- (BOOL)sendRequest:(id)request needsData:(BOOL)data;	// 0x3130107d
- (BOOL)sendResponse:(id)response;	// 0x31301085
- (void)setDelegate:(id)delegate;	// 0x31300ffd
- (void)setResponseReceived:(BOOL)received;	// 0x3130100d
// converted property setter: - (void)setTimedOut:(BOOL)anOut;	// 0x3130106d
- (BOOL)startInitiator;	// 0x31301041
- (BOOL)startResponder;	// 0x3130103d
- (void)stop;	// 0x31301045
// converted property getter: - (BOOL)timedOut;	// 0x3130105d
// converted property getter: - (unsigned short)transportType;	// 0x3130101d
@end
