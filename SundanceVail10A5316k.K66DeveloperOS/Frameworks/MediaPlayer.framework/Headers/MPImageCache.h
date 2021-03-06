/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MPImageRequestDelegate.h"

@class NSOperationQueue, CPLRUDictionary;
@protocol MPImageCacheDelegate, OS_dispatch_queue;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {
@private
	CPLRUDictionary *_cachedImages;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_cachedImagesQueue;	// 8 = 0x8
	unsigned _cacheSize;	// 12 = 0xc
	id<MPImageCacheDelegate> _delegate;	// 16 = 0x10
	NSOperationQueue *_operationQueue;	// 20 = 0x14
	int _retainCount;	// 24 = 0x18
	id _libraryDisplayValueChangeObserver;	// 28 = 0x1c
}
@property(assign, nonatomic) unsigned cacheSize;	// G=0x348bdd39; S=0x348bd23d; @synthesize=_cacheSize
@property(assign, nonatomic) id<MPImageCacheDelegate> delegate;	// G=0x348bdd49; S=0x348bdd59; @synthesize=_delegate
@property(assign, nonatomic) BOOL imageRequestsSuspended;	// G=0x348bd32d; S=0x348bd351; 
@property(assign, nonatomic) id libraryDisplayValueChangeObserver;	// G=0x348bdd69; S=0x348bdd79; @synthesize=_libraryDisplayValueChangeObserver
- (id)init;	// 0x348bcb55
- (void)_cacheImage:(id)image forKey:(id)key;	// 0x348bd561
- (id)_cachedImageForKey:(id)key;	// 0x348bd689
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x348bd501
- (void)_didReceiveMemoryWarningNotification:(id)notification;	// 0x348bd551
- (void)_enqueueRequest:(id)request;	// 0x348bd9b1
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)request;	// 0x348bcf7d
- (BOOL)_isDeallocating;	// 0x348bcb29
- (void)_removeCachedImageForKey:(id)key;	// 0x348bd8f5
- (BOOL)_tryRetain;	// 0x348bcad9
- (void)_zapCache;	// 0x348bdb85
- (void)_zapCachedPlaceholders;	// 0x348bda39
// declared property getter: - (unsigned)cacheSize;	// 0x348bdd39
- (id)cachedImageForRequest:(id)request;	// 0x348bcf4d
- (void)cancelAllImageRequests;	// 0x348bd379
- (void)dealloc;	// 0x348bccf1
// declared property getter: - (id)delegate;	// 0x348bdd49
- (id)imageForRequest:(id)request error:(id *)error;	// 0x348bd08d
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary;	// 0x348bdc0d
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary waitUntilFetched:(BOOL)fetched;	// 0x348bdc31
- (void)imageRequest:(id)request failedWithError:(id)error;	// 0x348bd399
- (void)imageRequest:(id)request loadedImage:(id)image;	// 0x348bd435
// declared property getter: - (BOOL)imageRequestsSuspended;	// 0x348bd32d
// declared property getter: - (id)libraryDisplayValueChangeObserver;	// 0x348bdd69
- (void)loadImageForRequest:(id)request asynchronously:(BOOL)asynchronously completionHandler:(id)handler;	// 0x348bd161
- (oneway void)release;	// 0x348bca21
- (id)retain;	// 0x348bc9e9
- (unsigned)retainCount;	// 0x348bcac5
// declared property setter: - (void)setCacheSize:(unsigned)size;	// 0x348bd23d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x348bdd59
// declared property setter: - (void)setImageRequestsSuspended:(BOOL)suspended;	// 0x348bd351
// declared property setter: - (void)setLibraryDisplayValueChangeObserver:(id)observer;	// 0x348bdd79
@end

