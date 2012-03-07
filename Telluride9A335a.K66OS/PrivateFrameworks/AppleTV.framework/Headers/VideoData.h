/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VideoData : NSObject {
@private
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int videoType;	// 12 = 0xc
	int width;	// 16 = 0x10
	int height;	// 20 = 0x14
	int parX;	// 24 = 0x18
	int parY;	// 28 = 0x1c
	long long averageFrameTime;	// 32 = 0x20
	int averageBitRate;	// 40 = 0x28
}
- (id)initWithBuffer:(id)buffer;	// 0x343bad7c
- (int)getAverageBitRate;	// 0x343bad68
- (long long)getAverageFrameTime;	// 0x343bad50
- (int)getFlags;	// 0x343bacc4
- (int)getHeight;	// 0x343bad14
- (int)getPID;	// 0x343bacd8
- (int)getParX;	// 0x343bad28
- (int)getParY;	// 0x343bad3c
- (int)getVideoType;	// 0x343bacec
- (int)getWidth;	// 0x343bad00
@end
