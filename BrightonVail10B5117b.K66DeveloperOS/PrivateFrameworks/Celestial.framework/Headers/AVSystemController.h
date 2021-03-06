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
+ (void)initialize;	// 0x33779251
+ (id)sharedAVSystemController;	// 0x33779291
- (id)init;	// 0x3377935d
- (BOOL)allowUserToExceedEUVolumeLimit;	// 0x337999ed
- (id)attributeForKey:(id)key;	// 0x33785ab5
- (BOOL)changeActiveCategoryVolumeBy:(float)by;	// 0x3379942d
- (BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x337993cd
- (BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3379955d
- (BOOL)changeVolumeBy:(float)by forCategory:(id)category;	// 0x337996a1
- (BOOL)currentRouteHasVolumeControl;	// 0x33799965
- (void)dealloc;	// 0x3378799d
- (BOOL)enablePortDiscovery:(BOOL)discovery;	// 0x33799835
- (BOOL)getActiveCategoryMuted:(BOOL *)muted;	// 0x33799629
- (BOOL)getActiveCategoryMuted:(BOOL *)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x33799665
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name;	// 0x33799539
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name fallbackCategory:(id)category;	// 0x337994dd
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x337995ad
- (BOOL)getPortDiscoveryEnabled;	// 0x337997c1
- (BOOL)getVolume:(float *)volume forCategory:(id)category;	// 0x3379989d
- (void)handleServerDied;	// 0x3378790d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x33799f6d
- (BOOL)okToNotifyFromThisThread;	// 0x3379a021
- (id)pickableRoutesForCategory:(id)category;	// 0x33799939
- (void)postEffectiveVolumeNotification:(void *)notification;	// 0x3379a109
- (void)postFullMuteDidChangeNotification:(void *)postFullMute;	// 0x3379a045
- (id)routeForCategory:(id)category;	// 0x337998c5
- (BOOL)setActiveCategoryVolumeTo:(float)to;	// 0x337994b5
- (BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x33799455
- (BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x33799585
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x33799a3d
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x337996f1
- (BOOL)setVolumeTo:(float)to forCategory:(id)category;	// 0x337996c9
- (BOOL)toggleActiveCategoryMuted;	// 0x337995d5
- (BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x337995fd
- (id)volumeCategoryForAudioCategory:(id)audioCategory;	// 0x3379990d
@end

