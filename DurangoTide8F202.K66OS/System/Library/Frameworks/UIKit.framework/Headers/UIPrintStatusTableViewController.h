/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKit-Structs.h"

@class PKJob, NSDateFormatter, UIButton;

__attribute__((visibility("hidden")))
@interface UIPrintStatusTableViewController : UITableViewController {
@private
	PKJob *_printJob;	// 144 = 0x90
	UIButton *_cancelButton;	// 148 = 0x94
	NSDateFormatter *_sentFormatter;	// 152 = 0x98
}
- (id)initWithJob:(id)job;	// 0x30868369
- (void)cancelPrinting;	// 0x30868109
- (void)dealloc;	// 0x308682d5
- (void)loadView;	// 0x30868c1d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30867f11
- (void)popToJobsView;	// 0x308681b9
- (void)setupCancelButton;	// 0x30869459
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30868275
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30868d19
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30867f15
- (void)updateCancelButton;	// 0x308681f9
- (void)updateJobInfo;	// 0x30867f19
- (void)viewWillAppear:(BOOL)view;	// 0x30868049
- (void)viewWillDisappear:(BOOL)view;	// 0x30867fad
@end
