/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UIActionSheetDelegate.h"
#import "ABPersonTableActionDelegate.h"
#import <NSObject.h> // Unknown library
#import "ABPersonTableTinyActionDelegate.h"

@class ABPersonTableViewDataSource, ABStyleProvider, ABPersonTableActionDataSource, ABPersonTableTinyActionCell;
@protocol ABFMFActionButtonsDelegate;

@interface ABPersonTableViewActionsDelegate : NSObject <UIActionSheetDelegate, ABPersonTableActionDelegate, ABPersonTableTinyActionDelegate> {
	int _highlightedValueIdentifier;	// 4 = 0x4
	void *_highlightedValuePerson;	// 8 = 0x8
	BOOL _highlightedValueIsImportant;	// 12 = 0xc
	int _actionSheetType;	// 16 = 0x10
	ABPersonTableTinyActionCell *_tinyActionCell;	// 20 = 0x14
	id<ABFMFActionButtonsDelegate> _FMFActionButtonsDelegate;	// 24 = 0x18
	ABStyleProvider *_styleProvider;	// 28 = 0x1c
	ABPersonTableViewDataSource *_dataSource;	// 32 = 0x20
	ABPersonTableActionDataSource *_actionDataSource;	// 36 = 0x24
	BOOL _actionShouldPickHighlightedValue;	// 40 = 0x28
	int _highlightedValueProperty;	// 44 = 0x2c
}
@property(assign, nonatomic) id<ABFMFActionButtonsDelegate> FMFActionButtonsDelegate;	// G=0x370d0dc9; S=0x370cc755; @synthesize=_FMFActionButtonsDelegate
@property(readonly, assign, nonatomic) ABPersonTableActionDataSource *actionDataSource;	// G=0x370d0d99; @synthesize=_actionDataSource
@property(assign, nonatomic) BOOL actionShouldPickHighlightedValue;	// G=0x370d0da9; S=0x370d0db9; @synthesize=_actionShouldPickHighlightedValue
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x370d0d79; S=0x370d0d89; @synthesize=_dataSource
@property(assign, nonatomic) void *highlightedValuePerson;	// G=0x370d0df9; S=0x370cc765; @synthesize=_highlightedValuePerson
@property(assign, nonatomic) int highlightedValueProperty;	// G=0x370d0dd9; S=0x370d0de9; @synthesize=_highlightedValueProperty
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x370d0d59; S=0x370d0d69; @synthesize=_styleProvider
@property(readonly, assign, nonatomic) ABPersonTableTinyActionCell *tinyActionCell;	// G=0x370d0749; 
- (id)init;	// 0x370cc63d
// declared property getter: - (id)FMFActionButtonsDelegate;	// 0x370d0dc9
- (unsigned)_sectionForAction:(id)action;	// 0x370cc791
- (void)action:(id)action willShowButton:(id)button forValueAtIndex:(int)index inPropertyGroup:(id)propertyGroup;	// 0x370d0ccd
- (int)actionCountForBottomGroupingExcludingProperty:(int)bottomGroupingExcludingProperty excludedPropertyGroupContext:(void *)context;	// 0x370cdfe9
- (int)actionCountForGrouping:(int)grouping inSection:(int)section excludingProperty:(int)property excludedPropertyGroupContext:(void *)context outExcludedIndexPaths:(id *)paths;	// 0x370cde11
- (int)actionCountForTopGroupingInSection:(int)section excludingProperty:(int)property excludedPropertyGroupContext:(void *)context outExcludedIndexPaths:(id *)paths;	// 0x370ce0e5
// declared property getter: - (id)actionDataSource;	// 0x370d0d99
- (int)actionGroupingCountForPropertyGroup:(id)propertyGroup whenEditing:(BOOL)editing;	// 0x370ce1ad
- (int)actionGroupingCountForPropertyGroup:(id)propertyGroup whenEditing:(BOOL)editing assumeThatPropertyHasSection:(BOOL)section;	// 0x370ce111
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x370d0811
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x370d0c29
// declared property getter: - (BOOL)actionShouldPickHighlightedValue;	// 0x370d0da9
- (id)actionsForProperty:(int)property withActionGrouping:(int)actionGrouping;	// 0x370cc93d
- (id)actionsForProperty:(int)property withActionGroupingAtIndex:(int)index;	// 0x370cc96d
- (id)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x370cd3cd
- (id)addActionWithTitle:(id)title shortTitle:(id)title2 detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x370cd429
- (id)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x370cd38d
- (void)addToFavoritesButtonClicked:(id)favoritesButtonClicked;	// 0x370ceab1
- (void)callContact:(id)contact person:(void *)person property:(int)property identifier:(int)identifier;	// 0x370ce821
- (void)conference:(id)conference person:(void *)person property:(int)property identifier:(int)identifier;	// 0x370cea49
// declared property getter: - (id)dataSource;	// 0x370d0d79
- (void)dealloc;	// 0x370cc6a1
- (int)groupingCountForProperty:(int)property;	// 0x370cc99d
- (BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x370cd341
- (BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering outActions:(id *)actions outIndex:(int *)index;	// 0x370cd2f1
// declared property getter: - (void *)highlightedValuePerson;	// 0x370d0df9
// declared property getter: - (int)highlightedValueProperty;	// 0x370d0dd9
- (BOOL)isFavoriteOfType:(int)type inPropertyGroup:(id)propertyGroup atIndex:(int)index;	// 0x370ce1d1
- (id)newActionsForProperty:(int)property;	// 0x370cc9c9
- (void)performPersonTableAction:(id)action atIndexPath:(id)indexPath;	// 0x370cd1ed
- (BOOL)personTableTinyActionCell:(id)cell shouldShowAction:(id)action;	// 0x370d0c95
- (void)presentDifferentiationSheetForAction:(id)action;	// 0x370d0cb9
- (void)presentDifferentiationSheetIfNeededForAction:(id)action withPropertyGroup:(id)propertyGroup;	// 0x370cc9f5
- (void)reloadBottomActionCellAnimated:(BOOL)animated;	// 0x370cef61
- (void)reloadBottomActionDataForFavorites:(BOOL)favorites texting:(BOOL)texting sharing:(BOOL)sharing conferencing:(BOOL)conferencing;	// 0x370cf075
- (void)reloadBottomActions;	// 0x370d03fd
- (void)reloadBottomActionsAnimated:(BOOL)animated;	// 0x370d03d9
- (void)reloadBottomActionsAnimated:(BOOL)animated favorites:(BOOL)favorites texting:(BOOL)texting sharing:(BOOL)sharing conferencing:(BOOL)conferencing;	// 0x370d0169
- (void)reloadPrimaryPropertyActionsSection;	// 0x370d05c9
- (void)removeActionWithSelector:(SEL)selector target:(id)target property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x370cd961
- (void)removeActionWithSelector:(SEL)selector target:(id)target property:(int)property actionGrouping:(int)grouping ordering:(int)ordering animated:(BOOL)animated;	// 0x370cd6e1
- (void)sendTextMessage:(id)message person:(void *)person property:(int)property identifier:(int)identifier;	// 0x370ce909
// declared property setter: - (void)setActionShouldPickHighlightedValue:(BOOL)pickHighlightedValue;	// 0x370d0db9
// declared property setter: - (void)setDataSource:(id)source;	// 0x370d0d89
// declared property setter: - (void)setFMFActionButtonsDelegate:(id)delegate;	// 0x370cc755
// declared property setter: - (void)setHighlightedValuePerson:(void *)person;	// 0x370cc765
// declared property setter: - (void)setHighlightedValueProperty:(int)property;	// 0x370d0de9
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x370d0d69
- (void)shareContactButtonClicked:(id)clicked;	// 0x370ce9f1
- (BOOL)shouldShowAction:(id)action excludingProperty:(int)property excludedPropertyGroupContext:(void *)context;	// 0x370cdae5
- (BOOL)shouldShowActionForProperty:(int)property propertyGroupContext:(void *)context;	// 0x370cdac1
- (BOOL)shouldShowActionForProperty:(int)property propertyGroupContext:(void *)context assumeThatPropertyHasSection:(BOOL)section;	// 0x370cd999
- (BOOL)shouldShowAddToFavoritesAction;	// 0x370ce381
// declared property getter: - (id)styleProvider;	// 0x370d0d59
- (void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup entryType:(int)type;	// 0x370d0411
// declared property getter: - (id)tinyActionCell;	// 0x370d0749
@end
