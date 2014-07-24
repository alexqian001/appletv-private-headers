/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer, BRStateMachine, ATVSliderMenuItemView, NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVAirTunesManager : BRSingleton {
	BRStateMachine *_stateMachine;	// 4 = 0x4
	BOOL _alternateSpeakersEnabled;	// 8 = 0x8
	BOOL _shouldReconnectOnRouteChange;	// 9 = 0x9
	BOOL _preparingToSleep;	// 10 = 0xa
	NSTimer *_speakerSleepTimer;	// 12 = 0xc
	NSArray *_pickableRoutes;	// 16 = 0x10
	NSArray *_pickableSpeakers;	// 20 = 0x14
	NSArray *_pickableScreens;	// 24 = 0x18
	NSDictionary *_cachedDefaultRoute;	// 28 = 0x1c
	NSDictionary *_previousRoute;	// 32 = 0x20
	BOOL _updatesDisabledForScreenSaver;	// 36 = 0x24
	NSTimer *_disableRouteTimer;	// 40 = 0x28
	ATVSliderMenuItemView *_onScreenVolumeSlider;	// 44 = 0x2c
}
@property(retain) ATVSliderMenuItemView *onScreenVolumeSlider;	// G=0xb258d; S=0xb25a1; @synthesize=_onScreenVolumeSlider
@property(readonly, retain) NSArray *pickableScreens;	// G=0xb190d; converted property
@property(readonly, retain) NSArray *pickableSpeakers;	// G=0xb15d5; converted property
+ (void)setSingleton:(id)singleton;	// 0xafbf1
+ (id)singleton;	// 0xafbe1
- (id)init;	// 0xafc15
- (void).cxx_destruct;	// 0xb25b1
- (void)_airPlayActiveAudioRouteChanged:(id)changed;	// 0xb3dad
- (id)_airPlayAuthFailed:(id)failed;	// 0xb3259
- (void)_airPlayPickableRoutesChanged:(id)changed;	// 0xb3cb5
- (id)_cleanUpSpeakerState:(id)state;	// 0xb37c9
- (void)_deviceWillSleep:(id)_device;	// 0xb0865
- (void)_deviceWillWake:(id)_device;	// 0xb08bd
- (void)_displayModeChanged:(id)changed;	// 0xb09f9
- (float)_displayVolumeValue;	// 0xb00d1
- (void)_initializeStateMachine:(id)machine;	// 0xb2671
- (BOOL)_isMuted;	// 0xb0149
- (BOOL)_isRouteToMe:(id)me;	// 0xb3c01
- (id)_newPasswordDialogForSpeaker:(id)speaker;	// 0xb20f5
- (void)_portStatusDidChange:(id)_portStatus;	// 0xb3e41
- (void)_postSpeakerWasSelectedNotificationForSpeaker:(id)speaker;	// 0xb38c5
- (void)_refreshSpeakerUpdateState;	// 0xb0ac5
- (void)_screenSaverActivated:(id)activated;	// 0xb0a85
- (void)_screenSaverDeactivated:(id)deactivated;	// 0xb0aa5
- (id)_selectRoute:(id)route withPassword:(id)password showDialog:(BOOL)dialog isTransient:(BOOL)transient;	// 0xb1c85
- (id)_selectedSpeakerInfo;	// 0xb1359
- (void)_setSelectedSpeakerInfo:(id)info;	// 0xb154d
- (id)_supportedMediaTypes;	// 0xb3a3d
- (void)_updateSpeakerSelectionAfterSleep:(id)sleep;	// 0xb093d
- (BOOL)areAlternateSpeakersSelected;	// 0xb0c59
- (id)bonjourDeviceID;	// 0xb0d25
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0xb234d
- (void)configureSelectedSpeakerSliderMenuItem:(id)item;	// 0xb0195
- (void)dealloc;	// 0xb0039
- (id)defaultRoute;	// 0xb1a75
- (BOOL)destinationIsAppleTV;	// 0xb0c85
- (BOOL)disableSelectedRoute;	// 0xb1fbd
- (void)disableSelectedRouteWithDelay:(float)delay;	// 0xb2085
- (BOOL)doesSpeakerHavePINCode:(id)code;	// 0xb111d
- (BOOL)doesSpeakerHavePassword:(id)password;	// 0xb10d1
- (BOOL)doesSpeakerSupportAirPlayAudio:(id)audio;	// 0xb1169
- (BOOL)doesSpeakerSupportAirPlayScreen:(id)screen;	// 0xb1201
- (BOOL)doesSpeakerSupportAirPlayVideo:(id)video;	// 0xb11b5
- (BOOL)enableSelectedRoute;	// 0xb1ec9
- (BOOL)isActivelyUsingAlternateSpeakers;	// 0xb0c1d
- (BOOL)isDefaultRoute:(id)route;	// 0xb1075
- (BOOL)isSpeakerConnectedForInfo:(id)info;	// 0xb0f8d
- (int)numPickableRoutes;	// 0xb0d41
- (int)numPickableScreens;	// 0xb0d61
- (int)numPickableSpeakers;	// 0xb0d9d
// declared property getter: - (id)onScreenVolumeSlider;	// 0xb258d
// converted property getter: - (id)pickableScreens;	// 0xb190d
// converted property getter: - (id)pickableSpeakers;	// 0xb15d5
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0xb0dd9
- (id)remoteSpeakerInfoWithUID:(id)uid;	// 0xb0e25
- (BOOL)selectRoute:(id)route;	// 0xb1bd1
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0xb2445
// declared property setter: - (void)setOnScreenVolumeSlider:(id)slider;	// 0xb25a1
- (id)speakerNameForInfo:(id)info;	// 0xb1271
- (id)speakerUIDForInfo:(id)info;	// 0xb124d
- (id)speakersProviderWithHandler:(id)handler title:(id)title initialSelection:(long *)selection disableAlternateRoutes:(BOOL)routes;	// 0xb03d5
@end
