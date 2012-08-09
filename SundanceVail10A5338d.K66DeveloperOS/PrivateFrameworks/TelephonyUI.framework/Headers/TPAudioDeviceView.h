/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "UITableViewDelegate.h"
#import <UIView.h> // Unknown library
#import "UITableViewDataSource.h"

@class UITableView;

@interface TPAudioDeviceView : UIView <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_deviceTableView;	// 84 = 0x54
	UIView *_topBGView;	// 88 = 0x58
	UIView *_bottomBGView;	// 92 = 0x5c
	UIView *_buttonView;	// 96 = 0x60
	UIView *_tableView;	// 100 = 0x64
	UIView *_subbedView;	// 104 = 0x68
	id _delegate;	// 108 = 0x6c
	BOOL _subbedOutTable;	// 112 = 0x70
}
- (id)_activeImage;	// 0x32ae0a6d
- (CGRect)_frameForNumButtons:(int)numButtons;	// 0x32ae0b4d
- (CGRect)_frameForTable;	// 0x32ae0c2d
- (id)_muteButtonForFrame:(CGRect)frame;	// 0x32ae0ce9
- (id)_muteImage;	// 0x32ae0aa5
- (id)_selectedImage;	// 0x32ae09bd
- (void)_setupButtons;	// 0x32ae0fa1
- (void)_setupSurroundingTableViews;	// 0x32ae1c91
- (void)_setupTable;	// 0x32ae15e9
- (id)_tableFooterImage;	// 0x32ae0b15
- (id)_tableHeaderImage;	// 0x32ae0add
- (void)_takedownButtons;	// 0x32ae1379
- (void)_takedownTable;	// 0x32ae1c51
- (id)_unselectedImage;	// 0x32ae0a15
- (void)buttonPressed:(id)pressed;	// 0x32ae13b5
- (void)dealloc;	// 0x32ae07a9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32ae0885
- (void)muteButtonPressed:(id)pressed;	// 0x32ae1409
- (void)reloadData;	// 0x32ae2221
- (void)selectRow:(int)row;	// 0x32ae22e5
- (void)setActiveRow:(int)row;	// 0x32ae20cd
- (void)setDelegate:(id)delegate;	// 0x32ae2339
- (void)showTable;	// 0x32ae157d
- (void)suboutTable;	// 0x32ae1481
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x32ae1f21
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x32ae2021
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x32ae1f01
@end
