/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIOpenInTableViewController : UITableViewController {
@private
	UIDocumentInteractionController *_documentInteractionController;	// 172 = 0xac
}
- (id)initWithDocumentInteractionController:(id)documentInteractionController;	// 0x33c99d3d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33c99de9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33c99fa5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33c99db1
@end

