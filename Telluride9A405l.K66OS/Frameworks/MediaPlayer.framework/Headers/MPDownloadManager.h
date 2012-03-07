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
- (id)init;	// 0x33c743c5
- (void)_applyBlockToObservers:(id)observers;	// 0x33c74f35
- (id)_copyObservers;	// 0x33c75185
- (void)_rebuildCacheIfNecessary;	// 0x33c75215
- (void)addObserver:(id)observer;	// 0x33c74601
- (void)cancelDownloads:(id)downloads completionBlock:(id)block;	// 0x33c746d1
- (void)dealloc;	// 0x33c7455d
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x33c74b15
- (void)downloadManager:(id)manager downloadsDidChange:(id)downloads;	// 0x33c74a41
- (void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;	// 0x33c74be9
- (void)downloadManagerNetworkUsageDidChange:(id)downloadManagerNetworkUsage;	// 0x33c74e8d
- (id)downloadWithIdentifier:(long long)identifier;	// 0x33c746f1
- (void)removeObserver:(id)observer;	// 0x33c74969
@end
