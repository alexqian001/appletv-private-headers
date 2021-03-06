/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BREventDelegate.h"
#import "BRViewController.h"

@class NSMutableDictionary, ATVTopShelfRefreshTask, BRImageControl, ATVMainMenuButton, BRControl, ATVMainMenuButtonGrid, BRPreferences, BRImage, BRCursorControl, NSArray, BRImageManager, BRTopShelfView, BRShimmerControl, NSMutableArray, NSDictionary;
@protocol BRTopShelfController, ATVMainMenuControllerDelegate, BRAppliance;

__attribute__((visibility("hidden")))
@interface ATVMainMenuController : BRViewController <BREventDelegate> {
	BRControl *_containerView;	// 104 = 0x68
	id<BRTopShelfController> _shelfController;	// 108 = 0x6c
	BRImageControl *_shelfBackground;	// 112 = 0x70
	BRImageControl *_appsBackground;	// 116 = 0x74
	BRImageControl *_appsBackgroundShroud;	// 120 = 0x78
	BRTopShelfView *_topShelfView;	// 124 = 0x7c
	ATVMainMenuButton *_savedFocusedInternetAppButton;	// 128 = 0x80
	BOOL _shelfTransitionInFlight;	// 132 = 0x84
	BOOL _suppressShelfReloadFromFocusedAppliance;	// 133 = 0x85
	ATVMainMenuButtonGrid *_mainApplicationsGrid;	// 136 = 0x88
	ATVMainMenuButtonGrid *_internetContentGrid;	// 140 = 0x8c
	BRShimmerControl *_topDivider;	// 144 = 0x90
	BRControl *_internetContentFadeMask;	// 148 = 0x94
	id<ATVMainMenuControllerDelegate> _delegate;	// 152 = 0x98
	BRCursorControl *_cursor;	// 156 = 0x9c
	BRImage *_blackBrickImage;	// 160 = 0xa0
	id<BRAppliance> _focusedAppliance;	// 164 = 0xa4
	NSMutableDictionary *_shelfControllersByApplication;	// 168 = 0xa8
	ATVTopShelfRefreshTask *_topShelfRefreshTask;	// 172 = 0xac
	NSMutableArray *_changedMerchantIDs;	// 176 = 0xb0
	NSMutableArray *_changedAppliances;	// 180 = 0xb4
	BRPreferences *_imageCachePrefs;	// 184 = 0xb8
	NSDictionary *_layoutInfo;	// 188 = 0xbc
	NSArray *_internetMerchants;	// 192 = 0xc0
	NSArray *_appliances;	// 196 = 0xc4
	id<BRAppliance> _focusedMerchant;	// 200 = 0xc8
}
@property(copy, nonatomic) NSArray *appliances;	// G=0x13774d; S=0x137761; @synthesize=_appliances
@property(assign, nonatomic) id<ATVMainMenuControllerDelegate> delegate;	// G=0x136a29; S=0x136a19; 
@property(readonly, assign, nonatomic) id<BRAppliance> focusedAppliance;	// G=0x136a09; 
@property(readonly, assign, nonatomic) id<BRAppliance> focusedMerchant;	// G=0x137771; @synthesize=_focusedMerchant
@property(readonly, assign, nonatomic) BRImageManager *imageManager;	// G=0x137781; 
@property(copy, nonatomic) NSArray *internetMerchants;	// G=0x137739; S=0x133901; @synthesize=_internetMerchants
+ (BOOL)automaticallyNotifiesObserversOfInternetMerchants;	// 0x1338fd
+ (id)mainMenu;	// 0x1333a9
- (id)init;	// 0x133419
- (void)_animateContainerViewToPosition:(CGPoint)position;	// 0x1353f9
- (void)_arrangeMerchantsArray:(id)array;	// 0x136c25
- (id)_blackBrickImage;	// 0x137869
- (void)_cacheImageForAppliance:(id)appliance;	// 0x137ef5
- (void)_cacheImageForMerchant:(id)merchant;	// 0x13805d
- (void)_coalescedUpdateImagesForChangedAppliances;	// 0x1384ed
- (void)_coalescedUpdateImagesForChangedMerchants;	// 0x138319
- (id)_extraInfoForAppliance:(id)appliance;	// 0x137c15
- (void)_handleImageManagerImageUpdatedNotification:(id)notification;	// 0x138149
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0x133b01
- (BOOL)_handleRemoteEvent:(id)event;	// 0x137281
- (BOOL)_handleTouchEvent:(id)event;	// 0x13743d
- (void)_handleWindowMaxBoundsChanged;	// 0x134095
- (id)_identifierFromImageID:(id)imageID;	// 0x137e39
- (id)_imageBaseNameFromAppliance:(id)appliance;	// 0x137ccd
- (id)_imageForAppliance:(id)appliance;	// 0x1379d1
- (id)_imageForMerchant:(id)merchant;	// 0x1378b5
- (id)_imageNameFromAppliance:(id)appliance;	// 0x137d21
- (id)_imageNameFromMerchant:(id)merchant;	// 0x137bdd
- (id)_imageNameWithBaseName:(id)baseName;	// 0x137b35
- (void)_installBottomEdgeFadeMask;	// 0x135e71
- (void)_installOrRemoveBottomEdgeFadeMaskAsNecessary;	// 0x135d5d
- (void)_layoutContainerView;	// 0x1344b5
- (void)_layoutViews;	// 0x13461d
- (id)_newBackgroundWithImageNamed:(id)imageNamed;	// 0x134df1
- (id)_newBackgroundWithImageNamed:(id)imageNamed asContents:(BOOL)contents;	// 0x134d31
- (id)_newInternetContentGrid;	// 0x1350d1
- (id)_newMainApplicationsGrid;	// 0x134e05
- (id)_prefsVersionKeyFromName:(id)name;	// 0x137d59
- (void)_pushControllerForApplianceOrMerchant:(id)applianceOrMerchant;	// 0x133dd5
- (void)_refreshTopShelfControllers;	// 0x134cf5
- (void)_reload;	// 0x133fcd
- (void)_reloadTopShelf;	// 0x136309
- (void)_reloadTopShelfWithoutAnimating;	// 0x136209
- (void)_removeBottomEdgeFadeMask;	// 0x135fe9
- (void)_saveVersion:(id)version forAppID:(id)appID;	// 0x137de9
- (void)_scrollApplicationsToVisible;	// 0x135925
- (void)_scrollShelfToVisible;	// 0x135515
- (void)_setupTopShelfView;	// 0x134bbd
- (void)_updateCachedApplianceImages;	// 0x133bdd
- (void)_updateCachedMerchantImages;	// 0x133b11
- (id)_versionForAppID:(id)appID;	// 0x137dad
- (id)accessibilityLabel;	// 0x1375b5
- (id)accessibilityScreenContent;	// 0x137565
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x1366c5
// declared property getter: - (id)appliances;	// 0x13774d
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x136d45
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x13755d
- (BOOL)canBeRemovedFromStack;	// 0x137561
- (void)controlWasActivated;	// 0x133895
- (void)dealloc;	// 0x1336f9
// declared property getter: - (id)delegate;	// 0x136a29
- (void)focusApplianceWithIdentifier:(id)identifier;	// 0x136a39
// declared property getter: - (id)focusedAppliance;	// 0x136a09
// declared property getter: - (id)focusedMerchant;	// 0x137771
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x1375dd
- (void)gridViewDidBeginEditing:(id)gridView;	// 0x137655
- (void)gridViewDidEndEditing:(id)gridView;	// 0x137689
- (void)handleInternetGridWillScroll;	// 0x1353e9
- (void)handleRootCollectionChanged;	// 0x13671d
// declared property getter: - (id)imageManager;	// 0x137781
// declared property getter: - (id)internetMerchants;	// 0x137739
- (void)merchantChanged:(id)changed;	// 0x136861
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x137761
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x136a19
- (void)setFocusedAppliance:(id)appliance;	// 0x1369a1
// declared property setter: - (void)setInternetMerchants:(id)merchants;	// 0x133901
- (id)topShelfControllerForApp:(id)app;	// 0x136b3d
- (void)updateBoundAvailableAppliances;	// 0x133ca9
- (void)updateBoundFocusedControlOfContainerView;	// 0x133d35
- (void)updateBoundInternetMerchants;	// 0x133a6d
- (void)updateBoundMusicStoreMerchantInfo;	// 0x133d25
- (id)view;	// 0x134115
@end

