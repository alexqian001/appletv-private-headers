/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "SSDownloadManagerObserver.h"

@class SSDownloadManager, NSOperationQueue, NSMutableDictionary;

@interface AsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {
	SSDownloadManager *_manager;	// 4 = 0x4
	NSOperationQueue *_queue;	// 8 = 0x8
	NSMutableDictionary *_downloads;	// 12 = 0xc
	BOOL _reconnectInProgress;	// 16 = 0x10
}
- (id)initWithDownloadManager:(id)downloadManager;	// 0x347716c1
- (void)_attemptReconnect;	// 0x34772b49
- (void)addDownload:(id)download completionBlock:(id)block;	// 0x34772a15
- (void)addDownloads:(id)downloads completionBlock:(id)block;	// 0x34772941
- (void)addOperationWithBlock:(id)block;	// 0x34771d91
- (void)cancelDownload:(long long)download completionBlock:(id)block;	// 0x3477251d
- (void)dealloc;	// 0x34771bb9
- (void)downloadHandlerDisconnected:(BOOL)disconnected;	// 0x34772e0d
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x34771f7d
- (void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;	// 0x347722b9
- (void)finishDownload:(long long)download;	// 0x3477286d
- (void)setDelegate:(id)delegate forDownload:(long long)download;	// 0x34771c31
- (void)withDownload:(long long)download perform:(id)perform;	// 0x34771e69
- (void)withDownload:(long long)download performAsync:(id)async;	// 0x34771ea9
- (void)withDownloadMatchingIdentifier:(id)downloadMatchingIdentifier perform:(id)perform;	// 0x34772625
@end

