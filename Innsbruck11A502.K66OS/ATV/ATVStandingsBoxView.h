/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, NSString, BRTextControl, BRTableView, ATVImage;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
	ATVImage *_backgroundImage;	// 84 = 0x54
	BRTextControl *_titleControl;	// 88 = 0x58
	ATVImage *_overlayImage;	// 92 = 0x5c
	BRReflectionControl *_reflectionControl;	// 96 = 0x60
	BRTableView *_tableView;	// 100 = 0x64
	float _headerHeight;	// 104 = 0x68
}
@property(retain, nonatomic) ATVImage *backgroundImage;	// G=0xbea79; S=0xbea89; 
@property(assign, nonatomic) float headerHeight;	// G=0xbeedd; S=0xbeeed; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0xbeefd; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0xbea25; S=0xbe9d9; 
- (id)init;	// 0xbe7e5
- (id)accessibilityLabel;	// 0xbee95
// declared property getter: - (id)backgroundImage;	// 0xbea79
- (void)dealloc;	// 0xbe939
- (void)drawRect:(CGRect)rect;	// 0xbeb25
// declared property getter: - (float)headerHeight;	// 0xbeedd
- (BOOL)isAccessibilityElement;	// 0xbee91
- (void)layoutSubcontrols;	// 0xbec21
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0xbea89
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0xbeeed
// declared property setter: - (void)setTitle:(id)title;	// 0xbe9d9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xbea5d
// declared property getter: - (id)tableView;	// 0xbeefd
// declared property getter: - (id)title;	// 0xbea25
@end

