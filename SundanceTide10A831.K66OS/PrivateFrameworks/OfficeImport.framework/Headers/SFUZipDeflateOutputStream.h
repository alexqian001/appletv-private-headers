/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library


@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream> {
	id<SFUOutputStream> mOutputStream;	// 4 = 0x4
	z_stream_s mDeflateStream;	// 8 = 0x8
	char *mOutBuffer;	// 64 = 0x40
}
- (id)initWithOutputStream:(id)outputStream;	// 0x36c995a9
- (BOOL)canCreateInputStream;	// 0x36c99b41
- (BOOL)canSeek;	// 0x36c99aad
- (void)close;	// 0x36c99929
- (id)closeLocalStream;	// 0x36c99829
- (void)dealloc;	// 0x36c997b9
- (id)inputStream;	// 0x36c99b45
- (long long)offset;	// 0x36c99b2d
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x36c99ab1
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x36c99951
@end
