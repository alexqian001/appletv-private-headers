/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSDownloadManagerObserverPrivate.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, SSDownloadManager;

@interface MPDownloadManager : NSObject <SSDownloadManagerObserverPrivate> {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	SSDownloadManager *_downloadManager;	// 8 = 0x8
	NSMutableDictionary *_downloadsByID;	// 12 = 0xc
	CFArrayRef _observers;	// 16 = 0x10
}
- (id)init;	// 0x31a803c5
- (void)_applyBlockToObservers:(id)observers;	// 0x31a80f35
- (id)_copyObservers;	// 0x31a81185
- (void)_rebuildCacheIfNecessary;	// 0x31a81215
- (void)addObserver:(id)observer;	// 0x31a80601
- (void)cancelDownloads:(id)downloads completionBlock:(id)block;	// 0x31a806d1
- (void)dealloc;	// 0x31a8055d
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x31a80b15
- (void)downloadManager:(id)manager downloadsDidChange:(id)downloads;	// 0x31a80a41
- (void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;	// 0x31a80be9
- (void)downloadManagerNetworkUsageDidChange:(id)downloadManagerNetworkUsage;	// 0x31a80e8d
- (id)downloadWithIdentifier:(long long)identifier;	// 0x31a806f1
- (void)removeObserver:(id)observer;	// 0x31a80969
@end

