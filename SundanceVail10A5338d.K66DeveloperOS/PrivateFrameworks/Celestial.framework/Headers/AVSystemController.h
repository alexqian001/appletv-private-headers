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
+ (void)initialize;	// 0x3631ca61
+ (id)sharedAVSystemController;	// 0x3631caa1
- (id)init;	// 0x3631cb6d
- (BOOL)allowUserToExceedEUVolumeLimit;	// 0x3633d125
- (id)attributeForKey:(id)key;	// 0x363292c5
- (BOOL)changeActiveCategoryVolumeBy:(float)by;	// 0x3633cb65
- (BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x3633cb05
- (BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3633cc95
- (BOOL)changeVolumeBy:(float)by forCategory:(id)category;	// 0x3633cdd9
- (BOOL)currentRouteHasVolumeControl;	// 0x3633d09d
- (void)dealloc;	// 0x3632b125
- (BOOL)enablePortDiscovery:(BOOL)discovery;	// 0x3633cf6d
- (BOOL)getActiveCategoryMuted:(BOOL *)muted;	// 0x3633cd61
- (BOOL)getActiveCategoryMuted:(BOOL *)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3633cd9d
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name;	// 0x3633cc71
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name fallbackCategory:(id)category;	// 0x3633cc15
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3633cce5
- (BOOL)getPortDiscoveryEnabled;	// 0x3633cef9
- (BOOL)getVolume:(float *)volume forCategory:(id)category;	// 0x3633cfd5
- (void)handleServerDied;	// 0x3632b095
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x3633d6a5
- (BOOL)okToNotifyFromThisThread;	// 0x3633d759
- (id)pickableRoutesForCategory:(id)category;	// 0x3633d071
- (void)postEffectiveVolumeNotification:(void *)notification;	// 0x3633d841
- (void)postFullMuteDidChangeNotification:(void *)postFullMute;	// 0x3633d77d
- (id)routeForCategory:(id)category;	// 0x3633cffd
- (BOOL)setActiveCategoryVolumeTo:(float)to;	// 0x3633cbed
- (BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x3633cb8d
- (BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3633ccbd
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x3633d175
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x3633ce29
- (BOOL)setVolumeTo:(float)to forCategory:(id)category;	// 0x3633ce01
- (BOOL)toggleActiveCategoryMuted;	// 0x3633cd0d
- (BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3633cd35
- (id)volumeCategoryForAudioCategory:(id)audioCategory;	// 0x3633d045
@end
