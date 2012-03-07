/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"


__attribute__((visibility("hidden")))
@interface UISnapshotModalViewController : UIViewController {
@private
	int _interfaceOrientation;	// 132 = 0x84
	UIViewController *_disappearingViewController;	// 136 = 0x88
}
@property(retain, nonatomic) UIViewController *disappearingViewController;	// G=0x307133fd; S=0x3071403d; @synthesize=_disappearingViewController
- (id)initWithInterfaceOrientation:(int)interfaceOrientation;	// 0x307134ed
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x307133e5
- (void)dealloc;	// 0x30713ff5
// declared property getter: - (id)disappearingViewController;	// 0x307133fd
// declared property setter: - (void)setDisappearingViewController:(id)controller;	// 0x3071403d
- (void)viewDidDisappear:(BOOL)view;	// 0x30713f5d
- (void)viewWillDisappear:(BOOL)view;	// 0x30713fa9
@end
