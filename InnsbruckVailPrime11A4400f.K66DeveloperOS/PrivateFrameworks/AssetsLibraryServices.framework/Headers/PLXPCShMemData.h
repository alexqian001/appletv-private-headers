/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSData.h>


@interface PLXPCShMemData : NSData {
	void *_buffer;	// 4 = 0x4
	unsigned long _dataLength;	// 8 = 0x8
	unsigned long _bufferLength;	// 12 = 0xc
}
- (id)initWithXPCShmem:(id)xpcshmem;	// 0x301899ed
- (id)initWithXPCShmem:(id)xpcshmem length:(long long)length;	// 0x30189a71
- (const void *)bytes;	// 0x30189ba5
- (void)dealloc;	// 0x30189a9d
- (id)description;	// 0x30189b39
- (unsigned)length;	// 0x30189bb5
@end

