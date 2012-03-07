/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSLock, NSMutableArray, BRAsyncTaskContext, NSString, NSMutableDictionary;

@interface BRImageManager : NSObject {
@private
	unsigned long long _maxCacheSize;	// 4 = 0x4
	unsigned long long _cacheSize;	// 12 = 0xc
	unsigned long long _maxCacheCount;	// 20 = 0x14
	unsigned long long _cacheCount;	// 28 = 0x1c
	unsigned long long _cacheSizePurgeThreshhold;	// 36 = 0x24
	BOOL _cachePurging;	// 44 = 0x2c
	BOOL _purgeCacheOnLoadAndQuit;	// 45 = 0x2d
	BOOL _disableAccessDateUpdates;	// 46 = 0x2e
	NSString *_imageCachePath;	// 48 = 0x30
	NSMutableDictionary *_images;	// 52 = 0x34
	NSMutableDictionary *_remoteImageRequests;	// 56 = 0x38
	NSLock *_remoteImageLock;	// 60 = 0x3c
	NSMutableArray *_jobQueue;	// 64 = 0x40
	NSMutableDictionary *_pendingCachedImagesToFlush;	// 68 = 0x44
	BOOL _processJobs;	// 72 = 0x48
	BRAsyncTaskContext *_loadTaskContext;	// 76 = 0x4c
	BRAsyncTaskContext *_writeTaskContext;	// 80 = 0x50
	NSMutableArray *_activeDelegates;	// 84 = 0x54
	int _pruneCount;	// 88 = 0x58
}
+ (id)fullScreenImageResizingOptions;	// 0x342aeaad
+ (id)generalPurposeManager;	// 0x342af291
+ (id)screenSaverManager;	// 0x342af3ed
+ (id)trickPlayManager;	// 0x342af4fd
- (id)initWithCachePath:(id)cachePath purgeCacheOnLoadAndQuit:(BOOL)quit maxCacheSizeInMB:(unsigned long long)mb maxCacheCount:(unsigned long long)count cacheSizePurgeThreshholdInMB:(unsigned long long)mb5 pruneCount:(int)count6 disableAccessDateUpdates:(BOOL)updates;	// 0x342aeb3d
- (void)_ATVDataImageAvailable:(id)available;	// 0x342b3e09
- (void)_addLoadJobToQueue:(id)queue;	// 0x342b1b45
- (void)_addWriteJobToQueue:(id)queue withImageID:(id)imageID height:(int)height width:(int)width cropped:(BOOL)cropped;	// 0x342b15f9
- (id)_cachedCroppedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x342b3c2d
- (id)_cachedCroppedImagePathForImageID:(id)imageID forSize:(CGSize)size;	// 0x342b3b11
- (id)_cachedOriginalImagePathForImageID:(id)imageID;	// 0x342b39b9
- (id)_cachedResizedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x342b3bcd
- (id)_cachedResizedImagePathForImageID:(id)imageID forSize:(CGSize)size;	// 0x342b3a55
- (void)_checkCache;	// 0x342b3561
- (void)_decrementCacheSize:(unsigned long long)size;	// 0x342b3519
- (id)_defaultResizingImageOptions;	// 0x342b2949
- (id)_extensionForImageID:(id)imageID;	// 0x342b3d75
- (id)_imageFromWriteQueue:(id)writeQueue;	// 0x342b3c8d
- (void)_imageLoadFailed:(id)failed;	// 0x342b31d5
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x342b2e69
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x342b34bd
- (BOOL)_isLoadJobQueued:(id)queued;	// 0x342b36d9
- (void)_maintainImageCache;	// 0x342b2b61
- (void)_performLoadJob:(id)job;	// 0x342b1e29
- (void)_performWriteJob:(id)job;	// 0x342b19a1
- (void)_postUnavailableImageNotification:(id)notification;	// 0x342b331d
- (void)_postUpdateNotification:(id)notification;	// 0x342b32e5
- (void)_postWriteCompletedNotification:(id)notification size:(CGSize)size cropped:(BOOL)cropped;	// 0x342b3389
- (void)_purgeRemoveDirectory:(BOOL)directory;	// 0x342b3fe9
- (id)_queuedLoadJobWithName:(id)name;	// 0x342b3781
- (void)_removeCacheFile:(id)file;	// 0x342b2b25
- (void)_removeLoadJobFromQueue:(id)queue;	// 0x342b1d05
- (void)_removeRemoteImageRequestNamed:(id)named;	// 0x342b29d9
- (void)_removeWriteJobFromQueue:(id)queue;	// 0x342b18bd
- (void)_scheduleMaintainCache;	// 0x342b3665
- (void)_startLoadJob:(id)job;	// 0x342b1c75
- (void)_startWriteJob:(id)job;	// 0x342b1825
- (void)_terminateNotification:(id)notification;	// 0x342b38dd
- (BOOL)_updateExistingImageRecord:(id)record;	// 0x342b2255
- (id)_writeIDForImageID:(id)imageID cropped:(BOOL)cropped size:(CGSize)size;	// 0x342b3945
- (void)_writeImage:(id)image named:(id)named forSize:(CGSize)size cropped:(BOOL)cropped;	// 0x342b2379
- (id)absolutePathForImageID:(id)imageID;	// 0x342b1595
- (id)cachePath;	// 0x342b15cd
- (float)cacheSize;	// 0x342b15dd
- (void)cancelWriteForImageWithURL:(id)url imageID:(id)anId;	// 0x342afa19
- (void)dealloc;	// 0x342af175
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x342b0865
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk original:(BOOL)original rotate:(BOOL)rotate;	// 0x342b0899
- (BOOL)hasRemoteImageBeenRequestedForMediaID:(id)mediaID;	// 0x342b12e9
- (id)imageNameFromURL:(id)url;	// 0x342af77d
- (id)imageNamed:(id)named;	// 0x342b061d
- (id)imageNamed:(id)named croppedToSize:(CGSize)size create:(BOOL)create;	// 0x342b00e9
- (id)imageNamed:(id)named scaledToSize:(CGSize)size;	// 0x342b05e1
- (BOOL)isImageAvailable:(id)available;	// 0x342af601
- (BOOL)isImageAvailable:(id)available croppedToSize:(CGSize)size;	// 0x342af741
- (BOOL)isImageAvailable:(id)available scaledToSize:(CGSize)size;	// 0x342af705
- (BOOL)isImageWritten:(id)written;	// 0x342af6ed
- (id)loadImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x342afa81
- (void)moveImageFromPath:(id)path imageID:(id)anId;	// 0x342afd55
- (void)purge;	// 0x342b15b9
- (void)purgeAndRemoveDirectory;	// 0x342b15a5
- (void)purgeRemoteRequest;	// 0x342b144d
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId;	// 0x342b0fa9
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId withResizingOptions:(id)resizingOptions;	// 0x342b0fe5
- (void)receivedRemoteITunesImage:(id)image forID:(id)anId;	// 0x342b0e51
- (void)receivedRemoteImage:(id)image forID:(id)anId;	// 0x342b1189
- (void)remoteImageRequestForMediaID:(id)mediaID;	// 0x342b0c9d
- (void)writeCroppedImage:(id)image named:(id)named;	// 0x342afce1
- (id)writeEncryptedImageFromURL:(id)url;	// 0x342af835
- (void)writeImage:(id)image named:(id)named;	// 0x342afbb9
- (void)writeImage:(id)image named:(id)named asynchronous:(BOOL)asynchronous;	// 0x342afbdd
- (id)writeImageFromImageProxy:(id)imageProxy;	// 0x342af7ad
- (id)writeImageFromURL:(id)url;	// 0x342af815
- (id)writeImageFromURL:(id)url decryptionAgent:(id)agent;	// 0x342af889
- (id)writeImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x342af8ad
- (id)writeImageFromURL:(id)url imageID:(id)anId headerFields:(id)fields decryptionAgent:(id)agent;	// 0x342af8d1
- (void)writeScaledImage:(id)image named:(id)named withSize:(CGSize)size;	// 0x342afc35
@end
