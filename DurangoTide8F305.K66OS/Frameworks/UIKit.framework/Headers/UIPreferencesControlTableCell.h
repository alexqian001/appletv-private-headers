/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPreferencesTableCell.h"

@class UIControl;

@interface UIPreferencesControlTableCell : UIPreferencesTableCell {
@private
	UIControl *_control;	// 104 = 0x68
}
@property(retain) UIControl *control;	// G=0x32123e7d; S=0x32123f09; converted property
- (void)_controlClicked:(id)clicked;	// 0x32123e8d
// converted property getter: - (id)control;	// 0x32123e7d
// converted property setter: - (void)setControl:(id)control;	// 0x32123f09
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x32123fdd
@end
