/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVTCPControlReceiver, NSMutableData;

__attribute__((visibility("hidden")))
@interface ATVDirectionalRemoteConnectionHandler : XXUnknownSuperclass {
	ATVTCPControlReceiver *_controlReceiver;	// 4 = 0x4
	unsigned long _receiverDecryptionKey;	// 8 = 0x8
	NSMutableData *_remainderData;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x23a329; S=0x23a339; converted property
- (id)init;	// 0x23a201
- (id)_checkDataIntegrity:(id)integrity;	// 0x23a679
- (unsigned long)_decryptReceivedWord:(unsigned long)word;	// 0x23aa81
- (void)_processTouchCommand:(id)command;	// 0x23aa99
- (void)_promptReceived:(id)received;	// 0x23ae31
- (void)_setupControlReceiver:(id)receiver encryptionKey:(unsigned long)key;	// 0x23a88d
- (void)allConnectionsClosed:(id)closed;	// 0x23a349
- (void)dealloc;	// 0x23a285
// converted property getter: - (id)delegate;	// 0x23a329
- (void)newBytesReceived:(id)received data:(id)data;	// 0x23a381
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x23a339
@end
