/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {
	NSOutputStream *_stream;	// 4 = 0x4
}
- (id)initWithOutputStream:(id)outputStream;	// 0x3288edc1
- (void)dealloc;	// 0x3288ee15
- (BOOL)writeMessage:(id)message;	// 0x3288ee61
@end
