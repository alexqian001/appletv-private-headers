/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUFileInputStream : NSObject <SFUInputStream> {
@private
	int mFd;	// 4 = 0x4
	BOOL mIsCachingDisabled;	// 8 = 0x8
	long long mStartOffset;	// 12 = 0xc
	long long mCurrentOffset;	// 20 = 0x14
	long long mEndOffset;	// 28 = 0x1c
}
- (id)initWithFileDescriptor:(int)fileDescriptor offset:(long long)offset length:(long long)length;	// 0x36cbd73d
- (id)initWithPath:(id)path offset:(long long)offset;	// 0x36cbd9c1
- (id)initWithPath:(id)path offset:(long long)offset length:(long long)length;	// 0x36cbd859
- (BOOL)canSeek;	// 0x36cbdbf1
- (void)close;	// 0x36cbdca1
- (id)closeLocalStream;	// 0x36cbdcf9
- (void)dealloc;	// 0x36cbdaa1
- (void)disableSystemCaching;	// 0x36cbdc31
- (void)enableSystemCaching;	// 0x36cbdc69
- (long long)offset;	// 0x36cbdae1
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x36cbdb11
- (void)seekToOffset:(long long)offset;	// 0x36cbdbf5
@end
