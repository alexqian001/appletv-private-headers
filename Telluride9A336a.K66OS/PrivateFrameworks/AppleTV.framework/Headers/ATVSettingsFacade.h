/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSettingsFacade.h"


@interface ATVSettingsFacade : BRSettingsFacade {
@private
	id _screenSaverSetCollectionBlock;	// 12 = 0xc
}
@property(assign) BOOL airTunesControlFromSpeakerIsEnabled;	// G=0x339a7c35; S=0x339a7c79; converted property
@property(assign) BOOL airTunesIsEnabled;	// G=0x339a7901; S=0x339a7995; converted property
@property(retain) id airTunesPassword;	// G=0x339a7abd; S=0x339a7b3d; converted property
@property(assign) BOOL musicUseSoundCheck;	// G=0x339a7249; S=0x339a728d; converted property
@property(assign) BOOL screenSaverPanAndZoom;	// G=0x339a6ec9; S=0x339a6f3d; converted property
@property(assign) BOOL screenSaverPrefetchComplete;	// G=0x339a6679; S=0x339a66bd; converted property
@property(assign) int screenSaverSecondsPerSlide;	// G=0x339a6e09; S=0x339a6e81; converted property
@property(retain) id screenSaverSelectedPath;	// G=0x339a61d5; S=0x339a64f1; converted property
@property(readonly, assign) id screenSaverSetCollectionBlock;	// G=0x339a6d85; @synthesize=_screenSaverSetCollectionBlock
@property(assign) BOOL screenSaverShufflePhotos;	// G=0x339a6f85; S=0x339a6ff9; converted property
@property(retain) id screenSaverSlideshowTheme;	// G=0x339a65ed; S=0x339a6631; converted property
@property(assign) int screenSaverTimeout;	// G=0x339a6ab5; S=0x339a6b21; converted property
@property(retain) id screenSaverTransition;	// G=0x339a7041; S=0x339a70ad; converted property
@property(assign) int sleepTimeout;	// G=0x339a6be9; S=0x339a6c4d; converted property
+ (id)getMobileGestaltString:(CFStringRef)string;	// 0x339a76c5
+ (void)initializePlatformFacade;	// 0x339a5e29
- (SCNetworkServiceRef)_copyNetworkServiceForInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x339a8595
- (long)_itemCountForMediaType:(id)mediaType;	// 0x339a84e5
- (BOOL)_saveConfiguration:(id)configuration forInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x339a864d
- (BOOL)_setDNSWithAddresses:(id)addresses forService:(SCNetworkServiceRef)service;	// 0x339a8a31
- (void)_setScreenSaverCollection:(id)collection;	// 0x339a8481
- (BOOL)addSiteIsEnabled;	// 0x339a82ed
- (id)addSiteLoggingURL;	// 0x339a83b9
// converted property getter: - (BOOL)airTunesControlFromSpeakerIsEnabled;	// 0x339a7c35
// converted property getter: - (BOOL)airTunesIsEnabled;	// 0x339a7901
// converted property getter: - (id)airTunesPassword;	// 0x339a7abd
- (BOOL)airTunesPasswordIsEnabled;	// 0x339a7a81
- (void)appleConnectID:(id *)anId password:(id *)password;	// 0x339a7d11
- (BOOL)bootedFromRecoveryPartition;	// 0x339a70f5
- (void)dealloc;	// 0x339a5e45
- (id)hwSerialNumber;	// 0x339a74f9
- (BOOL)hwSetSystemLanguage:(id)language;	// 0x339a7521
- (id)logPushID;	// 0x339a7311
- (long)mediaPhotoCount;	// 0x339a5fd5
- (long)mediaSongCount;	// 0x339a5ebd
- (long)mediaVideoCount;	// 0x339a5f49
// converted property getter: - (BOOL)musicUseSoundCheck;	// 0x339a7249
- (BOOL)saveConfiguration:(id)configuration;	// 0x339a7119
- (id)screenSaverCollectionArchive;	// 0x339a6705
// converted property getter: - (BOOL)screenSaverPanAndZoom;	// 0x339a6ec9
- (id)screenSaverPathForIdentifier:(id)identifier;	// 0x339a6479
- (id)screenSaverPaths;	// 0x339a60a5
- (int)screenSaverPhotoSpinFrequency;	// 0x339a6d1d
// converted property getter: - (BOOL)screenSaverPrefetchComplete;	// 0x339a6679
// converted property getter: - (int)screenSaverSecondsPerSlide;	// 0x339a6e09
// converted property getter: - (id)screenSaverSelectedPath;	// 0x339a61d5
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x339a6d85
// converted property getter: - (BOOL)screenSaverShufflePhotos;	// 0x339a6f85
// converted property getter: - (id)screenSaverSlideshowTheme;	// 0x339a65ed
// converted property getter: - (int)screenSaverTimeout;	// 0x339a6ab5
// converted property getter: - (id)screenSaverTransition;	// 0x339a7041
// converted property setter: - (void)setAirTunesControlFromSpeakerIsEnabled:(BOOL)speakerIsEnabled;	// 0x339a7c79
// converted property setter: - (void)setAirTunesIsEnabled:(BOOL)enabled;	// 0x339a7995
// converted property setter: - (void)setAirTunesPassword:(id)password;	// 0x339a7b3d
- (BOOL)setAppleConnectID:(id)anId password:(id)password;	// 0x339a7fd9
// converted property setter: - (void)setMusicUseSoundCheck:(BOOL)check;	// 0x339a728d
// converted property setter: - (void)setScreenSaverPanAndZoom:(BOOL)zoom;	// 0x339a6f3d
- (void)setScreenSaverPhotoCollection:(id)collection;	// 0x339a6749
// converted property setter: - (void)setScreenSaverPrefetchComplete:(BOOL)complete;	// 0x339a66bd
// converted property setter: - (void)setScreenSaverSecondsPerSlide:(int)slide;	// 0x339a6e81
// converted property setter: - (void)setScreenSaverSelectedPath:(id)path;	// 0x339a64f1
// converted property setter: - (void)setScreenSaverShufflePhotos:(BOOL)photos;	// 0x339a6ff9
// converted property setter: - (void)setScreenSaverSlideshowTheme:(id)theme;	// 0x339a6631
// converted property setter: - (void)setScreenSaverTimeout:(int)timeout;	// 0x339a6b21
// converted property setter: - (void)setScreenSaverTransition:(id)transition;	// 0x339a70ad
// converted property setter: - (void)setSleepTimeout:(int)timeout;	// 0x339a6c4d
// converted property getter: - (int)sleepTimeout;	// 0x339a6be9
- (BOOL)syncIsSynced;	// 0x339a71d9
- (id)versionEFI;	// 0x339a77e1
- (id)versionGF;	// 0x339a7899
- (id)versionIR;	// 0x339a787d
- (id)versionOS;	// 0x339a77a9
- (id)versionOSBuild;	// 0x339a77c5
- (id)versionSoftwareBuild;	// 0x339a7741
@end

