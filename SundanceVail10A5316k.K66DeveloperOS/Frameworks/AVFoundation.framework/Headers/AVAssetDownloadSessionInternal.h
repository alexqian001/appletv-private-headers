/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSNumber, AVWeakReference, NSError, NSURL;
@protocol OS_dispatch_queue;

@interface AVAssetDownloadSessionInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	OpaqueFigPlayer *player;	// 8 = 0x8
	OpaqueFigPlaybackItem *playbackItem;	// 12 = 0xc
	OpaqueFigAsset *asset;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *readWriteQueue;	// 20 = 0x14
	int status;	// 24 = 0x18
	NSError *error;	// 28 = 0x1c
	BOOL waitingToStartDownload;	// 32 = 0x20
	int priority;	// 36 = 0x24
	NSURL *URL;	// 40 = 0x28
	NSURL *destinationURL;	// 44 = 0x2c
	unsigned long long downloadToken;	// 48 = 0x30
	NSNumber *cachePrimingDownloadTokenNum;	// 56 = 0x38
}
@end
