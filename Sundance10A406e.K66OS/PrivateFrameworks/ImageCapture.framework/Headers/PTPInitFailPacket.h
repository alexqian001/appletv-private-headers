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
@property(assign) unsigned long reason;	// G=0x30614305; S=0x30614315; converted property
- (id)initWithReason:(unsigned long)reason;	// 0x306141a1
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x306141e1
- (id)contentForTCP;	// 0x30614239
- (id)description;	// 0x306142b9
// converted property getter: - (unsigned long)reason;	// 0x30614305
// converted property setter: - (void)setReason:(unsigned long)reason;	// 0x30614315
@end
