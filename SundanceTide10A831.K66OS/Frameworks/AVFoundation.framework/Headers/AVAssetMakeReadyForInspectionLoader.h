/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetInspectorLoader.h"
#import "AVFoundation-Structs.h"

@class NSURL, AVAssetCache, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
	AVAssetInspector *_assetInspector;	// 8 = 0x8
	AVAssetCache *_assetCache;	// 12 = 0xc
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 16 = 0x10
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 17 = 0x11
	NSURL *_downloadDestinationURL;	// 20 = 0x14
	OpaqueFigFormatReader *_formatReader;	// 24 = 0x18
	OpaqueFigSimpleMutex *_loadingMutex;	// 28 = 0x1c
	NSMutableArray *_keysAwaitingCompletion;	// 32 = 0x20
	int _status;	// 36 = 0x24
	long _basicInspectionFailureCode;	// 40 = 0x28
	NSURL *_URL;	// 44 = 0x2c
}
@property(readonly, retain) NSURL *URL;	// G=0x342394f5; converted property
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x34239505; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x34238939; converted property
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x34239535; @synthesize=_downloadDestinationURL
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x34239515; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x34239525; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
- (id)initWithURL:(id)url;	// 0x34238789
// converted property getter: - (id)URL;	// 0x342394f5
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x342389e5
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x34238a49
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;	// 0x34238fd1
- (OpaqueFigFormatReader *)_formatReader;	// 0x34238981
- (id)_getAndPruneCompletionsWhileMutexLocked;	// 0x34238bf5
- (BOOL)_inspectionRequiresAFormatReader;	// 0x34238a21
- (BOOL)_isStreaming;	// 0x342394d9
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x34238f9d
- (id)_loadValuesWhileMutexLockedForKeys:(id)keys;	// 0x34238ffd
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x342389d1
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x34238a25
- (BOOL)_providesAccurateTiming;	// 0x342389e1
- (void)_serverHasDied;	// 0x342394dd
- (void)_setStatus:(int)status figErrorCode:(long)code;	// 0x34238ea5
- (int)_status;	// 0x34238dc9
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;	// 0x34238a29
- (int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id *)error;	// 0x34238a7d
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;	// 0x34238b29
- (BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;	// 0x34238dd9
// declared property getter: - (id)assetCache;	// 0x34239505
// converted property getter: - (id)assetInspector;	// 0x34238939
- (void)cancelLoading;	// 0x3423896d
- (id)chapterGroupInfo;	// 0x342394c1
- (id)copyWithZone:(NSZone *)zone;	// 0x34238929
- (void)dealloc;	// 0x34238801
// declared property getter: - (id)downloadDestinationURL;	// 0x34239535
- (XXStruct_pwHToB)duration;	// 0x34239455
- (void)finalize;	// 0x342388cd
- (BOOL)hasProtectedContent;	// 0x342394d5
- (BOOL)isComposable;	// 0x342394d1
- (BOOL)isExportable;	// 0x342394c9
- (BOOL)isPlayable;	// 0x342394c5
- (BOOL)isReadable;	// 0x342394cd
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x34239241
- (id)lyrics;	// 0x34239499
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x34239515
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x34239525
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x34238d81
@end
