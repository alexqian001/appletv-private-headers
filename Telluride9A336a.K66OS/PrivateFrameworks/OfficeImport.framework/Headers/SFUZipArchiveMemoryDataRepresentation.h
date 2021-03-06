/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
@private
	NSData *mData;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x34d5bd19
- (id)bufferedInputStream;	// 0x34d5bd71
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x34e6178d
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x34d5bdd1
- (id)data;	// 0x34e616f9
- (long long)dataLength;	// 0x34d5bda9
- (void)dealloc;	// 0x34d65db1
- (BOOL)hasSameLocationAs:(id)as;	// 0x34e6171d
- (id)inputStream;	// 0x34e617c5
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x34e6170d
- (BOOL)isReadable;	// 0x34e61709
@end

