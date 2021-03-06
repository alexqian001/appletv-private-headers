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
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x32ba8265; S=0x32ba808d; 
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x32ba87fd; S=0x32ba8361; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x32cf79c9; S=0x32cf79d9; 
@property(readonly, retain) UITableView *table;	// G=0x32cf791d; converted property
- (id)init;	// 0x32ba7c39
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x32cf79e9
- (void)_layoutCells;	// 0x32cf792d
- (void)_updateEditButton;	// 0x32ba80b9
// declared property getter: - (BOOL)allowsCustomizing;	// 0x32ba8265
- (void)dealloc;	// 0x32bb239d
- (void)loadView;	// 0x32cf79f5
// declared property getter: - (id)moreViewControllers;	// 0x32ba87fd
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x32cf79c9
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x32cf7b85
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x32ba808d
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x32ba8361
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x32cf79d9
- (id)tabBarItem;	// 0x32bc50fd
// converted property getter: - (id)table;	// 0x32cf791d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x32cf7ba9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x32cf7e79
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x32cf7b89
- (void)viewWillAppear:(BOOL)view;	// 0x32cf7b09
@end

