/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSArray, NSMutableDictionary;

@interface BRApplianceManager : BRSingleton {
@private
	NSArray *_arrangedAppliances;	// 4 = 0x4
	BOOL _loadingAppliances;	// 8 = 0x8
	NSArray *_appliances;	// 12 = 0xc
	NSMutableDictionary *_applianceIdentifierToApplianceDictionary;	// 16 = 0x10
}
@property(retain) NSMutableDictionary *applianceIdentifierToApplianceDictionary;	// G=0x36722db9; S=0x36722dcd; @synthesize=_applianceIdentifierToApplianceDictionary
@property(copy) NSArray *appliances;	// G=0x36722d81; S=0x36722d95; @synthesize=_appliances
@property(readonly, assign) NSArray *arrangedAppliances;	// G=0x36722551; 
+ (void)setSingleton:(id)singleton;	// 0x367223a5
+ (void)showMainMenu;	// 0x367223b5
+ (id)singleton;	// 0x36722395
- (id)init;	// 0x36722411
- (void)_applianceDidReloadCategories:(id)_appliance;	// 0x36722709
- (id)_applianceForInfo:(id)info;	// 0x36723271
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x36722df1
- (void)_handleLanguageChangedNotification:(id)notification;	// 0x36723261
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0x36723251
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x367230d5
- (void)_invalidateArrangedAppliances;	// 0x3672335d
- (id)_loadApplianceAtPath:(id)path;	// 0x367237c5
- (void)_loadAppliances;	// 0x36723429
- (BOOL)_shouldLoadApp:(id)app;	// 0x3672336d
- (id)applianceForInfo:(id)info;	// 0x367226cd
// declared property getter: - (id)applianceIdentifierToApplianceDictionary;	// 0x36722db9
- (id)applianceInfoForApplianceIdentifier:(id)applianceIdentifier;	// 0x36722695
- (id)applianceInfoList;	// 0x36722661
// declared property getter: - (id)appliances;	// 0x36722d81
// declared property getter: - (id)arrangedAppliances;	// 0x36722551
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x36722ab1
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x36722ae1
- (id)controllerForMerchant:(id)merchant;	// 0x36722a9d
- (void)dealloc;	// 0x367224cd
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x36722c79
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x36722cfd
- (void)loadAppliances;	// 0x36722561
// declared property setter: - (void)setApplianceIdentifierToApplianceDictionary:(id)applianceDictionary;	// 0x36722dcd
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x36722d95
@end
