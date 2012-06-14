/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class NSArray, UIPrintingMessageView;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobsViewController : UITableViewController {
@private
	NSArray *_jobs;	// 172 = 0xac
	BOOL _autoPush;	// 176 = 0xb0
	UIPrintingMessageView *_noJobsView;	// 180 = 0xb4
}
- (id)init;	// 0x359d74c9
- (CGSize)contentSizeForViewInPopover;	// 0x359d763d
- (void)dealloc;	// 0x359d753d
- (void)handleJobListDidChange;	// 0x359d8059
- (void)loadView;	// 0x359d75cd
- (void)pushJob:(id)job animated:(BOOL)animated;	// 0x359d7651
- (void)pushSingleJobAnimated:(BOOL)animated;	// 0x359d7719
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x359d8355
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x359d83e5
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x359d8515
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x359d84c1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x359d83c5
- (void)updateForJobCountChange;	// 0x359d775d
- (void)updateJobInfo:(id)info;	// 0x359d7b69
- (void)updateTableViewCell:(id)cell withJob:(id)job;	// 0x359d79bd
- (void)viewWillAppear:(BOOL)view;	// 0x359d81e9
- (void)viewWillDisappear:(BOOL)view;	// 0x359d82e5
- (id)visibleJobs;	// 0x359d78c1
- (void)willReappear;	// 0x359d8181
@end
