/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library

@class PTPOperationResponsePacket, PTPWrappedBytes;

@interface PTPTransport : NSObject {
	unsigned short _type;	// 4 = 0x4
	int _role;	// 8 = 0x8
	int _connectionStatus;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
	BOOL _timedOut;	// 20 = 0x14
	BOOL _responseReceived;	// 21 = 0x15
	PTPOperationResponsePacket *_response;	// 24 = 0x18
	BOOL _callbackThreadIsRunning;	// 28 = 0x1c
	opaque_pthread_t *_callbackThread;	// 32 = 0x20
	opaque_pthread_mutex_t _callbackThreadMutex;	// 36 = 0x24
	opaque_pthread_mutex_t _callbackThreadRunMutex;	// 80 = 0x50
	opaque_pthread_cond_t _callbackThreadCondition;	// 124 = 0x7c
	BOOL _callbackThreadConditionSignaled;	// 152 = 0x98
	CFRunLoopRef _callbackThreadRunLoop;	// 156 = 0x9c
	CFRunLoopSourceRef _callbackDummyMachPortRLSrc;	// 160 = 0xa0
	unsigned char _headerBuffer[12];	// 164 = 0xa4
	BOOL _headerBufferFound;	// 176 = 0xb0
	BOOL _delegateNeedsResponse;	// 177 = 0xb1
	BOOL _busy;	// 178 = 0xb2
	unsigned _canceledTransactionID;	// 180 = 0xb4
	PTPWrappedBytes *_dataForTransaction;	// 184 = 0xb8
	unsigned long long _excessReceivedDataSize;	// 188 = 0xbc
}
@property(readonly, assign) CFRunLoopRef callbackThreadRunLoop;	// G=0x35518791; converted property
@property(readonly, assign) int connectionStatus;	// G=0x355187f1; converted property
@property(readonly, assign) unsigned long long excessReceivedDataSize;	// G=0x3551884d; converted property
@property(retain) PTPOperationResponsePacket *response;	// G=0x355187a1; S=0x35518b21; converted property
@property(assign) BOOL responseReceived;	// G=0x355187c1; S=0x355187d1; converted property
@property(readonly, assign) int role;	// G=0x35518801; converted property
@property(assign) BOOL timedOut;	// G=0x35518815; S=0x35518905; converted property
@property(readonly, assign) unsigned short type;	// G=0x355187e1; converted property
- (id)init;	// 0x35518865
- (void)abortPendingIO;	// 0x35518839
- (void *)callbackThreadFunction;	// 0x35518cd9
// converted property getter: - (CFRunLoopRef)callbackThreadRunLoop;	// 0x35518791
- (void)cancelTransaction:(id)transaction;	// 0x3551883d
- (void)cleanupCallbackThread;	// 0x3551876d
- (BOOL)connected;	// 0x35518811
// converted property getter: - (int)connectionStatus;	// 0x355187f1
- (void)dealloc;	// 0x35518ec9
- (void)deviceReset;	// 0x35518849
- (unsigned short)deviceStatus;	// 0x35518841
- (void)endCallbackThread;	// 0x35518995
// converted property getter: - (unsigned long long)excessReceivedDataSize;	// 0x3551884d
- (BOOL)isCallbackThreadRunning;	// 0x35518781
- (int)lockCallbackThreadMutex;	// 0x35518c71
// converted property getter: - (id)response;	// 0x355187a1
// converted property getter: - (BOOL)responseReceived;	// 0x355187c1
// converted property getter: - (int)role;	// 0x35518801
- (void)sendData:(id)data;	// 0x3551882d
- (BOOL)sendEvent:(id)event;	// 0x35518835
- (id)sendRequest:(id)request receiveData:(id)data timeout:(unsigned long)timeout;	// 0x35518825
- (id)sendRequest:(id)request sendData:(id)data timeout:(unsigned long)timeout;	// 0x35518829
- (BOOL)sendResponse:(id)response;	// 0x35518831
- (void)setDelegate:(id)delegate;	// 0x355187b1
// converted property setter: - (void)setResponse:(id)response;	// 0x35518b21
// converted property setter: - (void)setResponseReceived:(BOOL)received;	// 0x355187d1
// converted property setter: - (void)setTimedOut:(BOOL)anOut;	// 0x35518905
- (int)signalCallbackThreadCondition;	// 0x35518bdd
- (BOOL)startCallbackThread;	// 0x35518a39
- (BOOL)startInitiator;	// 0x35518965
- (BOOL)startResponder;	// 0x3551897d
- (void)stop;	// 0x35518955
// converted property getter: - (BOOL)timedOut;	// 0x35518815
// converted property getter: - (unsigned short)type;	// 0x355187e1
- (int)unlockCallbackThreadMutex;	// 0x35518c09
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)timeout;	// 0x35518b61
@end
