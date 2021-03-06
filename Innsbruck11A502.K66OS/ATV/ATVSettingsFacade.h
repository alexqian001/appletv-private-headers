/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsMigration.h"
#import "ATVSettingsSaver.h"
#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVSettingsFacade : BRSingleton <ATVSettingsSaver, ATVSettingsMigration> {
	BOOL _subtitleSettingsNeedUpdate;	// 4 = 0x4
	id _screenSaverSetCollectionBlock;	// 8 = 0x8
	NSArray *_saverThemes;	// 12 = 0xc
}
@property(assign) BOOL UISoundsEnabled;	// G=0x2517a5; S=0x2517f5; converted property
@property(retain) id airPlayCRDModeBackgroundItem;	// G=0x256165; S=0x2561a9; converted property
@property(retain) id airPlayCRDModeCustomMessage;	// G=0x2560c1; S=0x256105; converted property
@property(assign) int airPlayCRDModeType;	// G=0x255fe9; S=0x25602d; converted property
@property(assign) BOOL airPlayPreferCloudPlayback;	// G=0x255da5; S=0x255de9; converted property
@property(assign) BOOL airTunesControlFromSpeakerIsEnabled;	// G=0x255fa1; S=0x255fe5; converted property
@property(assign) BOOL airTunesDenyInterruptionsIsEnabled;	// G=0x2562c1; S=0x256311; converted property
@property(assign) BOOL airTunesIsEnabled;	// G=0x255cad; S=0x255cfd; converted property
@property(retain) id airTunesPassword;	// G=0x255ead; S=0x255f0d; converted property
@property(assign) BOOL airTunesPinModeIsEnabled;	// G=0x256209; S=0x256259; converted property
@property(assign) int audioFormatSetting;	// G=0x2521d1; S=0x252245; converted property
@property(assign) int audioOutputQuality;	// G=0x2522a9; S=0x2522ed; converted property
@property(assign) BOOL automaticallyApplySoftwareUpdates;	// G=0x2559cd; S=0x255a11; converted property
@property(assign) BOOL crashReportingEnabled;	// G=0x252395; S=0x252351; converted property
@property(retain) id defaultAudioLanguage;	// G=0x251c15; S=0x251cad; converted property
@property(retain) id defaultSubtitleLanguage;	// G=0x251971; S=0x251a09; converted property
@property(assign) int displayOverscanOverrideMode;	// G=0x2546a9; S=0x2546e9; converted property
@property(assign, nonatomic, getter=isExplicitRadioContentAllowed) BOOL explicitRadioContentAllowed;	// G=0x255c21; S=0x255c65; 
@property(assign) int favoritesSortMode;	// G=0x254785; S=0x2547c9; converted property
@property(retain) id keyboardLanguageKeys;	// G=0x2556f1; S=0x255731; converted property
@property(retain) id lastUsedKeyboardLanguage;	// G=0x2557e9; S=0x255829; converted property
@property(assign) BOOL legacyPhotoStreamEnabled;	// G=0x255249; S=0x255289; converted property
@property(retain) id marimbaSlideshowMusicSetting;	// G=0x254ea5; S=0x255111; converted property
@property(retain) id marimbaSlideshowStyle;	// G=0x254c59; S=0x254c15; converted property
@property(assign) int musicRepeatMode;	// G=0x251e4d; S=0x251e91; converted property
@property(assign) BOOL musicUseSoundCheck;	// G=0x25207d; S=0x2520cd; converted property
@property(assign) BOOL musicVolumeControlEnabled;	// G=0x251edd; S=0x251f21; converted property
@property(copy, nonatomic) NSArray *orderedAppIdentifiers;	// G=0x2564c5; S=0x2568c1; 
@property(assign) int playbackResolution;	// G=0x254199; S=0x254311; converted property
@property(assign) BOOL playlistsEverywhereEnabled;	// G=0x252431; S=0x252475; converted property
@property(assign) BOOL preferHDPreviews;	// G=0x2540c5; S=0x254131; converted property
@property(assign) BOOL preferSDHOverRegularSubtitles;	// G=0x251865; S=0x251885; converted property
@property(assign) BOOL receivedNTPClockSetNotification;	// G=0x2523f1; S=0x252401; converted property
@property(copy, nonatomic) NSArray *saverThemes;	// G=0x2576d5; S=0x2576e9; @synthesize=_saverThemes
@property(assign) BOOL screenSaverAllowedOverMusic;	// G=0x252af9; S=0x252b3d; converted property
@property(assign) BOOL screenSaverPrefetchComplete;	// G=0x2530c1; S=0x253105; converted property
@property(assign) int screenSaverSecondsPerSlide;	// G=0x253f0d; S=0x253f85; converted property
@property(readonly, assign) id screenSaverSetCollectionBlock;	// G=0x253e89; @synthesize=_screenSaverSetCollectionBlock
@property(assign) int screenSaverTimeout;	// G=0x253b31; S=0x253ba1; converted property
@property(retain) id screenSaverTransition;	// G=0x253fcd; S=0x254039; converted property
@property(retain) id selectedScreenSaverTheme;	// G=0x252b85; S=0x253009; converted property
@property(assign) BOOL sharedPhotoStreamEnabled;	// G=0x255319; S=0x255359; converted property
@property(assign) BOOL sharedPhotoStreamEnabledStateCanBeToggled;	// G=0x25562d; S=0x2555ad; converted property
@property(assign) BOOL showedNetworkTimeDialog;	// G=0x2523d1; S=0x2523e1; converted property
@property(assign) int sleepTimeout;	// G=0x253c69; S=0x253ca9; converted property
@property(assign) BOOL slideshowRepeat;	// G=0x254951; S=0x2549c1; converted property
@property(assign) int slideshowSecondsPerSlide;	// G=0x254899; S=0x254909; converted property
@property(retain) id slideshowSelectedTransitionName;	// G=0x254b21; S=0x254b8d; converted property
@property(assign) BOOL slideshowShuffleMusic;	// G=0x254a95; S=0x254ad9; converted property
@property(assign) BOOL slideshowShufflePhotos;	// G=0x254a09; S=0x254a4d; converted property
@property(assign) int subtitleRenderMode;	// G=0x251b05; S=0x251b49; converted property
@property(assign) BOOL userDismissedNetworkTimeDialog;	// G=0x252411; S=0x252421; converted property
+ (void)initializePlatformFacade;	// 0x2512b9
+ (void)setSingleton:(id)singleton;	// 0x2512e5
+ (id)singleton;	// 0x2512d5
- (id)init;	// 0x2512f5
// converted property getter: - (BOOL)UISoundsEnabled;	// 0x2517a5
- (void)_addToDefaultAudioLanguages:(id)defaultAudioLanguages;	// 0x257e39
- (void)_addToDefaultSubtitleLanguages:(id)defaultSubtitleLanguages;	// 0x257fc5
- (id)_avSelectionPlistForMedia:(id)media forType:(id)type;	// 0x257aa1
- (id)_availableDefaultAVLanguages;	// 0x257be5
- (id)_availableDefaultAudioLanguages;	// 0x257d85
- (id)_availableDefaultSubtitleLanguages;	// 0x257f11
- (SCNetworkServiceRef)_copyNetworkServiceForInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x258411
- (id)_currentStoreFrontAppOrderingPrefsKey;	// 0x2563e5
- (id)_legacyCurrentStoreFrontAppOrderingPrefsKey;	// 0x256379
- (void)_migrateToInnsbruckFrom:(id)from;	// 0x258ee9
- (void)_migrateToSundanceFrom:(id)from;	// 0x258d45
- (void)_nukeLegacyStoreFrontAppOrdering;	// 0x256451
- (id)_privateScreensaverThemes;	// 0x258119
- (void)_removeSavedPreferredOptionsForType:(id)type;	// 0x257b89
- (int)_resolutionForPlaybackString:(id)playbackString;	// 0x258bcd
- (void)_saveAVSelectionDictionary:(id)dictionary forMedia:(id)media forType:(id)type;	// 0x2576f9
- (BOOL)_saveConfiguration:(id)configuration forInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x2584e5
- (id)_screensaverThemeForKey:(id)key andLocalizableKey:(id)key2 isPrivate:(BOOL)aPrivate;	// 0x258259
- (BOOL)_setDNSWithAddresses:(id)addresses forService:(SCNetworkServiceRef)service;	// 0x258a1d
- (void)_setPhotoStreamEnabledState:(BOOL)state withPrefsKey:(id)prefsKey withNotificationName:(id)notificationName;	// 0x2553a5
- (void)_setScreenSaverCollection:(id)collection;	// 0x2583ad
- (void)_setSubtitleSettingsNeedUpdate:(BOOL)update;	// 0x258c91
- (id)_stringForPlaybackResolution:(int)playbackResolution;	// 0x258b91
- (void)_updateSubtitleSettings;	// 0x25809d
- (void)addPathsToSaveTo:(id)to;	// 0x251491
- (id)addSiteDeviceAuthorizations;	// 0x257609
- (BOOL)addSiteIsEnabled;	// 0x25753d
// converted property getter: - (id)airPlayCRDModeBackgroundItem;	// 0x256165
// converted property getter: - (id)airPlayCRDModeCustomMessage;	// 0x2560c1
// converted property getter: - (int)airPlayCRDModeType;	// 0x255fe9
// converted property getter: - (BOOL)airPlayPreferCloudPlayback;	// 0x255da5
// converted property getter: - (BOOL)airTunesControlFromSpeakerIsEnabled;	// 0x255fa1
// converted property getter: - (BOOL)airTunesDenyInterruptionsIsEnabled;	// 0x2562c1
// converted property getter: - (BOOL)airTunesIsEnabled;	// 0x255cad
// converted property getter: - (id)airTunesPassword;	// 0x255ead
- (BOOL)airTunesPasswordIsEnabled;	// 0x255e6d
// converted property getter: - (BOOL)airTunesPinModeIsEnabled;	// 0x256209
- (void)appleConnectID:(id *)anId password:(id *)password;	// 0x256e71
// converted property getter: - (int)audioFormatSetting;	// 0x2521d1
// converted property getter: - (int)audioOutputQuality;	// 0x2522a9
// converted property getter: - (BOOL)automaticallyApplySoftwareUpdates;	// 0x2559cd
- (id)avAudioSelectionPlistForMedia:(id)media;	// 0x251db9
- (id)avSubtitleSelectionPlistForMedia:(id)media;	// 0x251d25
- (id)availableDefaultAudioLanguages;	// 0x251961
- (id)availableDefaultSubtitleLanguages;	// 0x251951
// converted property getter: - (BOOL)crashReportingEnabled;	// 0x252395
- (BOOL)crashReportingPreferenceSet;	// 0x2523c5
- (void)dealloc;	// 0x2513fd
// converted property getter: - (id)defaultAudioLanguage;	// 0x251c15
// converted property getter: - (id)defaultSubtitleLanguage;	// 0x251971
- (BOOL)displayNewSlideshowThemes;	// 0x254bd5
// converted property getter: - (int)displayOverscanOverrideMode;	// 0x2546a9
// converted property getter: - (int)favoritesSortMode;	// 0x254785
// declared property getter: - (BOOL)isExplicitRadioContentAllowed;	// 0x255c21
- (BOOL)keyboardLanguageEnabled:(id)enabled;	// 0x255775
// converted property getter: - (id)keyboardLanguageKeys;	// 0x2556f1
// converted property getter: - (id)lastUsedKeyboardLanguage;	// 0x2557e9
// converted property getter: - (BOOL)legacyPhotoStreamEnabled;	// 0x255249
- (BOOL)legacyPhotoStreamPreferenceSet;	// 0x2552d5
- (id)logPushID;	// 0x255a59
- (id)maribmaSlideshowAllSongsPlaylistID;	// 0x255229
// converted property getter: - (id)marimbaSlideshowMusicSetting;	// 0x254ea5
// converted property getter: - (id)marimbaSlideshowStyle;	// 0x254c59
- (int)maximumPlaybackResolution;	// 0x2542e1
- (void)migrateFrom:(id)from to:(id)to;	// 0x2515fd
// converted property getter: - (int)musicRepeatMode;	// 0x251e4d
// converted property getter: - (BOOL)musicUseSoundCheck;	// 0x25207d
- (float)musicVolume;	// 0x251fc1
// converted property getter: - (BOOL)musicVolumeControlEnabled;	// 0x251edd
// declared property getter: - (id)orderedAppIdentifiers;	// 0x2564c5
- (id)parentalControlsPasscode;	// 0x254811
- (int)parentalControlsYTMode;	// 0x254855
- (BOOL)periodicallyDisplayPhotoStreamDownloadQueues;	// 0x2556b1
// converted property getter: - (int)playbackResolution;	// 0x254199
// converted property getter: - (BOOL)playlistsEverywhereEnabled;	// 0x252431
// converted property getter: - (BOOL)preferHDPreviews;	// 0x2540c5
- (BOOL)preferHDVideo;	// 0x254081
// converted property getter: - (BOOL)preferSDHOverRegularSubtitles;	// 0x251865
// converted property getter: - (BOOL)receivedNTPClockSetNotification;	// 0x2523f1
- (id)resourceDisplayHeight;	// 0x2544ad
- (BOOL)runningAnInternalBuild;	// 0x255991
- (void)saveAVAudioSelectionPlist:(id)plist forMedia:(id)media;	// 0x251dd5
- (void)saveAVSubtitleSelectionPlist:(id)plist forMedia:(id)media;	// 0x251d41
- (BOOL)saveConfiguration:(id)configuration;	// 0x25586d
- (void)saveMusicVolume:(float)volume;	// 0x252009
// declared property getter: - (id)saverThemes;	// 0x2576d5
// converted property getter: - (BOOL)screenSaverAllowedOverMusic;	// 0x252af9
- (id)screenSaverCollectionArchive;	// 0x25314d
- (BOOL)screenSaverCollectionTypeIsAlbumArtwork:(id)artwork;	// 0x253add
- (int)screenSaverPhotoSpinFrequency;	// 0x253e21
// converted property getter: - (BOOL)screenSaverPrefetchComplete;	// 0x2530c1
// converted property getter: - (int)screenSaverSecondsPerSlide;	// 0x253f0d
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x253e89
- (BOOL)screenSaverThemeAllowsAlbumArtwork:(id)artwork;	// 0x253a89
// converted property getter: - (int)screenSaverTimeout;	// 0x253b31
// converted property getter: - (id)screenSaverTransition;	// 0x253fcd
- (id)screensaverThemes;	// 0x2524bd
// converted property getter: - (id)selectedScreenSaverTheme;	// 0x252b85
// converted property setter: - (void)setAirPlayCRDModeBackgroundItem:(id)item;	// 0x2561a9
// converted property setter: - (void)setAirPlayCRDModeCustomMessage:(id)message;	// 0x256105
// converted property setter: - (void)setAirPlayCRDModeType:(int)type;	// 0x25602d
// converted property setter: - (void)setAirPlayPreferCloudPlayback:(BOOL)playback;	// 0x255de9
// converted property setter: - (void)setAirTunesControlFromSpeakerIsEnabled:(BOOL)speakerIsEnabled;	// 0x255fe5
// converted property setter: - (void)setAirTunesDenyInterruptionsIsEnabled:(BOOL)enabled;	// 0x256311
// converted property setter: - (void)setAirTunesIsEnabled:(BOOL)enabled;	// 0x255cfd
// converted property setter: - (void)setAirTunesPassword:(id)password;	// 0x255f0d
// converted property setter: - (void)setAirTunesPinModeIsEnabled:(BOOL)enabled;	// 0x256259
- (BOOL)setAppleConnectID:(id)anId password:(id)password;	// 0x2571b9
// converted property setter: - (void)setAudioFormatSetting:(int)setting;	// 0x252245
// converted property setter: - (void)setAudioOutputQuality:(int)quality;	// 0x2522ed
// converted property setter: - (void)setAutomaticallyApplySoftwareUpdates:(BOOL)updates;	// 0x255a11
// converted property setter: - (void)setCrashReportingEnabled:(BOOL)enabled;	// 0x252351
// converted property setter: - (void)setDefaultAudioLanguage:(id)language;	// 0x251cad
// converted property setter: - (void)setDefaultSubtitleLanguage:(id)language;	// 0x251a09
// converted property setter: - (void)setDisplayOverscanOverrideMode:(int)mode;	// 0x2546e9
// declared property setter: - (void)setExplicitRadioContentAllowed:(BOOL)allowed;	// 0x255c65
// converted property setter: - (void)setFavoritesSortMode:(int)mode;	// 0x2547c9
- (void)setKeyboardLanguageEnabled:(id)enabled enabled:(BOOL)enabled2;	// 0x2557ad
// converted property setter: - (void)setKeyboardLanguageKeys:(id)keys;	// 0x255731
// converted property setter: - (void)setLastUsedKeyboardLanguage:(id)language;	// 0x255829
// converted property setter: - (void)setLegacyPhotoStreamEnabled:(BOOL)enabled;	// 0x255289
// converted property setter: - (void)setMarimbaSlideshowMusicSetting:(id)setting;	// 0x255111
// converted property setter: - (void)setMarimbaSlideshowStyle:(id)style;	// 0x254c15
// converted property setter: - (void)setMusicRepeatMode:(int)mode;	// 0x251e91
// converted property setter: - (void)setMusicUseSoundCheck:(BOOL)check;	// 0x2520cd
// converted property setter: - (void)setMusicVolumeControlEnabled:(BOOL)enabled;	// 0x251f21
// declared property setter: - (void)setOrderedAppIdentifiers:(id)identifiers;	// 0x2568c1
// converted property setter: - (void)setPlaybackResolution:(int)resolution;	// 0x254311
// converted property setter: - (void)setPlaylistsEverywhereEnabled:(BOOL)enabled;	// 0x252475
// converted property setter: - (void)setPreferHDPreviews:(BOOL)previews;	// 0x254131
// converted property setter: - (void)setPreferSDHOverRegularSubtitles:(BOOL)subtitles;	// 0x251885
// converted property setter: - (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x252401
// declared property setter: - (void)setSaverThemes:(id)themes;	// 0x2576e9
// converted property setter: - (void)setScreenSaverAllowedOverMusic:(BOOL)music;	// 0x252b3d
- (void)setScreenSaverMusicCoverCollection:(id)collection;	// 0x253191
- (void)setScreenSaverPhotoCollection:(id)collection;	// 0x253571
// converted property setter: - (void)setScreenSaverPrefetchComplete:(BOOL)complete;	// 0x253105
// converted property setter: - (void)setScreenSaverSecondsPerSlide:(int)slide;	// 0x253f85
// converted property setter: - (void)setScreenSaverTimeout:(int)timeout;	// 0x253ba1
// converted property setter: - (void)setScreenSaverTransition:(id)transition;	// 0x254039
// converted property setter: - (void)setSelectedScreenSaverTheme:(id)theme;	// 0x253009
// converted property setter: - (void)setSharedPhotoStreamEnabled:(BOOL)enabled;	// 0x255359
// converted property setter: - (void)setSharedPhotoStreamEnabledStateCanBeToggled:(BOOL)toggled;	// 0x2555ad
// converted property setter: - (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x2523e1
// converted property setter: - (void)setSleepTimeout:(int)timeout;	// 0x253ca9
// converted property setter: - (void)setSlideshowRepeat:(BOOL)repeat;	// 0x2549c1
// converted property setter: - (void)setSlideshowSecondsPerSlide:(int)slide;	// 0x254909
// converted property setter: - (void)setSlideshowSelectedTransitionName:(id)name;	// 0x254b8d
// converted property setter: - (void)setSlideshowShuffleMusic:(BOOL)music;	// 0x254ad9
// converted property setter: - (void)setSlideshowShufflePhotos:(BOOL)photos;	// 0x254a4d
// converted property setter: - (void)setSubtitleRenderMode:(int)mode;	// 0x251b49
// converted property setter: - (void)setUISoundsEnabled:(BOOL)enabled;	// 0x2517f5
// converted property setter: - (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x252421
// converted property getter: - (BOOL)sharedPhotoStreamEnabled;	// 0x255319
// converted property getter: - (BOOL)sharedPhotoStreamEnabledStateCanBeToggled;	// 0x25562d
- (BOOL)sharedPhotoStreamPreferenceSet;	// 0x25566d
// converted property getter: - (BOOL)showedNetworkTimeDialog;	// 0x2523d1
// converted property getter: - (int)sleepTimeout;	// 0x253c69
// converted property getter: - (BOOL)slideshowRepeat;	// 0x254951
// converted property getter: - (int)slideshowSecondsPerSlide;	// 0x254899
// converted property getter: - (id)slideshowSelectedTransitionName;	// 0x254b21
// converted property getter: - (BOOL)slideshowShuffleMusic;	// 0x254a95
// converted property getter: - (BOOL)slideshowShufflePhotos;	// 0x254a09
- (id)sortedApplianceArray:(id)array;	// 0x2569ad
// converted property getter: - (int)subtitleRenderMode;	// 0x251b05
- (void)updateCloudClientPlaybackResolution;	// 0x254451
- (void)updateHostID:(id)anId to:(id)to;	// 0x2516cd
// converted property getter: - (BOOL)userDismissedNetworkTimeDialog;	// 0x252411
@end

