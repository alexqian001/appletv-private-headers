/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class BRHeaderControl, BRImageControl, BRTextControl, BRAlignmentAdjustingTextControl;

__attribute__((visibility("hidden")))
@interface BRAlertController : BRController {
	id _eventDelegate;	// 100 = 0x64
	SEL _eventSelector;	// 104 = 0x68
	BRHeaderControl *_header;	// 108 = 0x6c
	int _type;	// 112 = 0x70
	BRTextControl *_primary;	// 116 = 0x74
	BRAlignmentAdjustingTextControl *_secondary;	// 120 = 0x78
	BRAlignmentAdjustingTextControl *_footer;	// 124 = 0x7c
	BRImageControl *_image;	// 128 = 0x80
}
@property(retain) id footerText;	// G=0x2bd065; S=0x2bd015; converted property
@property(retain) id primaryText;	// G=0x2bcead; S=0x2bcdc5; converted property
@property(retain) id secondaryText;	// G=0x2bcf45; S=0x2bcef5; converted property
+ (id)alertForError:(id)error;	// 0x2bc48d
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x2bc52d
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x2bc579
- (id)_imageForType:(int)type;	// 0x2bd1f9
- (id)accessibilityLabel;	// 0x2bd191
- (id)axSelectedItemText;	// 0x2bd249
- (id)axTitleText;	// 0x2bd239
- (BOOL)brEventAction:(id)action;	// 0x2bcbcd
- (void)dealloc;	// 0x2bc705
// converted property getter: - (id)footerText;	// 0x2bd065
- (id)footerTextControl;	// 0x2bd09d
- (BOOL)isAccessibilityElement;	// 0x2bd18d
- (void)layoutSubcontrols;	// 0x2bc7b9
// converted property getter: - (id)primaryText;	// 0x2bcead
- (id)primaryTextControl;	// 0x2bcee5
- (BOOL)recreateOnReselect;	// 0x2bcbc9
// converted property getter: - (id)secondaryText;	// 0x2bcf45
- (id)secondaryTextControl;	// 0x2bcf7d
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x2bd135
// converted property setter: - (void)setFooterText:(id)text;	// 0x2bd015
- (void)setFooterText:(id)text withAttributes:(id)attributes;	// 0x2bd0ad
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x2bcdc5
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x2bce15
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x2bcef5
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x2bcf8d
- (void)setTitle:(id)title;	// 0x2bcd85
- (void)wasPushed;	// 0x2bcd25
@end

