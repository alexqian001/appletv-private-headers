/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SSErrorHandlerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SSErrorHandler;

__attribute__((visibility("hidden")))
@interface ATVStoreErrorHandler : XXUnknownSuperclass <SSErrorHandlerDelegate> {
	SSErrorHandler *_handler;	// 4 = 0x4
	BOOL _connected;	// 8 = 0x8
}
@property(assign, getter=isConnected) BOOL connected;	// G=0x3bc989; S=0x3bc9a1; @synthesize=_connected
+ (id)sharedInstance;	// 0x3bc225
- (id)init;	// 0x3bc3e1
- (void).cxx_destruct;	// 0x3bc9b9
- (void)_handleCVVCheck:(id)check;	// 0x3bc73d
- (void)_handleStaleBilling:(id)billing;	// 0x3bc975
- (id)_init;	// 0x3bc2d5
- (void)dealloc;	// 0x3bc405
- (void)errorHandler:(id)handler handleSession:(id)session;	// 0x3bc639
- (void)errorHandlerDidDisconnect:(id)errorHandler;	// 0x3bc5c1
// declared property getter: - (BOOL)isConnected;	// 0x3bc989
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3bc9a1
- (void)start;	// 0x3bc445
- (void)stop;	// 0x3bc531
@end
