/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRImage, NSString, BRTableView, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
	BRImage *_backgroundImage;	// 84 = 0x54
	BRTextControl *_titleControl;	// 88 = 0x58
	BRImage *_overlayImage;	// 92 = 0x5c
	BRReflectionControl *_reflectionControl;	// 96 = 0x60
	BRTableView *_tableView;	// 100 = 0x64
	float _headerHeight;	// 104 = 0x68
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x117f19; S=0x117f29; 
@property(assign, nonatomic) float headerHeight;	// G=0x118361; S=0x118371; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0x118381; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0x117ec5; S=0x117e79; 
- (id)init;	// 0x117c85
- (id)accessibilityLabel;	// 0x118319
// declared property getter: - (id)backgroundImage;	// 0x117f19
- (void)dealloc;	// 0x117dd9
- (void)drawRect:(CGRect)rect;	// 0x117fc5
// declared property getter: - (float)headerHeight;	// 0x118361
- (BOOL)isAccessibilityElement;	// 0x118315
- (void)layoutSubcontrols;	// 0x1180bd
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x117f29
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x118371
// declared property setter: - (void)setTitle:(id)title;	// 0x117e79
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x117efd
// declared property getter: - (id)tableView;	// 0x118381
// declared property getter: - (id)title;	// 0x117ec5
@end
