/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class UIPopoverController;
@protocol UIPrintStatusDelegate;

@interface UIPrintStatusViewController : UINavigationController {
	UIPopoverController *_poverController;	// 288 = 0x120
	id<UIPrintStatusDelegate> _printStatusDelegate;	// 292 = 0x124
}
@property(assign, nonatomic) id<UIPrintStatusDelegate> printStatusDelegate;	// G=0x3058a045; S=0x3058a055; @synthesize=_printStatusDelegate
- (void)dealloc;	// 0x30589c79
- (void)dismissAnimated:(BOOL)animated;	// 0x30589f91
- (void)jobDidCancel;	// 0x30589ffd
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30589fb1
- (void)presentPrintStatusFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x30589ee9
// declared property getter: - (id)printStatusDelegate;	// 0x3058a045
- (id)printStatusView;	// 0x30589eb5
// declared property setter: - (void)setPrintStatusDelegate:(id)delegate;	// 0x3058a055
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30589cc5
- (void)viewDidLoad;	// 0x30589d2d
- (void)viewWillAppear:(BOOL)view;	// 0x30589dd9
@end

