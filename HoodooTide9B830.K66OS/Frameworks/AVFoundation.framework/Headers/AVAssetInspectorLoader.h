/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVAssetCache, NSArray, NSURL, NSString;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x35e71435; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x35e71499; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x35e71495; 
@property(readonly, assign, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;	// G=0x35e71491; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x35e7148d; 
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x35e714a9; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x35e71445; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x35e71485; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x35e7143d; 
@property(readonly, assign, nonatomic, getter=_formatReader) OpaqueFigFormatReader *formatReader;	// G=0x35e71439; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x35e714ad; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x35e7147d; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x35e71481; 
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x35e71441; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x35e71489; 
@property(readonly, assign, nonatomic) unsigned referenceRestrictions;	// G=0x35e7151d; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x35e714a5; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x35e7149d; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x35e714a1; 
@property(readonly, assign, nonatomic, getter=_isStreaming) BOOL streaming;	// G=0x35e714b1; 
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x35e71359; 
+ (void)initialize;	// 0x35e712b9
- (id)init;	// 0x35e712d5
- (id)initWithURL:(id)url;	// 0x35e712e9
// declared property getter: - (id)URL;	// 0x35e71435
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x35e714b5
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x35e7143d
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x35e71439
// declared property getter: - (BOOL)_isStreaming;	// 0x35e714b1
- (id)_mapFigErrorCodeToNSError:(long)nserror;	// 0x35e714cd
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x35e71441
- (void)_serverHasDied;	// 0x35e71521
// declared property getter: - (id)_weakReference;	// 0x35e71359
// declared property getter: - (id)assetCache;	// 0x35e71499
- (id)assetInspector;	// 0x35e7142d
- (void)cancelLoading;	// 0x35e71431
// declared property getter: - (id)chapterGroupInfo;	// 0x35e71495
- (id)copyWithZone:(NSZone *)zone;	// 0x35e713b5
- (void)dealloc;	// 0x35e71369
// declared property getter: - (id)downloadDestinationURL;	// 0x35e714a9
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x35e71445
// declared property getter: - (BOOL)hasProtectedContent;	// 0x35e714ad
// declared property getter: - (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x35e71491
// declared property getter: - (BOOL)isComposable;	// 0x35e7148d
// declared property getter: - (BOOL)isExportable;	// 0x35e71485
// declared property getter: - (BOOL)isPlayable;	// 0x35e71481
// declared property getter: - (BOOL)isReadable;	// 0x35e71489
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x35e713f9
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x35e714b9
// declared property getter: - (id)lyrics;	// 0x35e7147d
// declared property getter: - (unsigned)referenceRestrictions;	// 0x35e7151d
// declared property getter: - (id)resolvedURL;	// 0x35e714a5
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x35e7149d
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x35e714a1
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x35e713c5
@end

