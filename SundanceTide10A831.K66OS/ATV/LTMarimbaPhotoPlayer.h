/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MPAssetKeyDelegate.h"
#import "AppleTV-Structs.h"
#import "BRMediaPlayer.h"

@class BRControl, NSArray, BRAsyncTask, ATVDataServer, BRImageManager, NSDictionary, ATVDataQuery, NSMutableDictionary, ATVDataCollection, NSString, BRMarimbaSlideshowControl, NSTimer;

__attribute__((visibility("hidden")))
@interface LTMarimbaPhotoPlayer : BRMediaPlayer <MPAssetKeyDelegate> {
	BRControl *_tempVisuals;	// 8 = 0x8
	NSTimer *_spinnerTimer;	// 12 = 0xc
	BRAsyncTask *_preloadImageTask;	// 16 = 0x10
	NSString *_assetIDBeingLoaded;	// 20 = 0x14
	BRMarimbaSlideshowControl *_visuals;	// 24 = 0x18
	NSArray *_assets;	// 28 = 0x1c
	BRMediaPlayer *_audioPlayer;	// 32 = 0x20
	id _musicServerID;	// 36 = 0x24
	id _musicPlaylistID;	// 40 = 0x28
	ATVDataServer *_musicServerRef;	// 44 = 0x2c
	ATVDataCollection *_musicPlaylistRef;	// 48 = 0x30
	ATVDataQuery *_playlistsQuery;	// 52 = 0x34
	ATVDataQuery *_songsQuery;	// 56 = 0x38
	NSDictionary *_slideshowPlaybackOptions;	// 60 = 0x3c
	NSArray *_orderedPhotoAssets;	// 64 = 0x40
	NSTimer *_screensaverTickleTimer;	// 68 = 0x44
	int _state;	// 72 = 0x48
	int _numPreloadAttemptsToMake;	// 76 = 0x4c
	int _numPreloadSuccesses;	// 80 = 0x50
	int _indexOfNextImageToPreload;	// 84 = 0x54
	long _startIndex;	// 88 = 0x58
	int _imageSizeToLoad;	// 92 = 0x5c
	BOOL _initialImagePrefetchInProgress;	// 96 = 0x60
	BOOL _playbackInitiated;	// 97 = 0x61
	BOOL _shuffleSet;	// 98 = 0x62
	BOOL _shuffle;	// 99 = 0x63
	BOOL _repeatModeSet;	// 100 = 0x64
	int _repeatMode;	// 104 = 0x68
	BOOL _muted;	// 108 = 0x6c
	BOOL _weOwnMusicPlayback;	// 109 = 0x6d
	BOOL _musicPlaybackOnwershipPermanentlyRelinquished;	// 110 = 0x6e
	BRImageManager *_preferredImageManager;	// 112 = 0x70
	BOOL _preloadingDisabled;	// 116 = 0x74
	BOOL _substitute;	// 117 = 0x75
	int _substituteIndex;	// 120 = 0x78
	BOOL _preloadingComplete;	// 124 = 0x7c
	BOOL _marimbaVisualsOnDisplay;	// 125 = 0x7d
	BOOL _musicPrefetchInProgress;	// 126 = 0x7e
	BOOL _documentSetupComplete;	// 127 = 0x7f
	float _lastRemovedEffectsTime;	// 128 = 0x80
	NSArray *_pendingAssets;	// 132 = 0x84
	NSString *_uniqueIDForPlayPauseRegistration;	// 136 = 0x88
	int _marimbaDidAddEffectsVisitCounter;	// 140 = 0x8c
	NSMutableDictionary *_assetKeyToAssetMap;	// 144 = 0x90
	id _musicQueryToRun;	// 148 = 0x94
	int _imageManagerPruneCountToRestore;	// 152 = 0x98
	int _imageLoadBatchCounter;	// 156 = 0x9c
}
@property(assign, nonatomic) int imageLoadBatchCounter;	// G=0x46a85; S=0x46a95; @synthesize=_imageLoadBatchCounter
@property(assign, nonatomic) int imageManagerPruneCountToRestore;	// G=0x46a65; S=0x46a75; @synthesize=_imageManagerPruneCountToRestore
@property(copy, nonatomic) id musicQueryToRun;	// G=0x46a41; S=0x46a55; @synthesize=_musicQueryToRun
@property(assign) BOOL muted;	// G=0x464cd; S=0x46471; converted property
@property(retain) id playerSpecificOptions;	// G=0x4607d; S=0x45ec5; converted property
@property(assign) int repeatMode;	// G=0x46141; S=0x4611d; converted property
@property(assign) BOOL shufflePlayback;	// G=0x460b5; S=0x46091; converted property
@property(readonly, retain) BRMarimbaSlideshowControl *visuals;	// G=0x45e41; converted property
@property(assign) float volume;	// G=0x463d1; S=0x46369; converted property
+ (id)contentTypes;	// 0x45501
- (id)init;	// 0x45595
- (void).cxx_destruct;	// 0x46aa5
- (void)_applyDocumentChangesAfterTransition:(id)transition;	// 0x497d5
- (void)_applyPlayerSpecificOptions;	// 0x48e91
- (void)_authorizationAttemptComplete:(id)complete;	// 0x4c311
- (void)_authorizeMedia;	// 0x4ade5
- (void)_beginMusicPrefetch;	// 0x47a79
- (void)_beginMusicPrefetchFromDefaults;	// 0x47745
- (void)_beginMusicPrefetchFromPlayerOptions;	// 0x4742d
- (void)_cancelMusicPrefetch;	// 0x47c59
- (void)_configureImageManagerPruneCount;	// 0x46c55
- (void)_cueMedia;	// 0x4aeed
- (id)_dataClient;	// 0x4a5f5
- (void)_dataClientStatusChanged:(id)changed;	// 0x4c615
- (BOOL)_handlePauseActionWithError:(id *)error;	// 0x4b7f5
- (BOOL)_handlePlayActionWithError:(id *)error;	// 0x4b909
- (BOOL)_handleStopActionWithError:(id *)error;	// 0x4b4f5
- (void)_imageWritten:(id)written;	// 0x4bb95
- (int)_indexOfAssetPathInOrderedAssets:(id)orderedAssets;	// 0x4b251
- (void)_loadFailed:(id)failed;	// 0x4bcf5
- (void)_marimbaDidAddEffects:(id)_marimba;	// 0x4c22d
- (void)_marimbaSlideshowPlaybackFinished:(id)finished;	// 0x4beb5
- (void)_marimbaSlideshowWillRepeat:(id)_marimbaSlideshow;	// 0x4bec9
- (void)_needPathsNotification:(id)notification;	// 0x4be0d
- (void)_newPhotoPlayerPlaying:(id)playing;	// 0x4be41
- (id)_pathForLocalAssetID:(id)localAssetID;	// 0x4b1dd
- (void)_playerError:(id)error;	// 0x4c511
- (void)_playerMediaCued:(id)cued;	// 0x4c43d
- (void)_playlistsQueryComplete;	// 0x4a6a1
- (void)_preloadNextImage;	// 0x46d19
- (int)_preloadSuccessThresholdForStyle:(id)style;	// 0x4b2f9
- (void)_reorderImages;	// 0x47cc9
- (void)_restoreImageManagerPruneCount;	// 0x46cd9
- (void)_runPlaylistsQuery;	// 0x4a3e9
- (void)_runSongsQuery;	// 0x4a879
- (void)_setMusic;	// 0x4a241
- (void)_setNewMedia:(id)media;	// 0x4b3fd
- (void)_setNewState:(int)state;	// 0x4b489
- (void)_setPlaylistsQuery:(id)query;	// 0x4a5a1
- (void)_setSlideshowTheme;	// 0x49829
- (void)_setSongsQuery:(id)query;	// 0x4aaf9
- (void)_setTimePerSlide;	// 0x49dfd
- (void)_setTransition;	// 0x4999d
- (void)_setupDocument;	// 0x48841
- (void)_songsQueryComplete;	// 0x4ab4d
- (void)_speakVOString:(id)string;	// 0x4b355
- (void)_spinnerTimerFired;	// 0x47e2d
- (void)_startPreloadTask;	// 0x473d1
- (void)_startScreenSaverTickleTimer;	// 0x4b085
- (void)_startSlideshowIfReady;	// 0x48e01
- (void)_stopScreenSaverTickleTimer;	// 0x4b155
- (void)_tickleScreensaver:(id)screensaver;	// 0x4b189
- (void)_triggerPreloadOfNextImage;	// 0x471e1
- (void)_updateDocumentForNewMedia;	// 0x4801d
- (void)_updateForNewMedia;	// 0x48649
- (void)_updatePreloadingStateForLastPlayed:(id)lastPlayed;	// 0x4705d
- (id)absolutePathForAssetKey:(id)assetKey;	// 0x464dd
- (id)absolutePathForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x468a5
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x468b5
- (id)collection;	// 0x45d5d
- (void)dealloc;	// 0x45901
// declared property getter: - (int)imageLoadBatchCounter;	// 0x46a85
// declared property getter: - (int)imageManagerPruneCountToRestore;	// 0x46a65
- (id)media;	// 0x45d61
// declared property getter: - (id)musicQueryToRun;	// 0x46a41
// converted property getter: - (BOOL)muted;	// 0x464cd
- (void)nextMedia;	// 0x46259
// converted property getter: - (id)playerSpecificOptions;	// 0x4607d
- (int)playerState;	// 0x45e2d
- (BOOL)playingVisualContent;	// 0x45e3d
- (void)previousMedia;	// 0x461b1
// converted property getter: - (int)repeatMode;	// 0x46141
- (CGImageRef)retainedCGImageForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x468b9
- (BOOL)reverseTouchSwipeBehavior;	// 0x45a79
// declared property setter: - (void)setImageLoadBatchCounter:(int)counter;	// 0x46a95
// declared property setter: - (void)setImageManagerPruneCountToRestore:(int)restore;	// 0x46a75
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x45ced
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x45a7d
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x45ac9
// declared property setter: - (void)setMusicQueryToRun:(id)run;	// 0x46a55
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x46471
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x45ec5
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x4611d
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x46091
- (BOOL)setState:(int)state error:(id *)error;	// 0x45dcd
// converted property setter: - (void)setVolume:(float)volume;	// 0x46369
// converted property getter: - (BOOL)shufflePlayback;	// 0x460b5
- (BOOL)stopsActiveAudioPlayer;	// 0x45a75
- (BOOL)supportsRepeatModes;	// 0x461ad
- (BOOL)supportsVolumeControl;	// 0x46301
// converted property getter: - (id)visuals;	// 0x45e41
// converted property getter: - (float)volume;	// 0x463d1
@end
