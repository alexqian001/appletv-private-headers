/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSArray, SSXPCConnection, SSDownloadManagerOptions;

@interface SSDownloadManager : NSObject {
@private
	dispatch_queue_s *_accessQueue;	// 4 = 0x4
	NSArray *_activeDownloads;	// 8 = 0x8
	BOOL _activeDownloadsChanged;	// 12 = 0xc
	dispatch_queue_s *_backgroundQueue;	// 16 = 0x10
	SSXPCConnection *_connection;	// 20 = 0x14
	NSArray *_downloads;	// 24 = 0x18
	BOOL _downloadsChanged;	// 28 = 0x1c
	BOOL _isUsingNetwork;	// 29 = 0x1d
	SSXPCConnection *_observerConnection;	// 32 = 0x20
	dispatch_queue_s *_observerQueue;	// 36 = 0x24
	CFArrayRef _observers;	// 40 = 0x28
	SSDownloadManagerOptions *_options;	// 44 = 0x2c
	NSMutableSet *_removedDownloads;	// 48 = 0x30
}
@property(readonly, assign) NSArray *activeDownloads;	// G=0x324f8401; 
@property(readonly, assign) NSArray *downloads;	// G=0x324f8ce9; 
@property(readonly, assign) SSDownloadManagerOptions *managerOptions;	// G=0x324f915d; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x324f9089; 
+ (id)EBookDownloadKinds;	// 0x324f9765
+ (id)EBookDownloadManager;	// 0x324f94f5
+ (id)IPodDownloadKinds;	// 0x324f9799
+ (id)IPodDownloadManager;	// 0x324f95c5
+ (void)_sendGlobalHandler:(id)handler;	// 0x324fa1a9
+ (void)_triggerDownloads;	// 0x324f9c7d
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)bundleIdentifiers;	// 0x324f9869
+ (void)removePersistenceIdentifier:(id)identifier;	// 0x324f82f5
+ (void)retryAllRestoreDownloads;	// 0x324f990d
+ (void)setDownloadHandler:(id)handler;	// 0x324f8399
+ (id)softwareDownloadKinds;	// 0x324f99bd
+ (id)softwareDownloadManager;	// 0x324f9695
- (id)initWithDownloadKinds:(id)downloadKinds;	// 0x324f7fad
- (id)initWithManagerOptions:(id)managerOptions;	// 0x324f8025
- (id)_XPCConnection;	// 0x324fa199
- (void)_connectAsObserver;	// 0x324fa26d
- (id)_copyDownloadKindsUsingNetwork;	// 0x324fa521
- (id)_copyDownloads;	// 0x324fa705
- (id)_copyDownloadsForMessage:(long long)message downloadIDs:(void *)ids;	// 0x324fa875
- (void)_finishDownloads:(id)downloads;	// 0x324f9d39
- (void)_handleDownloadStatesChanged:(void *)changed;	// 0x324fb685
- (void)_handleDownloadsChanged:(void *)changed;	// 0x324fabb5
- (void)_handleDownloadsRemoved:(void *)removed;	// 0x324fb341
- (void)_handleMessage:(void *)message fromServerConnection:(xpc_connection_s *)serverConnection;	// 0x324fbe75
- (void)_handleReply:(void *)reply forDownloads:(id)downloads message:(void *)message isRetry:(BOOL)retry block:(id)block;	// 0x324fbf29
- (id)_initSSDownloadManager;	// 0x324f7e2d
- (void)_insertDownloads:(id)downloads before:(id)before after:(id)after completionBlock:(id)block;	// 0x324fc1a9
- (void)_loadDownloadKindsUsingNetwork;	// 0x324fc419
- (void)_moveDownload:(id)download before:(id)before after:(id)after completionBlock:(id)block;	// 0x324fc5d5
- (void *)_newOptionsDictionary;	// 0x324fc691
- (void)_sendMessage:(void *)message withCompletionBlock:(id)completionBlock;	// 0x324fc765
- (void)_sendMessageToObservers:(SEL)observers;	// 0x324fc905
- (void)_sendObserverConnection;	// 0x324fcb15
- (void)_willFinishDownloads:(id)downloads;	// 0x324f9f31
// declared property getter: - (id)activeDownloads;	// 0x324f8401
- (void)addDownloads:(id)downloads completionBlock:(id)block;	// 0x324f8689
- (void)addObserver:(id)observer;	// 0x324f8a65
- (BOOL)canCancelDownload:(id)download;	// 0x324f8b35
- (void)cancelAllDownloadsWithCompletionBlock:(id)completionBlock;	// 0x324f8b4d
- (void)cancelDownloads:(id)downloads completionBlock:(id)block;	// 0x324f8bd9
- (void)dealloc;	// 0x324f80e9
// declared property getter: - (id)downloads;	// 0x324f8ce9
- (void)finishDownloads:(id)downloads;	// 0x324f8e75
- (void)getDownloadsUsingBlock:(id)block;	// 0x324f8ea9
- (void)insertDownloads:(id)downloads afterDownload:(id)download completionBlock:(id)block;	// 0x324f9041
- (void)insertDownloads:(id)downloads beforeDownload:(id)download completionBlock:(id)block;	// 0x324f9065
// declared property getter: - (BOOL)isUsingNetwork;	// 0x324f9089
// declared property getter: - (id)managerOptions;	// 0x324f915d
- (void)moveDownload:(id)download afterDownload:(id)download2 completionBlock:(id)block;	// 0x324f9195
- (void)moveDownload:(id)download beforeDownload:(id)download2 completionBlock:(id)block;	// 0x324f91b9
- (void)pauseDownloads:(id)downloads completionBlock:(id)block;	// 0x324f91dd
- (void)reloadFromServer;	// 0x324f99f1
- (void)removeObserver:(id)observer;	// 0x324f93fd
- (void)resumeDownloads:(id)downloads completionBlock:(id)block;	// 0x324f92ed
- (void)setDownloads:(id)downloads completionBlock:(id)block;	// 0x324f94d5
- (void)setDownloads:(id)downloads forKinds:(id)kinds completionBlock:(id)block;	// 0x324f9a41
@end
