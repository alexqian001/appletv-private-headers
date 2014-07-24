/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSString, NSMutableDictionary, BRAsyncTaskContext, NSLock;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRImageManager : XXUnknownSuperclass {
	unsigned long long _maxCacheSize;	// 4 = 0x4
	unsigned long long _cacheSize;	// 12 = 0xc
	unsigned long long _maxCacheCount;	// 20 = 0x14
	unsigned long long _cacheCount;	// 28 = 0x1c
	unsigned long long _cacheSizePurgeThreshhold;	// 36 = 0x24
	BOOL _cachePurging;	// 44 = 0x2c
	BOOL _purgeCacheOnLoadAndQuit;	// 45 = 0x2d
	BOOL _disableAccessDateUpdates;	// 46 = 0x2e
	NSString *_imageCachePath;	// 48 = 0x30
	NSObject<OS_dispatch_queue> *_imagesAccessQueue;	// 52 = 0x34
	NSMutableDictionary *_images;	// 56 = 0x38
	NSMutableDictionary *_remoteImageRequests;	// 60 = 0x3c
	NSLock *_remoteImageLock;	// 64 = 0x40
	NSObject<OS_dispatch_queue> *_loadJobAccessQueue;	// 68 = 0x44
	NSMutableDictionary *_loadJobs;	// 72 = 0x48
	NSObject<OS_dispatch_queue> *_pendingImageWriteQueue;	// 76 = 0x4c
	NSMutableDictionary *_pendingCachedImagesToFlush;	// 80 = 0x50
	BOOL _processJobs;	// 84 = 0x54
	BRAsyncTaskContext *_writeTaskContext;	// 88 = 0x58
	int _pruneCount;	// 92 = 0x5c
}
@property(assign, nonatomic) int pruneCount;	// G=0x452031; S=0x452041; @synthesize=_pruneCount
+ (void)_initSerialAsyncPurgeQueue;	// 0x452051
+ (void)_queuePurgeForPath:(id)path;	// 0x4522e1
+ (BOOL)_removeCachPath:(id)path error:(id *)error;	// 0x452195
+ (id)fullScreenImageResizingOptions;	// 0x44fea9
+ (id)generalPurposeManager;	// 0x4506d1
+ (id)screenSaverManager;	// 0x450829
+ (id)trickPlayManager;	// 0x450941
- (id)initWithCachePath:(id)cachePath purgeCacheOnLoadAndQuit:(BOOL)quit maxCacheSizeInMB:(unsigned long long)mb maxCacheCount:(unsigned long long)count cacheSizePurgeThreshholdInMB:(unsigned long long)mb5 pruneCount:(int)count6 disableAccessDateUpdates:(BOOL)updates;	// 0x44ff39
- (void)_ATVDataImageAvailable:(id)available;	// 0x4546b9
- (void)_addLoadJobToQueue:(id)queue;	// 0x452a31
- (void)_addWriteJobToQueue:(id)queue withImageID:(id)imageID height:(int)height width:(int)width cropped:(BOOL)cropped;	// 0x4524fd
- (id)_cachedCommonImagePathForImageIDKey:(id)imageIDKey extension:(id)extension;	// 0x4544a1
- (id)_cachedCroppedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x454445
- (id)_cachedCroppedImagePathForImageID:(id)imageID forSize:(CGSize)size extension:(id)extension;	// 0x4543ad
- (id)_cachedOriginalImagePathForImageID:(id)imageID extension:(id)extension;	// 0x454361
- (id)_cachedResizedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x4543e9
- (id)_cachedResizedImagePathForImageID:(id)imageID forSize:(CGSize)size extension:(id)extension;	// 0x454371
- (void)_checkCache;	// 0x454109
- (void)_decrementCacheSize:(unsigned long long)size;	// 0x4540b9
- (id)_defaultResizingImageOptions;	// 0x4533fd
- (id)_extensionForImageID:(id)imageID;	// 0x45462d
- (id)_imageFromWriteQueue:(id)writeQueue;	// 0x4544ed
- (void)_imageLoadFailed:(id)failed;	// 0x453d01
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x453a75
- (id)_imageRecordForName:(id)name;	// 0x4523bd
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x454055
- (void)_maintainImageCache;	// 0x453601
- (void)_performWriteJob:(id)job;	// 0x452895
- (void)_postUnavailableImageNotification:(id)notification;	// 0x453ea9
- (void)_postUpdateNotification:(id)notification;	// 0x453e71
- (void)_postWriteCompletedNotification:(id)notification size:(CGSize)size cropped:(BOOL)cropped;	// 0x453f15
- (void)_purgeRemoveDirectory:(BOOL)directory;	// 0x45489d
- (void)_removeCacheFile:(id)file;	// 0x4535c5
- (void)_removeLoadJobFromQueue:(id)queue;	// 0x452b61
- (void)_removeRemoteImageRequestNamed:(id)named;	// 0x45348d
- (void)_removeWriteJobFromQueue:(id)queue;	// 0x4527b5
- (void)_scheduleMaintainCache;	// 0x454209
- (void)_startWriteJob:(id)job;	// 0x45271d
- (void)_terminateNotification:(id)notification;	// 0x454281
- (BOOL)_updateExistingImageRecord:(id)record;	// 0x452c51
- (id)_writeIDForImageID:(id)imageID cropped:(BOOL)cropped size:(CGSize)size;	// 0x4542ed
- (void)_writeImage:(id)image named:(id)named forSize:(CGSize)size cropped:(BOOL)cropped;	// 0x452dd9
- (id)cachePath;	// 0x452005
- (float)cacheSize;	// 0x452015
- (id)cachedPathForImageID:(id)imageID;	// 0x451e99
- (void)cancelWriteForImageWithURL:(id)url imageID:(id)anId;	// 0x450e91
- (void)dealloc;	// 0x4505a5
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x451889
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk original:(BOOL)original rotate:(BOOL)rotate;	// 0x4518c1
- (id)imageNameFromURL:(id)url;	// 0x450add
- (id)imageNamed:(id)named;	// 0x451675
- (id)imageNamed:(id)named croppedToSize:(CGSize)size create:(BOOL)create;	// 0x451255
- (id)imageNamed:(id)named scaledToSize:(CGSize)size;	// 0x451631
- (BOOL)isImageAvailable:(id)available;	// 0x450a45
- (BOOL)isImageAvailable:(id)available scaledToSize:(CGSize)size;	// 0x450aa5
- (BOOL)isImageWritten:(id)written;	// 0x450a8d
- (id)loadImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x450ee5
- (id)loadImageFromURL:(id)url imageID:(id)anId headerFields:(id)fields decryptionAgent:(id)agent writeToCache:(BOOL)cache;	// 0x450ded
// declared property getter: - (int)pruneCount;	// 0x452031
- (void)purge;	// 0x451ff1
- (void)purgeAndRemoveDirectory;	// 0x451fdd
- (id)reallyWriteImageFromURL:(id)url imageID:(id)anId;	// 0x450c55
- (void)receivedRemoteImage:(id)image forID:(id)anId;	// 0x451d31
// declared property setter: - (void)setPruneCount:(int)count;	// 0x452041
- (void)writeCroppedImage:(id)image named:(id)named;	// 0x4511ed
- (id)writeEncryptedImageFromURL:(id)url;	// 0x450ba5
- (void)writeImage:(id)image named:(id)named;	// 0x450f35
- (void)writeImage:(id)image named:(id)named asynchronous:(BOOL)asynchronous;	// 0x450f59
- (id)writeImageFromImageProxy:(id)imageProxy;	// 0x450b21
- (id)writeImageFromURL:(id)url;	// 0x450b89
- (id)writeImageFromURL:(id)url decryptionAgent:(id)agent;	// 0x450bfd
- (id)writeImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x450c2d
- (void)writeScaledImage:(id)image named:(id)named withSize:(CGSize)size;	// 0x451149
@end
