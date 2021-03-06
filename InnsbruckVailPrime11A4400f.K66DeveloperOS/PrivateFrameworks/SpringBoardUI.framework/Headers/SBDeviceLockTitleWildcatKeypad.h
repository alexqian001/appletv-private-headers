/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockTitle.h"

@class UILabel;

@interface SBDeviceLockTitleWildcatKeypad : SBDeviceLockTitle {
	BOOL _highlighted;	// 104 = 0x68
	UILabel *_titleLabel;	// 108 = 0x6c
	UILabel *_subtitleLabel;	// 112 = 0x70
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x327826a5; S=0x327826b5; converted property
@property(retain) id subtitle;	// G=0x327827ad; S=0x327827cd; converted property
@property(retain) id title;	// G=0x3278276d; S=0x3278278d; converted property
- (id)_backgroundImage;	// 0x3278261d
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x32782111
- (void)blinkSubtitle;	// 0x32782809
- (void)dealloc;	// 0x32782505
// converted property getter: - (BOOL)isHighlighted;	// 0x327826a5
- (void)layoutSubviews;	// 0x32782569
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x327826b5
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x327827cd
// converted property setter: - (void)setTitle:(id)title;	// 0x3278278d
// converted property getter: - (id)subtitle;	// 0x327827ad
// converted property getter: - (id)title;	// 0x3278276d
@end

