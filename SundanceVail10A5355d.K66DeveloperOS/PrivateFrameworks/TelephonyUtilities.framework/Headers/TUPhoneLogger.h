/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import "TelephonyUtilities-Structs.h"
#import "TULogger.h"
#import <NSObject.h> // Unknown library

@class TURemoteAppender, TUInMemoryAppender;

@interface TUPhoneLogger : NSObject <TULogger> {
	int _lock;	// 4 = 0x4
	id _signalHandler;	// 8 = 0x8
	TUInMemoryAppender *_inMemoryAppender;	// 12 = 0xc
	TURemoteAppender *_remoteAppender;	// 16 = 0x10
	int _loggingConfiguration;	// 20 = 0x14
	BOOL _loggingConfigurationCached;	// 24 = 0x18
	dispatch_queue_s *_appenderQueue;	// 28 = 0x1c
}
@property(readonly, retain) id signalHandler;	// G=0x37a8ea55; converted property
+ (id)sharedPhoneLogger;	// 0x37a8e649
- (id)init;	// 0x37a8e85d
- (id)_appender;	// 0x37a8ed41
- (void)_handleSignal:(int)signal;	// 0x37a8e6b5
- (void)_loggingChanged;	// 0x37a8ead1
- (int)_loggingConfiguration;	// 0x37a8eb19
- (BOOL)_shouldLogWithLevel:(int)level topic:(id)topic;	// 0x37a8ed25
- (void)dealloc;	// 0x37a8e9bd
- (id)identifier;	// 0x37a8ea65
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format;	// 0x37a8ed89
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format args:(void *)args;	// 0x37a8f235
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace text:(id)text;	// 0x37a8eff5
- (BOOL)shouldLog;	// 0x37a8f49d
- (BOOL)shouldLogWithLevel:(int)level topic:(id)topic;	// 0x37a8f4dd
// converted property getter: - (id)signalHandler;	// 0x37a8ea55
@end

