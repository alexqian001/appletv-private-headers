/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"
#import "BREventDelegate.h"

@class NSMutableArray, NSDictionary, ATVTopShelfRefreshTask, ATVMainMenuButton, BRImageControl, ATVMainMenuButtonGrid, BRControl, BRPreferences, BRImage, NSMutableDictionary, BRCursorControl, BRImageManager, BRTopShelfView, NSArray, BRShimmerControl;
@protocol BRTopShelfController, ATVMainMenuControllerDelegate, BRAppliance;

__attribute__((visibility("hidden")))
@interface ATVMainMenuController : BRViewController <BREventDelegate> {
	BRControl *_containerView;	// 104 = 0x68
	BRControl *_containerViewFocusedControl;	// 108 = 0x6c
	id<BRTopShelfController> _shelfController;	// 112 = 0x70
	BRImageControl *_shelfBackground;	// 116 = 0x74
	BRImageControl *_appsBackground;	// 120 = 0x78
	BRImageControl *_appsBackgroundShroud;	// 124 = 0x7c
	BRTopShelfView *_topShelfView;	// 128 = 0x80
	ATVMainMenuButton *_savedFocusedInternetAppButton;	// 132 = 0x84
	BOOL _shelfTransitionInFlight;	// 136 = 0x88
	BOOL _suppressShelfReloadFromFocusedAppliance;	// 137 = 0x89
	ATVMainMenuButtonGrid *_mainApplicationsGrid;	// 140 = 0x8c
	ATVMainMenuButtonGrid *_internetContentGrid;	// 144 = 0x90
	BRShimmerControl *_topDivider;	// 148 = 0x94
	BRControl *_internetContentFadeMask;	// 152 = 0x98
	id<ATVMainMenuControllerDelegate> _delegate;	// 156 = 0x9c
	BRCursorControl *_cursor;	// 160 = 0xa0
	BRImage *_blackBrickImage;	// 164 = 0xa4
	id<BRAppliance> _focusedAppliance;	// 168 = 0xa8
	NSMutableDictionary *_shelfControllersByApplication;	// 172 = 0xac
	ATVTopShelfRefreshTask *_topShelfRefreshTask;	// 176 = 0xb0
	NSMutableArray *_changedMerchantIDs;	// 180 = 0xb4
	NSMutableArray *_changedAppliances;	// 184 = 0xb8
	BRPreferences *_imageCachePrefs;	// 188 = 0xbc
	NSDictionary *_layoutInfo;	// 192 = 0xc0
	NSArray *_internetMerchants;	// 196 = 0xc4
	NSArray *_appliances;	// 200 = 0xc8
	id _focusedMerchant;	// 204 = 0xcc
}
@property(copy, nonatomic) NSArray *appliances;	// G=0x13fcb1; S=0x13fcc5; @synthesize=_appliances
@property(assign, nonatomic) id<ATVMainMenuControllerDelegate> delegate;	// G=0x13ef8d; S=0x13ef7d; 
@property(readonly, assign, nonatomic) id<BRAppliance> focusedAppliance;	// G=0x13ef6d; 
@property(assign, nonatomic) id focusedMerchant;	// G=0x13fcd5; S=0x13fce5; @synthesize=_focusedMerchant
@property(readonly, assign, nonatomic) BRImageManager *imageManager;	// G=0x13fcf5; 
@property(copy, nonatomic) NSArray *internetMerchants;	// G=0x13fc9d; S=0x13bb61; @synthesize=_internetMerchants
+ (BOOL)automaticallyNotifiesObserversOfInternetMerchants;	// 0x13bb5d
+ (id)mainMenu;	// 0x13b609
- (id)init;	// 0x13b679
- (void)_animateContainerViewToPosition:(CGPoint)position;	// 0x13d641
- (void)_arrangeMerchantsArray:(id)array;	// 0x13f189
- (id)_blackBrickImage;	// 0x13fddd
- (void)_cacheImageForAppliance:(id)appliance;	// 0x140469
- (void)_cacheImageForMerchant:(id)merchant;	// 0x1405d1
- (void)_coalescedUpdateImagesForChangedAppliances;	// 0x140a61
- (void)_coalescedUpdateImagesForChangedMerchants;	// 0x14088d
- (id)_extraInfoForAppliance:(id)appliance;	// 0x140189
- (void)_handleImageManagerImageUpdatedNotification:(id)notification;	// 0x1406bd
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0x13bd81
- (BOOL)_handleRemoteEvent:(id)event;	// 0x13f7e1
- (BOOL)_handleTouchEvent:(id)event;	// 0x13f99d
- (void)_handleWindowMaxBoundsChanged;	// 0x13c335
- (id)_identifierFromImageID:(id)imageID;	// 0x1403ad
- (id)_imageBaseNameFromAppliance:(id)appliance;	// 0x140241
- (id)_imageForAppliance:(id)appliance;	// 0x13ff45
- (id)_imageForMerchant:(id)merchant;	// 0x13fe29
- (id)_imageNameFromAppliance:(id)appliance;	// 0x140295
- (id)_imageNameFromMerchant:(id)merchant;	// 0x140151
- (id)_imageNameWithBaseName:(id)baseName;	// 0x1400a9
- (void)_installBottomEdgeFadeMask;	// 0x13e3c9
- (void)_installOrRemoveBottomEdgeFadeMaskAsNecessary;	// 0x13e2c5
- (void)_layoutContainerView;	// 0x13c755
- (void)_layoutViews;	// 0x13c8bd
- (id)_newBackgroundWithImageNamed:(id)imageNamed;	// 0x13d039
- (id)_newBackgroundWithImageNamed:(id)imageNamed asContents:(BOOL)contents;	// 0x13cf79
- (id)_newInternetContentGrid;	// 0x13d319
- (id)_newMainApplicationsGrid;	// 0x13d04d
- (id)_prefsVersionKeyFromName:(id)name;	// 0x1402cd
- (void)_pushControllerForApplianceOrMerchant:(id)applianceOrMerchant;	// 0x13c065
- (void)_refreshTopShelfControllers;	// 0x13cf3d
- (void)_reload;	// 0x13c25d
- (void)_reloadTopShelf;	// 0x13e86d
- (void)_reloadTopShelfWithoutAnimating;	// 0x13e76d
- (void)_removeBottomEdgeFadeMask;	// 0x13e541
- (void)_saveVersion:(id)version forAppID:(id)appID;	// 0x14035d
- (void)_scrollApplicationsToVisible;	// 0x13dcd9
- (void)_scrollShelfToVisible;	// 0x13d75d
- (void)_setupTopShelfView;	// 0x13ce05
- (void)_updateCachedApplianceImages;	// 0x13be5d
- (void)_updateCachedMerchantImages;	// 0x13bd91
- (id)_versionForAppID:(id)appID;	// 0x140321
- (id)accessibilityLabel;	// 0x13fb19
- (id)accessibilityScreenContent;	// 0x13fac9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x13ec29
// declared property getter: - (id)appliances;	// 0x13fcb1
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x13f2a9
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x13fac1
- (BOOL)canBeRemovedFromStack;	// 0x13fac5
- (void)controlWasActivated;	// 0x13baf5
- (void)dealloc;	// 0x13b959
// declared property getter: - (id)delegate;	// 0x13ef8d
- (void)focusApplianceWithIdentifier:(id)identifier;	// 0x13ef9d
// declared property getter: - (id)focusedAppliance;	// 0x13ef6d
// declared property getter: - (id)focusedMerchant;	// 0x13fcd5
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x13fb41
- (void)gridViewDidBeginEditing:(id)gridView;	// 0x13fbb9
- (void)gridViewDidEndEditing:(id)gridView;	// 0x13fbed
- (void)handleInternetGridWillScroll;	// 0x13d631
- (void)handleRootCollectionChanged;	// 0x13ec81
// declared property getter: - (id)imageManager;	// 0x13fcf5
// declared property getter: - (id)internetMerchants;	// 0x13fc9d
- (void)merchantChanged:(id)changed;	// 0x13edc5
// declared property setter: - (void)setAppliances:(id)appliances;	// 0x13fcc5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x13ef7d
- (void)setFocusedAppliance:(id)appliance;	// 0x13ef05
// declared property setter: - (void)setFocusedMerchant:(id)merchant;	// 0x13fce5
// declared property setter: - (void)setInternetMerchants:(id)merchants;	// 0x13bb61
- (id)topShelfControllerForApp:(id)app;	// 0x13f0a1
- (void)updateBoundAvailableAppliances;	// 0x13bf29
- (void)updateBoundFocusedControlOfContainerView;	// 0x13bfb5
- (void)updateBoundInternetMerchants;	// 0x13bced
- (void)updateBoundMusicStoreMerchantInfo;	// 0x13bfa5
- (id)view;	// 0x13c3b5
@end

