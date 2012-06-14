/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintingMessageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobsViewController : UITableViewController {
@private
	NSArray *_jobs;	// 172 = 0xac
	BOOL _autoPush;	// 176 = 0xb0
	UIPrintingMessageView *_noJobsView;	// 180 = 0xb4
}
- (id)init;	// 0x332237b9
- (CGSize)contentSizeForViewInPopover;	// 0x3322392d
- (void)dealloc;	// 0x3322382d
- (void)handleJobListDidChange;	// 0x33224349
- (void)loadView;	// 0x332238bd
- (void)pushJob:(id)job animated:(BOOL)animated;	// 0x33223941
- (void)pushSingleJobAnimated:(BOOL)animated;	// 0x33223a09
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33224645
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x332246d5
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x33224805
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x332247b1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x332246b5
- (void)updateForJobCountChange;	// 0x33223a4d
- (void)updateJobInfo:(id)info;	// 0x33223e59
- (void)updateTableViewCell:(id)cell withJob:(id)job;	// 0x33223cad
- (void)viewWillAppear:(BOOL)view;	// 0x332244d9
- (void)viewWillDisappear:(BOOL)view;	// 0x332245d5
- (id)visibleJobs;	// 0x33223bb1
- (void)willReappear;	// 0x33224471
@end
