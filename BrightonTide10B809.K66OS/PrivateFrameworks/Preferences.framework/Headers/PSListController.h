/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSViewControllerOffsetProtocol.h"
#import "PSViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSMutableDictionary, UITableView, NSArray, NSString, UIActionSheet, UIAlertView, UIKeyboard, UIPopoverController, NSMutableArray;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSViewControllerOffsetProtocol> {
	NSMutableArray *_prequeuedReusablePSTableCells;	// 208 = 0xd0
	NSMutableDictionary *_cells;	// 212 = 0xd4
	BOOL _cachesCells;	// 216 = 0xd8
	BOOL _reusesCells;	// 217 = 0xd9
	BOOL _forceSynchronousIconLoadForCreatedCells;	// 218 = 0xda
	UITableView *_table;	// 220 = 0xdc
	NSArray *_specifiers;	// 224 = 0xe0
	NSMutableDictionary *_specifiersByID;	// 228 = 0xe4
	NSMutableArray *_groups;	// 232 = 0xe8
	NSString *_specifierID;	// 236 = 0xec
	NSMutableArray *_bundleControllers;	// 240 = 0xf0
	BOOL _bundlesLoaded;	// 244 = 0xf4
	BOOL _showingSetupController;	// 245 = 0xf5
	UIActionSheet *_actionSheet;	// 248 = 0xf8
	UIAlertView *_alertView;	// 252 = 0xfc
	BOOL _swapAlertButtons;	// 256 = 0x100
	BOOL _keyboardWasVisible;	// 257 = 0x101
	UIKeyboard *_keyboard;	// 260 = 0x104
	UIPopoverController *_popupStylePopoverController;	// 264 = 0x108
	BOOL _popupStylePopoverShouldRePresent;	// 268 = 0x10c
	BOOL _popupIsModal;	// 269 = 0x10d
	BOOL _popupIsDismissing;	// 270 = 0x10e
	BOOL _hasAppeared;	// 271 = 0x10f
	float _verticalContentOffset;	// 272 = 0x110
	NSString *_offsetItemName;	// 276 = 0x114
	CGPoint _contentOffsetWithKeyboard;	// 280 = 0x118
}
@property(assign, nonatomic) BOOL forceSynchronousIconLoadForCreatedCells;	// G=0x352e4ddd; S=0x352e4ded; @synthesize=_forceSynchronousIconLoadForCreatedCells
@property(readonly, retain) UIPopoverController *popupStylePopoverController;	// G=0x352e4ef9; converted property
@property(retain) id specifier;	// G=0x352dd031; S=0x352dd369; converted property
@property(retain) NSString *specifierID;	// G=0x352e0831; S=0x352e07f5; converted property
@property(retain) NSArray *specifiers;	// G=0x352dd14d; S=0x352dd3d9; converted property
@property(readonly, retain) UITableView *table;	// G=0x352dcfa1; converted property
@property(readonly, assign) float verticalContentOffset;	// G=0x352e4d35; converted property
+ (BOOL)displaysButtonBar;	// 0x352dcd61
- (id)init;	// 0x352dfecd
- (id)initForContentSize:(CGSize)contentSize;	// 0x352e0001
- (void)_addIdentifierForSpecifier:(id)specifier;	// 0x352dd1dd
- (id)_createGroupIndices:(id)indices;	// 0x352e0315
- (id)_customViewForSpecifier:(id)specifier class:(Class)aClass isHeader:(BOOL)header;	// 0x352e1455
- (BOOL)_getGroup:(int *)group row:(int *)row ofSpecifierAtIndex:(int)index groups:(id)groups;	// 0x352ddc25
- (float)_getKeyboardIntersectionHeight;	// 0x352e42f5
- (void)_insertContiguousSpecifiers:(id)specifiers atIndex:(int)index animated:(BOOL)animated;	// 0x352de091
- (void)_keyboardDidHide:(id)_keyboard;	// 0x352e4cb9
- (void)_keyboardWillHide:(id)_keyboard;	// 0x352e4a79
- (void)_keyboardWillShow:(id)_keyboard;	// 0x352e4661
- (void)_loadBundleControllers;	// 0x352dfafd
- (int)_nextGroupInSpecifiersAfterIndex:(int)specifiersAfterIndex inArray:(id)array;	// 0x352df0c9
- (void)_removeContiguousSpecifiers:(id)specifiers animated:(BOOL)animated;	// 0x352dea4d
- (void)_removeIdentifierForSpecifier:(id)specifier;	// 0x352dd325
- (void)_returnKeyPressed:(id)pressed;	// 0x352e22ed
- (void)_setContentInset:(float)inset;	// 0x352e45c9
- (void)_setNotShowingSetupController;	// 0x352e4dc9
- (float)_tableView:(id)view heightForCustomInSection:(int)section isHeader:(BOOL)header;	// 0x352e1509
- (id)_tableView:(id)view viewForCustomInSection:(int)section isHeader:(BOOL)header;	// 0x352e16a5
- (void)_unloadBundleControllers;	// 0x352dfb81
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x352e30a1
- (void)addSpecifier:(id)specifier;	// 0x352de7f1
- (void)addSpecifier:(id)specifier animated:(BOOL)animated;	// 0x352de805
- (void)addSpecifiersFromArray:(id)array;	// 0x352de84d
- (void)addSpecifiersFromArray:(id)array animated:(BOOL)animated;	// 0x352de861
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x352e2fd5
- (Class)backgroundViewClass;	// 0x352e0031
- (void)beginUpdates;	// 0x352dd531
- (id)bundle;	// 0x352dcfb1
- (id)cachedCellForSpecifier:(id)specifier;	// 0x352e0969
- (id)cachedCellForSpecifierID:(id)specifierID;	// 0x352e09b1
- (void)clearCache;	// 0x352dcd65
- (void)confirmationViewAcceptedForSpecifier:(id)specifier;	// 0x352e2f3d
- (void)confirmationViewCancelledForSpecifier:(id)specifier;	// 0x352e2f89
- (BOOL)containsSpecifier:(id)specifier;	// 0x352dda9d
- (id)contentScrollView;	// 0x352e004d
- (id)controllerForRowAtIndexPath:(id)indexPath;	// 0x352e32ed
- (id)controllerForSpecifier:(id)specifier;	// 0x352e3379
- (void)createGroupIndices;	// 0x352e03d5
- (void)createPrequeuedPSTableCells:(unsigned)cells etched:(BOOL)etched;	// 0x352e09e1
- (void)dealloc;	// 0x352dfc01
- (id)description;	// 0x352dcf1d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x352e183d
- (void)dismissPopover;	// 0x352e3d9d
- (void)dismissPopoverAnimated:(BOOL)animated;	// 0x352e3db1
- (void)endUpdates;	// 0x352dd551
- (id)findFirstVisibleResponder;	// 0x352e1c2d
// declared property getter: - (BOOL)forceSynchronousIconLoadForCreatedCells;	// 0x352e4ddd
- (void)formSheetViewWillDisappear;	// 0x352e2185
- (BOOL)getGroup:(int *)group row:(int *)row ofSpecifier:(id)specifier;	// 0x352ddbdd
- (BOOL)getGroup:(int *)group row:(int *)row ofSpecifierAtIndex:(int)index;	// 0x352ddcb1
- (BOOL)getGroup:(int *)group row:(int *)row ofSpecifierID:(id)specifierID;	// 0x352ddba1
- (void)handleURL:(id)url;	// 0x352e3e0d
- (int)indexForIndexPath:(id)indexPath;	// 0x352dd4bd
- (int)indexForRow:(int)row inGroup:(int)group;	// 0x352ddd2d
- (int)indexOfGroup:(int)group;	// 0x352ddac1
- (int)indexOfSpecifier:(id)specifier;	// 0x352dda75
- (int)indexOfSpecifierID:(id)specifierID;	// 0x352dda2d
- (id)indexPathForIndex:(int)index;	// 0x352dd441
- (id)indexPathForSpecifier:(id)specifier;	// 0x352dd48d
- (void)insertContiguousSpecifiers:(id)specifiers afterSpecifier:(id)specifier;	// 0x352de785
- (void)insertContiguousSpecifiers:(id)specifiers afterSpecifier:(id)specifier animated:(BOOL)animated;	// 0x352de611
- (void)insertContiguousSpecifiers:(id)specifiers afterSpecifierID:(id)anId;	// 0x352de7a9
- (void)insertContiguousSpecifiers:(id)specifiers afterSpecifierID:(id)anId animated:(BOOL)animated;	// 0x352de679
- (void)insertContiguousSpecifiers:(id)specifiers atEndOfGroup:(int)group;	// 0x352de7cd
- (void)insertContiguousSpecifiers:(id)specifiers atEndOfGroup:(int)group animated:(BOOL)animated;	// 0x352de6c5
- (void)insertContiguousSpecifiers:(id)specifiers atIndex:(int)index;	// 0x352de761
- (void)insertContiguousSpecifiers:(id)specifiers atIndex:(int)index animated:(BOOL)animated;	// 0x352de5ed
- (void)insertSpecifier:(id)specifier afterSpecifier:(id)specifier2;	// 0x352de025
- (void)insertSpecifier:(id)specifier afterSpecifier:(id)specifier2 animated:(BOOL)animated;	// 0x352ddec9
- (void)insertSpecifier:(id)specifier afterSpecifierID:(id)anId;	// 0x352de049
- (void)insertSpecifier:(id)specifier afterSpecifierID:(id)anId animated:(BOOL)animated;	// 0x352ddf29
- (void)insertSpecifier:(id)specifier atEndOfGroup:(int)group;	// 0x352de06d
- (void)insertSpecifier:(id)specifier atEndOfGroup:(int)group animated:(BOOL)animated;	// 0x352ddf65
- (void)insertSpecifier:(id)specifier atIndex:(int)index;	// 0x352de001
- (void)insertSpecifier:(id)specifier atIndex:(int)index animated:(BOOL)animated;	// 0x352dde35
- (void)lazyLoadBundle:(id)bundle;	// 0x352e3135
- (id)loadSpecifiersFromPlistName:(id)plistName target:(id)target;	// 0x352dd045
- (void)loadView;	// 0x352e0091
- (void)loseFocus;	// 0x352e042d
- (void)migrateSpecifierMetadataFrom:(id)from to:(id)to;	// 0x352e0535
- (int)numberOfGroups;	// 0x352ddb15
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x352e086d
- (BOOL)performActionForSpecifier:(id)specifier;	// 0x352e23c5
- (BOOL)performButtonActionForSpecifier:(id)specifier;	// 0x352e269d
- (BOOL)performConfirmationActionForSpecifier:(id)specifier;	// 0x352e2849
- (BOOL)performConfirmationCancelActionForSpecifier:(id)specifier;	// 0x352e2a6d
- (BOOL)performLoadActionForSpecifier:(id)specifier;	// 0x352e24f1
- (void)popoverController:(id)controller animationCompleted:(int)completed;	// 0x352e3d55
- (BOOL)popoverControllerShouldDismissPopover:(id)popoverController;	// 0x352e3d3d
// converted property getter: - (id)popupStylePopoverController;	// 0x352e4ef9
- (void)popupViewWillDisappear;	// 0x352e2221
- (void)prepareSpecifiersMetadata;	// 0x352e1e85
- (void)pushController:(id)controller;	// 0x352e3df9
- (void)pushController:(id)controller animate:(BOOL)animate;	// 0x352e3a39
- (void)reload;	// 0x352e0489
- (void)reloadIconForSpecifierForBundle:(id)bundle;	// 0x352e41c9
- (void)reloadSpecifier:(id)specifier;	// 0x352dd9d1
- (void)reloadSpecifier:(id)specifier animated:(BOOL)animated;	// 0x352dd981
- (void)reloadSpecifierAtIndex:(int)index;	// 0x352dd96d
- (void)reloadSpecifierAtIndex:(int)index animated:(BOOL)animated;	// 0x352dd571
- (void)reloadSpecifierID:(id)anId;	// 0x352dda19
- (void)reloadSpecifierID:(id)anId animated:(BOOL)animated;	// 0x352dd9e5
- (void)reloadSpecifiers;	// 0x352e0539
- (void)removeContiguousSpecifiers:(id)specifiers;	// 0x352def71
- (void)removeContiguousSpecifiers:(id)specifiers animated:(BOOL)animated;	// 0x352def61
- (void)removeLastSpecifier;	// 0x352de9f1
- (void)removeLastSpecifierAnimated:(BOOL)animated;	// 0x352dea05
- (void)removeSpecifier:(id)specifier;	// 0x352de9b5
- (void)removeSpecifier:(id)specifier animated:(BOOL)animated;	// 0x352de8a9
- (void)removeSpecifierAtIndex:(int)index;	// 0x352de9dd
- (void)removeSpecifierAtIndex:(int)index animated:(BOOL)animated;	// 0x352de945
- (void)removeSpecifierID:(id)anId;	// 0x352de9c9
- (void)removeSpecifierID:(id)anId animated:(BOOL)animated;	// 0x352de911
- (void)replaceContiguousSpecifiers:(id)specifiers withSpecifiers:(id)specifiers2;	// 0x352def85
- (void)replaceContiguousSpecifiers:(id)specifiers withSpecifiers:(id)specifiers2 animated:(BOOL)animated;	// 0x352defa9
- (void)returnPressedAtEnd;	// 0x352e2261
- (int)rowsForGroup:(int)group;	// 0x352ddd69
- (void)selectRowForSpecifier:(id)specifier;	// 0x352e4ccd
- (void)setCachesCells:(BOOL)cells;	// 0x352dce8d
- (void)setDesiredVerticalContentOffset:(float)offset;	// 0x352e4d79
- (void)setDesiredVerticalContentOffsetItemNamed:(id)named;	// 0x352e4d89
// declared property setter: - (void)setForceSynchronousIconLoadForCreatedCells:(BOOL)createdCells;	// 0x352e4ded
- (void)setReusesCells:(BOOL)cells;	// 0x352dce59
// converted property setter: - (void)setSpecifier:(id)specifier;	// 0x352dd369
// converted property setter: - (void)setSpecifierID:(id)anId;	// 0x352e07f5
// converted property setter: - (void)setSpecifiers:(id)specifiers;	// 0x352dd3d9
- (void)setTitle:(id)title;	// 0x352e0841
- (BOOL)shouldReloadSpecifiersOnResume;	// 0x352e4dc5
- (BOOL)shouldSelectResponderOnAppearance;	// 0x352e1bb9
- (void)showConfirmationSheetForSpecifier:(id)specifier;	// 0x352e2ee5
- (void)showConfirmationViewForSpecifier:(id)specifier;	// 0x352e2eb9
- (void)showConfirmationViewForSpecifier:(id)specifier useAlert:(BOOL)alert swapAlertButtons:(BOOL)buttons;	// 0x352e2c25
- (void)showPINSheet:(id)sheet;	// 0x352e4dfd
// converted property getter: - (id)specifier;	// 0x352dd031
- (id)specifierAtIndex:(int)index;	// 0x352ddb55
- (id)specifierForID:(id)anId;	// 0x352e39d1
// converted property getter: - (id)specifierID;	// 0x352e0831
// converted property getter: - (id)specifiers;	// 0x352dd14d
- (id)specifiersInGroup:(int)group;	// 0x352dddad
// converted property getter: - (id)table;	// 0x352dcfa1
- (id)tableBackgroundColor;	// 0x352e005d
- (int)tableStyle;	// 0x352e002d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x352e0b65
- (id)tableView:(id)view detailTextForHeaderInSection:(int)section;	// 0x352e11a5
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x352e0f69
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x352e37c1
- (float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x352e17a1
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x352e1759
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x352e101d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x352e08ad
- (int)tableView:(id)view titleAlignmentForFooterInSection:(int)section;	// 0x352e13b9
- (int)tableView:(id)view titleAlignmentForHeaderInSection:(int)section;	// 0x352e131d
- (id)tableView:(id)view titleForFooterInSection:(int)section;	// 0x352e1291
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x352e1129
- (id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x352e17c5
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x352e177d
- (Class)tableViewClass;	// 0x352e0011
- (void)updateSpecifiers:(id)specifiers withSpecifiers:(id)specifiers2;	// 0x352df129
- (void)updateSpecifiersInRange:(NSRange)range withSpecifiers:(id)specifiers;	// 0x352df1d1
// converted property getter: - (float)verticalContentOffset;	// 0x352e4d35
- (void)viewDidAppear:(BOOL)view;	// 0x352e2079
- (void)viewDidLoad;	// 0x352e1d11
- (void)viewDidUnload;	// 0x352e0289
- (void)viewWillAppear:(BOOL)view;	// 0x352e1965
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x352e17e9
@end

