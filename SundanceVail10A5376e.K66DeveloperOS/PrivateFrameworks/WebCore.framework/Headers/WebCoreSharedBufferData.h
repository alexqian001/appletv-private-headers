/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSData.h> // Unknown library


@interface WebCoreSharedBufferData : NSData {
	RefPtr<WebCore::SharedBuffer> sharedBuffer;	// 4 = 0x4
}
+ (void)initialize;	// 0x3182b061
- (id)initWithSharedBuffer:(SharedBuffer *)sharedBuffer;	// 0x3182b079
- (id).cxx_construct;	// 0x3182b065
- (void).cxx_destruct;	// 0x3182bebd
- (const void *)bytes;	// 0x3182b211
- (void)dealloc;	// 0x3182be69
- (void)finalize;	// 0x31edaba5
- (unsigned)length;	// 0x3182b189
@end

