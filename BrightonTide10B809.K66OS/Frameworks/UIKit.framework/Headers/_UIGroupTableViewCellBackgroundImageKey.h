/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
	BOOL _opaque;	// 4 = 0x4
	BOOL _selected;	// 5 = 0x5
	CGSize _size;	// 8 = 0x8
	UIColor *_backgroundColor;	// 16 = 0x10
	UIColor *_sectionBorderColor;	// 20 = 0x14
	UIColor *_separatorColor;	// 24 = 0x18
	UIColor *_topShadowColor;	// 28 = 0x1c
	UIColor *_bottomShadowColor;	// 32 = 0x20
	UIColor *_fillColor;	// 36 = 0x24
	UIColor *_selectionColor;	// 40 = 0x28
	float _leftPhase;	// 44 = 0x2c
	float _rightPhase;	// 48 = 0x30
	int _sectionLocation;	// 52 = 0x34
	int _selectionStyle;	// 56 = 0x38
}
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x32bc3571; S=0x32bc3491; @synthesize=_backgroundColor
@property(retain, nonatomic) UIColor *bottomShadowColor;	// G=0x32bc4219; S=0x32bc3561; @synthesize=_bottomShadowColor
@property(retain, nonatomic) UIColor *fillColor;	// G=0x32bc42e9; S=0x32bc36c1; @synthesize=_fillColor
@property(assign, nonatomic) float leftPhase;	// G=0x32db9cd1; S=0x32bc36f1; @synthesize=_leftPhase
@property(assign, nonatomic) BOOL opaque;	// G=0x32bc42d5; S=0x32bc3585; @synthesize=_opaque
@property(assign, nonatomic) float rightPhase;	// G=0x32db9ce1; S=0x32bc3701; @synthesize=_rightPhase
@property(retain, nonatomic) UIColor *sectionBorderColor;	// G=0x32bc42f9; S=0x32bc3609; @synthesize=_sectionBorderColor
@property(assign, nonatomic) int sectionLocation;	// G=0x32bc4229; S=0x32bc3711; @synthesize=_sectionLocation
@property(assign, nonatomic) BOOL selected;	// G=0x32bc423d; S=0x32bc3395; @synthesize=_selected
@property(retain, nonatomic) UIColor *selectionColor;	// G=0x32db9cc1; S=0x32bc36e1; @synthesize=_selectionColor
@property(assign, nonatomic) int selectionStyle;	// G=0x32db9cf1; S=0x32bc3721; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x32c90f51; S=0x32bc3619; @synthesize=_separatorColor
@property(assign, nonatomic) CGSize size;	// G=0x32bc41fd; S=0x32bc33a5; @synthesize=_size
@property(retain, nonatomic) UIColor *topShadowColor;	// G=0x32bc4381; S=0x32bc3629; @synthesize=_topShadowColor
// declared property getter: - (id)backgroundColor;	// 0x32bc3571
// declared property getter: - (id)bottomShadowColor;	// 0x32bc4219
- (id)copyWithZone:(NSZone *)zone;	// 0x32bc4391
- (void)dealloc;	// 0x32bc4769
- (id)description;	// 0x32db9aa1
// declared property getter: - (id)fillColor;	// 0x32bc42e9
- (unsigned)hash;	// 0x32bc43a1
- (BOOL)isEqual:(id)equal;	// 0x32bc4529
// declared property getter: - (float)leftPhase;	// 0x32db9cd1
// declared property getter: - (BOOL)opaque;	// 0x32bc42d5
// declared property getter: - (float)rightPhase;	// 0x32db9ce1
// declared property getter: - (id)sectionBorderColor;	// 0x32bc42f9
// declared property getter: - (int)sectionLocation;	// 0x32bc4229
// declared property getter: - (BOOL)selected;	// 0x32bc423d
// declared property getter: - (id)selectionColor;	// 0x32db9cc1
// declared property getter: - (int)selectionStyle;	// 0x32db9cf1
// declared property getter: - (id)separatorColor;	// 0x32c90f51
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x32bc3491
// declared property setter: - (void)setBottomShadowColor:(id)color;	// 0x32bc3561
// declared property setter: - (void)setFillColor:(id)color;	// 0x32bc36c1
// declared property setter: - (void)setLeftPhase:(float)phase;	// 0x32bc36f1
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x32bc3585
// declared property setter: - (void)setRightPhase:(float)phase;	// 0x32bc3701
// declared property setter: - (void)setSectionBorderColor:(id)color;	// 0x32bc3609
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x32bc3711
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x32bc3395
// declared property setter: - (void)setSelectionColor:(id)color;	// 0x32bc36e1
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x32bc3721
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x32bc3619
// declared property setter: - (void)setSize:(CGSize)size;	// 0x32bc33a5
// declared property setter: - (void)setTopShadowColor:(id)color;	// 0x32bc3629
// declared property getter: - (CGSize)size;	// 0x32bc41fd
// declared property getter: - (id)topShadowColor;	// 0x32bc4381
@end
