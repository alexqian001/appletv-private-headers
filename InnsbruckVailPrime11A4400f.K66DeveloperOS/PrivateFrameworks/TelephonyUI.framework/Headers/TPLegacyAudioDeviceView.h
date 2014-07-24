/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIKit/UIView.h>
#import "TelephonyUI-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UITableView;

@interface TPLegacyAudioDeviceView : UIView <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_deviceTableView;	// 96 = 0x60
	UIView *_topBGView;	// 100 = 0x64
	UIView *_bottomBGView;	// 104 = 0x68
	UIView *_buttonView;	// 108 = 0x6c
	UIView *_tableView;	// 112 = 0x70
	UIView *_subbedView;	// 116 = 0x74
	id _delegate;	// 120 = 0x78
	BOOL _subbedOutTable;	// 124 = 0x7c
}
- (id)_activeImage;	// 0x329be519
- (CGRect)_frameForNumButtons:(int)numButtons;	// 0x329be5f9
- (CGRect)_frameForTable;	// 0x329be6d1
- (id)_muteButtonForFrame:(CGRect)frame;	// 0x329be789
- (id)_muteImage;	// 0x329be551
- (id)_selectedImage;	// 0x329be469
- (void)_setupButtons;	// 0x329beaa1
- (void)_setupSurroundingTableViews;	// 0x329bf7f9
- (void)_setupTable;	// 0x329bf161
- (id)_tableFooterImage;	// 0x329be5c1
- (id)_tableHeaderImage;	// 0x329be589
- (void)_takedownButtons;	// 0x329beeed
- (void)_takedownTable;	// 0x329bf7bd
- (id)_unselectedImage;	// 0x329be4c1
- (void)buttonPressed:(id)pressed;	// 0x329bef29
- (void)dealloc;	// 0x329be251
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x329be32d
- (void)muteButtonPressed:(id)pressed;	// 0x329bef7d
- (void)reloadData;	// 0x329bfd79
- (void)selectRow:(int)row;	// 0x329bfe39
- (void)setActiveRow:(int)row;	// 0x329bfc25
- (void)setDelegate:(id)delegate;	// 0x329bfe8d
- (void)showTable;	// 0x329bf0f9
- (void)suboutTable;	// 0x329beff5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x329bfa79
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x329bfb79
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x329bfa59
@end
