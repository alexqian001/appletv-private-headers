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
@property(assign) id delegate;	// G=0x22dc19; S=0x22dc29; converted property
- (id)init;	// 0x22daf1
- (id)_checkDataIntegrity:(id)integrity;	// 0x22df71
- (unsigned long)_decryptReceivedWord:(unsigned long)word;	// 0x22e371
- (void)_processTouchCommand:(id)command;	// 0x22e389
- (void)_promptReceived:(id)received;	// 0x22e721
- (void)_setupControlReceiver:(id)receiver encryptionKey:(unsigned long)key;	// 0x22e181
- (void)allConnectionsClosed:(id)closed;	// 0x22dc39
- (void)dealloc;	// 0x22db75
// converted property getter: - (id)delegate;	// 0x22dc19
- (void)newBytesReceived:(id)received data:(id)data;	// 0x22dc71
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x22dc29
@end
