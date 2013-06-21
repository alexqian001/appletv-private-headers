/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRCursorControl, BRWaitPromptControl, NSTimer, BRGridView, NSMutableArray, BRHeaderControl, BRPanelControl, NSMutableDictionary, BRTextControl, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVFavoritesController : BRController {
	int _itemType;	// 100 = 0x64
	NSMutableArray *_favorites;	// 104 = 0x68
	BRHeaderControl *_header;	// 108 = 0x6c
	BRScrollControl *_scroller;	// 112 = 0x70
	BRPanelControl *_panel;	// 116 = 0x74
	BRGridView *_grid;	// 120 = 0x78
	BRCursorControl *_cursor;	// 124 = 0x7c
	BRTextControl *_rearrangeInstructions;	// 128 = 0x80
	BOOL _hasBeenActivated;	// 132 = 0x84
	NSMutableDictionary *_redDotMap;	// 136 = 0x88
	NSTimer *_spinnerTimer;	// 140 = 0x8c
	BRWaitPromptControl *_spinner;	// 144 = 0x90
	BOOL _showsSpinner;	// 148 = 0x94
	BOOL _favoriteOrderChanged;	// 149 = 0x95
	BOOL _needsReload;	// 150 = 0x96
	BOOL _hasInitiatedFirstFetch;	// 151 = 0x97
}
@property(assign, nonatomic) BOOL hasInitiatedFirstFetch;	// G=0x14bc71; S=0x14bc81; @synthesize=_hasInitiatedFirstFetch
- (id)initWithItemType:(int)itemType error:(id *)error;	// 0x14b065
- (void)_fadeOutAnimationCompleted:(id)completed finished:(BOOL)finished;	// 0x14c3f9
- (void)_favoriteInsertedNotification:(id)notification;	// 0x14c0f1
- (void)_favoriteRemovedNotification:(id)notification;	// 0x14c1d9
- (void)_favoritesShowDataChangedNotification:(id)notification;	// 0x14c33d
- (void)_fetchFavoritesFromKeyValueStore;	// 0x14bc91
- (void)_markAsDirtyAndReloadIfActive;	// 0x14cc0d
- (id)_mediaType;	// 0x14ce4d
- (id)_noFavoritesController;	// 0x14c371
- (void)_rebuildRedDotMapWithFavoritesIfNecessary:(id)favoritesIfNecessary;	// 0x14cfd5
- (int)_redDotCountForStoreFavorite:(id)storeFavorite;	// 0x14cf65
- (void)_reload;	// 0x14c051
- (void)_reloadIfNeeded;	// 0x14c0cd
- (void)_removeRedDotCountForStoreFavorite:(id)storeFavorite;	// 0x14cf0d
- (void)_setRedDotCount:(int)count forStoreFavorite:(id)storeFavorite;	// 0x14ce95
- (BOOL)_setupAfterFavoritesFetch;	// 0x14bd61
- (BOOL)_shouldShowRedDots;	// 0x14c3d9
- (void)_showDataChangedNotification:(id)notification;	// 0x14c301
- (void)_showGrid;	// 0x14c5f1
- (void)_showSpinner:(BOOL)spinner;	// 0x14c43d
- (id)_sortedFavorites;	// 0x14bed1
- (void)_spinnerTimerFired:(id)fired;	// 0x14c525
- (void)_storeFavoriteChangedNotification:(id)notification;	// 0x14c275
- (id)accessibilityScreenContent;	// 0x14b6d9
- (void)controlWasActivated;	// 0x14b225
- (void)controlWasDeactivated;	// 0x14b2dd
- (void)dealloc;	// 0x14b109
- (BOOL)grid:(id)grid canMoveItemAtIndex:(long)index;	// 0x14bb29
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x14bc39
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x14ba65
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x14b731
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x14ba2d
- (BOOL)grid:(id)grid moveItemAtIndex:(long)index toIndex:(long)index3;	// 0x14bb2d
- (long)grid:(id)grid targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x14bc45
// declared property getter: - (BOOL)hasInitiatedFirstFetch;	// 0x14bc71
- (BOOL)isNetworkDependent;	// 0x14b3d9
- (void)layoutSubcontrols;	// 0x14b3dd
- (long)numberOfColumnsInGrid:(id)grid;	// 0x14b719
- (long)numberOfItemsInGrid:(id)grid;	// 0x14b6f9
// declared property setter: - (void)setHasInitiatedFirstFetch:(BOOL)fetch;	// 0x14bc81
- (void)setRearrangeInstructionsHidden:(BOOL)hidden;	// 0x14cc55
- (void)wasPushed;	// 0x14b36d
@end
