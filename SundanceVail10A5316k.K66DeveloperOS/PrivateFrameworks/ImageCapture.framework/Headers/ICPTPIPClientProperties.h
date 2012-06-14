/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClientProperties : NSObject {
	int _pid;	// 4 = 0x4
	BOOL _registered;	// 8 = 0x8
	CFFileDescriptorRef _fdref;	// 12 = 0xc
	CFMessagePortRef _remotePort;	// 16 = 0x10
	int _remoteAddress;	// 20 = 0x14
	int _serverFD;	// 24 = 0x18
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x328cea55; S=0x328cea69; @synthesize=_fdref
@property(assign) int pid;	// G=0x328ce9f9; S=0x328cea0d; @synthesize=_pid
@property(assign, getter=didRegister) BOOL registered;	// G=0x328cea25; S=0x328cea3d; @synthesize=_registered
@property(assign) int remoteAddress;	// G=0x328ceaad; S=0x328ceac1; @synthesize=_remoteAddress
@property(assign) CFMessagePortRef remotePort;	// G=0x328cea81; S=0x328cea95; @synthesize=_remotePort
@property(assign) int serverFD;	// G=0x328cead9; S=0x328ceaed; @synthesize=_serverFD
- (void)dealloc;	// 0x328ce949
// declared property getter: - (BOOL)didRegister;	// 0x328cea25
// declared property getter: - (CFFileDescriptorRef)fdref;	// 0x328cea55
- (void)finalize;	// 0x328ce9a1
// declared property getter: - (int)pid;	// 0x328ce9f9
// declared property getter: - (int)remoteAddress;	// 0x328ceaad
// declared property getter: - (CFMessagePortRef)remotePort;	// 0x328cea81
// declared property getter: - (int)serverFD;	// 0x328cead9
// declared property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x328cea69
// declared property setter: - (void)setPid:(int)pid;	// 0x328cea0d
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x328cea3d
// declared property setter: - (void)setRemoteAddress:(int)address;	// 0x328ceac1
// declared property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x328cea95
// declared property setter: - (void)setServerFD:(int)fd;	// 0x328ceaed
@end
