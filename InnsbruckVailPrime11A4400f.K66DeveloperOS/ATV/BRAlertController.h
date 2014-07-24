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
@property(retain) id footerText;	// G=0x314671; S=0x314621; converted property
@property(retain) id primaryText;	// G=0x3144bd; S=0x3143d9; converted property
@property(retain) id secondaryText;	// G=0x314555; S=0x314505; converted property
+ (id)alertForError:(id)error;	// 0x313ab1
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x313b3d
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x313b89
- (id)_imageForType:(int)type;	// 0x314801
- (id)accessibilityLabel;	// 0x314799
- (id)axSelectedItemText;	// 0x314851
- (id)axTitleText;	// 0x314841
- (BOOL)brEventAction:(id)action;	// 0x3141e1
- (void)dealloc;	// 0x313d15
// converted property getter: - (id)footerText;	// 0x314671
- (id)footerTextControl;	// 0x3146a9
- (BOOL)isAccessibilityElement;	// 0x314795
- (void)layoutSubcontrols;	// 0x313dc9
// converted property getter: - (id)primaryText;	// 0x3144bd
- (id)primaryTextControl;	// 0x3144f5
- (BOOL)recreateOnReselect;	// 0x3141dd
// converted property getter: - (id)secondaryText;	// 0x314555
- (id)secondaryTextControl;	// 0x31458d
- (void)setEventDelegate:(id)delegate selector:(SEL)selector;	// 0x31473d
// converted property setter: - (void)setFooterText:(id)text;	// 0x314621
- (void)setFooterText:(id)text withAttributes:(id)attributes;	// 0x3146b9
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x3143d9
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x314429
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x314505
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x31459d
- (void)setTitle:(id)title;	// 0x314399
- (void)wasPushed;	// 0x314339
@end
