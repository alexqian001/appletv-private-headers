/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVSystemController : NSObject {
	AVSystemControllerPrivate *_priv;	// 4 = 0x4
}
+ (void)initialize;	// 0x36ca6df1
+ (id)sharedAVSystemController;	// 0x36ca6e31
- (id)init;	// 0x36ca6ee1
- (BOOL)allowUserToExceedEUVolumeLimit;	// 0x36cc207d
- (id)attributeForKey:(id)key;	// 0x36cb1fa9
- (BOOL)changeActiveCategoryVolumeBy:(float)by;	// 0x36cc1abd
- (BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x36cc1a5d
- (BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x36cc1bed
- (BOOL)changeVolumeBy:(float)by forCategory:(id)category;	// 0x36cc1d31
- (BOOL)currentRouteHasVolumeControl;	// 0x36cc1ff5
- (void)dealloc;	// 0x36cb38c1
- (BOOL)enablePortDiscovery:(BOOL)discovery;	// 0x36cc1ec5
- (BOOL)getActiveCategoryMuted:(BOOL *)muted;	// 0x36cc1cb9
- (BOOL)getActiveCategoryMuted:(BOOL *)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x36cc1cf5
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name;	// 0x36cc1bc9
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name fallbackCategory:(id)category;	// 0x36cc1b6d
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x36cc1c3d
- (BOOL)getPortDiscoveryEnabled;	// 0x36cc1e51
- (BOOL)getVolume:(float *)volume forCategory:(id)category;	// 0x36cc1f2d
- (void)handleServerDied;	// 0x36cb3831
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x36cc25dd
- (BOOL)okToNotifyFromThisThread;	// 0x36cc2691
- (id)pickableRoutesForCategory:(id)category;	// 0x36cc1fc9
- (void)postEffectiveVolumeNotification:(void *)notification;	// 0x36cc2779
- (void)postFullMuteDidChangeNotification:(void *)postFullMute;	// 0x36cc26b5
- (id)routeForCategory:(id)category;	// 0x36cc1f55
- (BOOL)setActiveCategoryVolumeTo:(float)to;	// 0x36cc1b45
- (BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x36cc1ae5
- (BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x36cc1c15
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x36cc20cd
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x36cc1d81
- (BOOL)setVolumeTo:(float)to forCategory:(id)category;	// 0x36cc1d59
- (BOOL)toggleActiveCategoryMuted;	// 0x36cc1c65
- (BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x36cc1c8d
- (id)volumeCategoryForAudioCategory:(id)audioCategory;	// 0x36cc1f9d
@end
