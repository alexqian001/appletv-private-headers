/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UIViewController.h"
#import "UITableViewDataSource.h"

@class UIMoreListCellLayoutManager, UITableView, UIBarButtonItem, NSArray;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_table;	// 196 = 0xc4
	BOOL _allowsCustomizing;	// 200 = 0xc8
	NSArray *_moreViewControllers;	// 204 = 0xcc
	UIMoreListCellLayoutManager *_layoutManager;	// 208 = 0xd0
	UIBarButtonItem *_moreEditButtonItem;	// 212 = 0xd4
	BOOL _moreViewControllersChanged;	// 216 = 0xd8
}
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x302d8abd; S=0x302d88e5; 
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x302d9055; S=0x302d8bb9; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x30427501; S=0x30427511; 
@property(readonly, retain) UITableView *table;	// G=0x30427455; converted property
- (id)init;	// 0x302d8491
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x30427521
- (void)_layoutCells;	// 0x30427465
- (void)_updateEditButton;	// 0x302d8911
// declared property getter: - (BOOL)allowsCustomizing;	// 0x302d8abd
- (void)dealloc;	// 0x302e2bad
- (void)loadView;	// 0x3042752d
// declared property getter: - (id)moreViewControllers;	// 0x302d9055
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x30427501
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x304276bd
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x302d88e5
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x302d8bb9
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x30427511
- (id)tabBarItem;	// 0x302f5919
// converted property getter: - (id)table;	// 0x30427455
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x304276e1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x304279b1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x304276c1
- (void)viewWillAppear:(BOOL)view;	// 0x30427641
@end

