/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRDetailedMediaControl.h"

@class NSArray, BRPosterControl, ATVImageHeaderView;

__attribute__((visibility("hidden")))
@interface ATVDetailedMediaWithImageHeaderControl : BRDetailedMediaControl {
	ATVImageHeaderView *_imageHeaderView;	// 124 = 0x7c
	BRPosterControl *_posterControl;	// 128 = 0x80
	NSArray *_ratingsControls;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) ATVImageHeaderView *imageHeaderView;	// G=0x18e0c5; @synthesize=_imageHeaderView
@property(retain, nonatomic) BRPosterControl *posterControl;	// G=0x18e0d5; S=0x18e0e5; @synthesize=_posterControl
@property(copy, nonatomic) NSArray *ratingsControls;	// G=0x18e10d; S=0x18e121; @synthesize=_ratingsControls
+ (BOOL)_wantsCoverArt;	// 0x18e0c1
- (id)init;	// 0x18d40d
- (void).cxx_destruct;	// 0x18e131
// declared property getter: - (id)imageHeaderView;	// 0x18e0c5
- (void)layoutSubcontrols;	// 0x18dab5
// declared property getter: - (id)posterControl;	// 0x18e0d5
// declared property getter: - (id)ratingsControls;	// 0x18e10d
- (void)setDetailedMetadataControl:(id)control;	// 0x18d5a9
- (void)setExpiryText:(id)text;	// 0x18d7d9
- (void)setImageProxy:(id)proxy;	// 0x18d8cd
// declared property setter: - (void)setPosterControl:(id)control;	// 0x18e0e5
// declared property setter: - (void)setRatingsControls:(id)controls;	// 0x18e121
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x18d91d
@end
