/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRDividerControl, NSString, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserHeaderControl : BRControl {
@private
	BRTextControl *_titleControl;	// 48 = 0x30
	BRTextControl *_rightJustifiedTextControl;	// 52 = 0x34
	BRTextControl *_subtitleControl;	// 56 = 0x38
	BRImageControl *_icon;	// 60 = 0x3c
	BRDividerControl *_divider;	// 64 = 0x40
	NSString *_title;	// 68 = 0x44
	long _count;	// 72 = 0x48
	BOOL _displaysCount;	// 76 = 0x4c
	float _iconVerticalOffset;	// 80 = 0x50
}
@property(assign) long count;	// G=0x32a44cd1; S=0x32a44c81; converted property
@property(assign) BOOL displaysCount;	// G=0x32a44d21; S=0x32a44ce1; converted property
@property(assign) float dividerBrightness;	// G=0x32a44e71; S=0x32a44e51; converted property
@property(retain) BRImageControl *icon;	// G=0x32a44e01; S=0x32a44dc5; converted property
@property(assign) float iconVerticalOffset;	// G=0x32a44e41; S=0x32a44e21; converted property
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x32a44c49; S=0x32a44bed; 
@property(retain) id subtitle;	// G=0x32a44d8d; S=0x32a44d31; converted property
@property(retain) NSString *title;	// G=0x32a44bdd; S=0x32a44a21; converted property
- (id)init;	// 0x32a44815
- (id)accessibilityLabel;	// 0x32a452c9
// converted property getter: - (long)count;	// 0x32a44cd1
- (void)dealloc;	// 0x32a44985
// converted property getter: - (BOOL)displaysCount;	// 0x32a44d21
// converted property getter: - (float)dividerBrightness;	// 0x32a44e71
// converted property getter: - (id)icon;	// 0x32a44e01
// converted property getter: - (float)iconVerticalOffset;	// 0x32a44e41
- (void)layoutSubcontrols;	// 0x32a44f49
- (id)photoBrowserHeader;	// 0x32a447cd
// declared property getter: - (id)rightJustifiedText;	// 0x32a44c49
// converted property setter: - (void)setCount:(long)count;	// 0x32a44c81
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x32a44ce1
// converted property setter: - (void)setDividerBrightness:(float)brightness;	// 0x32a44e51
// converted property setter: - (void)setIcon:(id)icon;	// 0x32a44dc5
// converted property setter: - (void)setIconVerticalOffset:(float)offset;	// 0x32a44e21
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x32a44bed
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32a44d31
// converted property setter: - (void)setTitle:(id)title;	// 0x32a44a21
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32a44e91
// converted property getter: - (id)subtitle;	// 0x32a44d8d
// converted property getter: - (id)title;	// 0x32a44bdd
@end
