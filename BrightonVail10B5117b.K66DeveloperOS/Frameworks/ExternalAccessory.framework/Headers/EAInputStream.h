/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import "ExternalAccessory-Structs.h"
#import <NSInputStream.h> // Unknown library

@class EASession, EAAccessory, NSMutableData, NSCondition, NSRecursiveLock, NSThread;

@interface EAInputStream : NSInputStream {
	id _delegate;	// 4 = 0x4
	EAAccessory *_accessory;	// 8 = 0x8
	EASession *_session;	// 12 = 0xc
	int _sock;	// 16 = 0x10
	NSMutableData *_inputFromAccData;	// 20 = 0x14
	NSCondition *_inputFromAccCondition;	// 24 = 0x18
	NSRecursiveLock *_statusLock;	// 28 = 0x1c
	NSRecursiveLock *_runloopLock;	// 32 = 0x20
	NSThread *_inputFromAccThread;	// 36 = 0x24
	BOOL _isOpenCompletedEventSent;	// 40 = 0x28
	BOOL _hasNewBytesAvailable;	// 41 = 0x29
	BOOL _isAtEndEventSent;	// 42 = 0x2a
	unsigned _streamStatus;	// 44 = 0x2c
	CFRunLoopRef _runLoop;	// 48 = 0x30
	CFRunLoopSourceRef _runLoopSource;	// 52 = 0x34
}
@property(assign) id delegate;	// G=0x3193eca9; S=0x3193ecb9; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x3193eecd; converted property
- (id)initWithAccessory:(id)accessory forSession:(id)session socket:(int)socket;	// 0x3193e6f1
- (void)_accessoryDidDisconnect:(id)_accessory;	// 0x3193f1c9
- (void)_performAtEndOfStreamValidation;	// 0x3193f1d9
- (void)_readInputFromAccThread;	// 0x3193f4f5
- (void)_scheduleCallback;	// 0x3193f469
- (void)_streamEventTrigger;	// 0x3193f261
- (void)close;	// 0x3193eb3d
- (void)dealloc;	// 0x3193e841
// converted property getter: - (id)delegate;	// 0x3193eca9
- (void)endStream;	// 0x3193f165
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x3193f051
- (BOOL)hasBytesAvailable;	// 0x3193f055
- (void)open;	// 0x3193e909
- (void)openCompleted;	// 0x3193f101
- (id)propertyForKey:(id)key;	// 0x3193ecd1
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x3193ef2d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3193ee39
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3193ecd9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3193ecb9
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x3193ecd5
- (id)streamError;	// 0x3193ef29
// converted property getter: - (unsigned)streamStatus;	// 0x3193eecd
@end
