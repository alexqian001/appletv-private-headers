/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUBufferedInputStream.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {
	NSData *mData;	// 4 = 0x4
	const char *mStart;	// 8 = 0x8
	const char *mCurrent;	// 12 = 0xc
	const char *mEnd;	// 16 = 0x10
}
- (id)initWithData:(id)data;	// 0x33c1e61d
- (id)initWithData:(id)data offset:(unsigned long)offset length:(unsigned long)length;	// 0x33aece1d
- (BOOL)canSeek;	// 0x33c1e6b9
- (void)close;	// 0x33aed069
- (id)closeLocalStream;	// 0x33c1e731
- (void)dealloc;	// 0x33aed01d
- (void)disableSystemCaching;	// 0x33c1e729
- (void)enableSystemCaching;	// 0x33c1e72d
- (long long)offset;	// 0x33c1e655
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x33c1e679
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x33aecfdd
- (void)seekToOffset:(long long)offset;	// 0x33aecf45
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x33c1e6bd
@end
