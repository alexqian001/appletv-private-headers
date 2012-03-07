/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSettingsFacade.h> // Unknown library
#import "AppleTV-Structs.h"


@interface ATVSettingsFacade : BRSettingsFacade {
}
@property(assign) BOOL airTunesControlFromSpeakerIsEnabled;	// G=0x336d868d; S=0x336d8609; converted property
@property(assign) BOOL airTunesIsEnabled;	// G=0x336d892d; S=0x336d884d; converted property
@property(retain) id airTunesPassword;	// G=0x336d87a9; S=0x336d86c9; converted property
@property(assign) BOOL musicUseSoundCheck;	// G=0x336d8c09; S=0x336d8b9d; converted property
@property(assign) BOOL screenSaverPanAndZoom;	// G=0x336d8e49; S=0x336d8e0d; converted property
@property(assign) BOOL screenSaverPrefetchComplete;	// G=0x336d92a5; S=0x336d9269; converted property
@property(assign) int screenSaverSecondsPerSlide;	// G=0x336d8ef1; S=0x336d8eb5; converted property
@property(retain) id screenSaverSelectedPath;	// G=0x336da61d; S=0x336d9355; converted property
@property(assign) BOOL screenSaverShufflePhotos;	// G=0x336d8da1; S=0x336d8d65; converted property
@property(retain) id screenSaverSlideshowTheme;	// G=0x336d931d; S=0x336d92e1; converted property
@property(assign) int screenSaverTimeout;	// G=0x336d91d5; S=0x336d9119; converted property
@property(retain) id screenSaverTransition;	// G=0x336d8d09; S=0x336d8ccd; converted property
@property(assign) int sleepTimeout;	// G=0x336d90c5; S=0x336d9015; converted property
+ (id)getMobileGestaltString:(CFStringRef)string;	// 0x336da069
+ (void)initializePlatformFacade;	// 0x336d976d
- (SCNetworkServiceRef)_copyNetworkServiceForInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x336da0dd
- (long)_itemCountForMediaType:(id)mediaType;	// 0x336d8515
- (BOOL)_saveConfiguration:(id)configuration forInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x336da17d
- (BOOL)_setDNSWithAddresses:(id)addresses forService:(SCNetworkServiceRef)service;	// 0x336da509
- (void)_setScreenSaverCollection:(id)collection;	// 0x336d85b5
// converted property getter: - (BOOL)airTunesControlFromSpeakerIsEnabled;	// 0x336d868d
// converted property getter: - (BOOL)airTunesIsEnabled;	// 0x336d892d
// converted property getter: - (id)airTunesPassword;	// 0x336d87a9
- (BOOL)airTunesPasswordIsEnabled;	// 0x336d8819
- (void)appleConnectID:(id *)anId password:(id *)password;	// 0x336d9b29
- (BOOL)bootedFromRecoveryPartition;	// 0x336d8cad
- (void)dealloc;	// 0x336d978d
- (id)hwSerialNumber;	// 0x336d8b75
- (BOOL)hwSetSystemLanguage:(id)language;	// 0x336d99a9
- (long)mediaPhotoCount;	// 0x336d95ad
- (long)mediaSongCount;	// 0x336d96f1
- (long)mediaVideoCount;	// 0x336d9675
// converted property getter: - (BOOL)musicUseSoundCheck;	// 0x336d8c09
- (BOOL)saveConfiguration:(id)configuration;	// 0x336d98f1
- (id)screenSaverCollectionArchive;	// 0x336d9231
- (id)screenSaverInvocation;	// 0x336d8f59
// converted property getter: - (BOOL)screenSaverPanAndZoom;	// 0x336d8e49
- (id)screenSaverPathForIdentifier:(id)identifier;	// 0x336d9439
- (id)screenSaverPaths;	// 0x336d9499
- (int)screenSaverPhotoSpinFrequency;	// 0x336d8fbd
// converted property getter: - (BOOL)screenSaverPrefetchComplete;	// 0x336d92a5
// converted property getter: - (int)screenSaverSecondsPerSlide;	// 0x336d8ef1
// converted property getter: - (id)screenSaverSelectedPath;	// 0x336da61d
// converted property getter: - (BOOL)screenSaverShufflePhotos;	// 0x336d8da1
// converted property getter: - (id)screenSaverSlideshowTheme;	// 0x336d931d
// converted property getter: - (int)screenSaverTimeout;	// 0x336d91d5
// converted property getter: - (id)screenSaverTransition;	// 0x336d8d09
// converted property setter: - (void)setAirTunesControlFromSpeakerIsEnabled:(BOOL)speakerIsEnabled;	// 0x336d8609
// converted property setter: - (void)setAirTunesIsEnabled:(BOOL)enabled;	// 0x336d884d
// converted property setter: - (void)setAirTunesPassword:(id)password;	// 0x336d86c9
- (BOOL)setAppleConnectID:(id)anId password:(id)password;	// 0x336d9db1
// converted property setter: - (void)setMusicUseSoundCheck:(BOOL)check;	// 0x336d8b9d
// converted property setter: - (void)setScreenSaverPanAndZoom:(BOOL)zoom;	// 0x336d8e0d
- (void)setScreenSaverPhotoCollection:(id)collection;	// 0x336d97e1
// converted property setter: - (void)setScreenSaverPrefetchComplete:(BOOL)complete;	// 0x336d9269
// converted property setter: - (void)setScreenSaverSecondsPerSlide:(int)slide;	// 0x336d8eb5
// converted property setter: - (void)setScreenSaverSelectedPath:(id)path;	// 0x336d9355
// converted property setter: - (void)setScreenSaverShufflePhotos:(BOOL)photos;	// 0x336d8d65
// converted property setter: - (void)setScreenSaverSlideshowTheme:(id)theme;	// 0x336d92e1
// converted property setter: - (void)setScreenSaverTimeout:(int)timeout;	// 0x336d9119
// converted property setter: - (void)setScreenSaverTransition:(id)transition;	// 0x336d8ccd
// converted property setter: - (void)setSleepTimeout:(int)timeout;	// 0x336d9015
// converted property getter: - (int)sleepTimeout;	// 0x336d90c5
- (id)slideshowScreensaverPlaybackOptions;	// 0x336d8511
- (BOOL)syncIsSynced;	// 0x336d8c45
- (id)versionEFI;	// 0x336d8a41
- (id)versionGF;	// 0x336d89b1
- (id)versionIR;	// 0x336d8a21
- (id)versionOS;	// 0x336d8af9
- (id)versionOSBuild;	// 0x336d8ad9
- (id)versionSoftwareBuild;	// 0x336d8b19
@end
