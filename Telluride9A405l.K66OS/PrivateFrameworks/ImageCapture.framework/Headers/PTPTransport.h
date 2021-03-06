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
@property(readonly, assign) CFRunLoopRef callbackThreadRunLoop;	// G=0x3702c791; converted property
@property(readonly, assign) int connectionStatus;	// G=0x3702c7f1; converted property
@property(readonly, assign) unsigned long long excessReceivedDataSize;	// G=0x3702c84d; converted property
@property(retain) PTPOperationResponsePacket *response;	// G=0x3702c7a1; S=0x3702cb21; converted property
@property(assign) BOOL responseReceived;	// G=0x3702c7c1; S=0x3702c7d1; converted property
@property(readonly, assign) int role;	// G=0x3702c801; converted property
@property(assign) BOOL timedOut;	// G=0x3702c815; S=0x3702c905; converted property
@property(readonly, assign) unsigned short type;	// G=0x3702c7e1; converted property
- (id)init;	// 0x3702c865
- (void)abortPendingIO;	// 0x3702c839
- (void *)callbackThreadFunction;	// 0x3702ccd9
// converted property getter: - (CFRunLoopRef)callbackThreadRunLoop;	// 0x3702c791
- (void)cancelTransaction:(id)transaction;	// 0x3702c83d
- (void)cleanupCallbackThread;	// 0x3702c76d
- (BOOL)connected;	// 0x3702c811
// converted property getter: - (int)connectionStatus;	// 0x3702c7f1
- (void)dealloc;	// 0x3702cec9
- (void)deviceReset;	// 0x3702c849
- (unsigned short)deviceStatus;	// 0x3702c841
- (void)endCallbackThread;	// 0x3702c995
// converted property getter: - (unsigned long long)excessReceivedDataSize;	// 0x3702c84d
- (BOOL)isCallbackThreadRunning;	// 0x3702c781
- (int)lockCallbackThreadMutex;	// 0x3702cc71
// converted property getter: - (id)response;	// 0x3702c7a1
// converted property getter: - (BOOL)responseReceived;	// 0x3702c7c1
// converted property getter: - (int)role;	// 0x3702c801
- (void)sendData:(id)data;	// 0x3702c82d
- (BOOL)sendEvent:(id)event;	// 0x3702c835
- (id)sendRequest:(id)request receiveData:(id)data timeout:(unsigned long)timeout;	// 0x3702c825
- (id)sendRequest:(id)request sendData:(id)data timeout:(unsigned long)timeout;	// 0x3702c829
- (BOOL)sendResponse:(id)response;	// 0x3702c831
- (void)setDelegate:(id)delegate;	// 0x3702c7b1
// converted property setter: - (void)setResponse:(id)response;	// 0x3702cb21
// converted property setter: - (void)setResponseReceived:(BOOL)received;	// 0x3702c7d1
// converted property setter: - (void)setTimedOut:(BOOL)anOut;	// 0x3702c905
- (int)signalCallbackThreadCondition;	// 0x3702cbdd
- (BOOL)startCallbackThread;	// 0x3702ca39
- (BOOL)startInitiator;	// 0x3702c965
- (BOOL)startResponder;	// 0x3702c97d
- (void)stop;	// 0x3702c955
// converted property getter: - (BOOL)timedOut;	// 0x3702c815
// converted property getter: - (unsigned short)type;	// 0x3702c7e1
- (int)unlockCallbackThreadMutex;	// 0x3702cc09
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)timeout;	// 0x3702cb61
@end

