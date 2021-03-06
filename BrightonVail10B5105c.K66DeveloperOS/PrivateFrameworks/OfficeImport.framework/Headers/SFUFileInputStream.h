/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"


@interface SFUFileInputStream : NSObject <SFUInputStream> {
	int mFd;	// 4 = 0x4
	BOOL mIsCachingDisabled;	// 8 = 0x8
	long long mStartOffset;	// 12 = 0xc
	long long mCurrentOffset;	// 20 = 0x14
	long long mEndOffset;	// 28 = 0x1c
}
- (id)initWithFileDescriptor:(int)fileDescriptor offset:(long long)offset length:(long long)length;	// 0x379768b5
- (id)initWithPath:(id)path offset:(long long)offset;	// 0x37b6d74d
- (id)initWithPath:(id)path offset:(long long)offset length:(long long)length;	// 0x37b6d5e5
- (BOOL)canSeek;	// 0x3797700d
- (void)close;	// 0x37977b19
- (id)closeLocalStream;	// 0x37b6d905
- (void)dealloc;	// 0x37977ad9
- (void)disableSystemCaching;	// 0x37b6d82d
- (void)enableSystemCaching;	// 0x37b6d899
- (long long)offset;	// 0x37976b59
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x37977581
- (void)seekToOffset:(long long)offset;	// 0x37977421
@end

