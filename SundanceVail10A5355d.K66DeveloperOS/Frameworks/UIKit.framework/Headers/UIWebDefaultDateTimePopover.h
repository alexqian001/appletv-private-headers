/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebFormControl.h"
#import "UIWebRotatingAccessoryPopover.h"

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover : UIWebRotatingAccessoryPopover <UIWebFormControl> {
	UIWebDateTimePopoverViewController *_webDateTimeViewController;	// 28 = 0x1c
}
@property(retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController;	// G=0x33c03781; S=0x33c03791; @synthesize
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;	// 0x33c0348d
// declared property getter: - (id)_webDateTimeViewController;	// 0x33c03781
- (void)clear:(id)clear;	// 0x33c0345d
- (void)controlBeginEditing;	// 0x33c03735
- (id)controlView;	// 0x33c03731
- (void)dealloc;	// 0x33c036ed
// declared property setter: - (void)set_webDateTimeViewController:(id)controller;	// 0x33c03791
@end
