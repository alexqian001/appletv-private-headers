/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPInitFailPacket : NSObject {
	unsigned long _reason;	// 4 = 0x4
}
@property(assign) unsigned long reason;	// G=0x34006305; S=0x34006315; converted property
- (id)initWithReason:(unsigned long)reason;	// 0x340061a1
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x340061e1
- (id)contentForTCP;	// 0x34006239
- (id)description;	// 0x340062b9
// converted property getter: - (unsigned long)reason;	// 0x34006305
// converted property setter: - (void)setReason:(unsigned long)reason;	// 0x34006315
@end
