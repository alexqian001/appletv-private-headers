/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIViewController.h"

@class NSArray, UIBarButtonItem, UITableView, UIMoreListCellLayoutManager;

__attribute__((visibility("hidden")))
@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	UITableView *_table;	// 156 = 0x9c
	BOOL _allowsCustomizing;	// 160 = 0xa0
	NSArray *_moreViewControllers;	// 164 = 0xa4
	UIMoreListCellLayoutManager *_layoutManager;	// 168 = 0xa8
	UIBarButtonItem *_moreEditButtonItem;	// 172 = 0xac
	BOOL _moreViewControllersChanged;	// 176 = 0xb0
}
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x300de779; S=0x300575f1; 
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x300df235; S=0x300df0e1; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x30216279; S=0x30216289; 
@property(readonly, retain) UITableView *table;	// G=0x302161cd; converted property
- (id)init;	// 0x300de3f1
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x30216299
- (void)_layoutCells;	// 0x302161dd
- (void)_updateEditButton;	// 0x300de5c9
// declared property getter: - (BOOL)allowsCustomizing;	// 0x300de779
- (void)dealloc;	// 0x300f596d
- (void)loadView;	// 0x302162a5
// declared property getter: - (id)moreViewControllers;	// 0x300df235
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x30216279
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30216449
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x300575f1
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x300df0e1
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x30216289
- (id)tabBarItem;	// 0x300df175
// converted property getter: - (id)table;	// 0x302161cd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3021646d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30216709
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3021644d
- (void)viewWillAppear:(BOOL)view;	// 0x302163cd
@end
