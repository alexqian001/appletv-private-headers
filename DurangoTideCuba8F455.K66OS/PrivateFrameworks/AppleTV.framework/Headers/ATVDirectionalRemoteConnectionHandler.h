/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, ATVTCPControlReceiver;

__attribute__((visibility("hidden")))
@interface ATVDirectionalRemoteConnectionHandler : NSObject {
@private
	ATVTCPControlReceiver *_controlReceiver;	// 4 = 0x4
	unsigned _receiverDecryptionKey;	// 8 = 0x8
	NSMutableData *_remainderData;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x3069552d; S=0x3069553d; converted property
- (id)init;	// 0x306955e9
- (id)_checkDataIntegrity:(id)integrity;	// 0x306958fd
- (unsigned long)_decryptReceivedWord:(unsigned long)word;	// 0x30695cdd
- (void)_processTouchCommand:(id)command;	// 0x30695f89
- (void)_promptReceived:(id)received;	// 0x3069565d
- (void)_setupControlReceiver:(id)receiver encryptionKey:(unsigned long)key;	// 0x30695afd
- (void)allConnectionsClosed:(id)closed;	// 0x30695acd
- (void)dealloc;	// 0x3069554d
// converted property getter: - (id)delegate;	// 0x3069552d
- (void)newBytesReceived:(id)received data:(id)data;	// 0x30695cf1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3069553d
@end
