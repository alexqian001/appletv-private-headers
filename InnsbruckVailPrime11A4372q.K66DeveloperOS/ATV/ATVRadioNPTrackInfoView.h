/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVImage, BRImageControl, ATVDataItem, BRTextControl, BRAutoScrollingTextControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVRadioNPTrackInfoView : BRControl {
	BOOL _leftArrowState;	// 84 = 0x54
	ATVDataItem *_radioTrack;	// 88 = 0x58
	BRImageControl *_leftArrow;	// 92 = 0x5c
	ATVImage *_leftArrowActiveImage;	// 96 = 0x60
	ATVImage *_leftArrowInactiveImage;	// 100 = 0x64
	BRImageControl *_rightArrow;	// 104 = 0x68
	BRAutoScrollingTextControl *_titleControl;	// 108 = 0x6c
	BRTextControl *_subTitleControl;	// 112 = 0x70
	NSDictionary *_titleAttributes;	// 116 = 0x74
	NSDictionary *_subTitleAttributes;	// 120 = 0x78
}
@property(retain, nonatomic) BRImageControl *leftArrow;	// G=0x94905; S=0x94915; @synthesize=_leftArrow
@property(retain, nonatomic) ATVImage *leftArrowActiveImage;	// G=0x9493d; S=0x9494d; @synthesize=_leftArrowActiveImage
@property(retain, nonatomic) ATVImage *leftArrowInactiveImage;	// G=0x94975; S=0x94985; @synthesize=_leftArrowInactiveImage
@property(assign, nonatomic) BOOL leftArrowState;	// G=0x948f5; S=0x94255; @synthesize=_leftArrowState
@property(retain, nonatomic) ATVDataItem *radioTrack;	// G=0x948e5; S=0x94081; @synthesize=_radioTrack
@property(retain, nonatomic) BRImageControl *rightArrow;	// G=0x949ad; S=0x949bd; @synthesize=_rightArrow
@property(retain, nonatomic) NSDictionary *subTitleAttributes;	// G=0x94a8d; S=0x94a9d; @synthesize=_subTitleAttributes
@property(retain, nonatomic) BRTextControl *subTitleControl;	// G=0x94a1d; S=0x94a2d; @synthesize=_subTitleControl
@property(retain, nonatomic) NSDictionary *titleAttributes;	// G=0x94a55; S=0x94a65; @synthesize=_titleAttributes
@property(retain, nonatomic) BRAutoScrollingTextControl *titleControl;	// G=0x949e5; S=0x949f5; @synthesize=_titleControl
- (id)init;	// 0x93cf9
- (void).cxx_destruct;	// 0x94ac5
- (void)layoutSubcontrols;	// 0x942e9
// declared property getter: - (id)leftArrow;	// 0x94905
// declared property getter: - (id)leftArrowActiveImage;	// 0x9493d
// declared property getter: - (id)leftArrowInactiveImage;	// 0x94975
// declared property getter: - (BOOL)leftArrowState;	// 0x948f5
// declared property getter: - (id)radioTrack;	// 0x948e5
// declared property getter: - (id)rightArrow;	// 0x949ad
// declared property setter: - (void)setLeftArrow:(id)arrow;	// 0x94915
// declared property setter: - (void)setLeftArrowActiveImage:(id)image;	// 0x9494d
// declared property setter: - (void)setLeftArrowInactiveImage:(id)image;	// 0x94985
// declared property setter: - (void)setLeftArrowState:(BOOL)state;	// 0x94255
// declared property setter: - (void)setRadioTrack:(id)track;	// 0x94081
// declared property setter: - (void)setRightArrow:(id)arrow;	// 0x949bd
// declared property setter: - (void)setSubTitleAttributes:(id)attributes;	// 0x94a9d
// declared property setter: - (void)setSubTitleControl:(id)control;	// 0x94a2d
// declared property setter: - (void)setTitleAttributes:(id)attributes;	// 0x94a65
// declared property setter: - (void)setTitleControl:(id)control;	// 0x949f5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x94715
// declared property getter: - (id)subTitleAttributes;	// 0x94a8d
// declared property getter: - (id)subTitleControl;	// 0x94a1d
// declared property getter: - (id)titleAttributes;	// 0x94a55
// declared property getter: - (id)titleControl;	// 0x949e5
@end
