/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMediaShelfViewCell.h"
#import "BRControl.h"
#import "BRContainerViewCell.h"

@class BRImageControl, BRAutoScrollingTextControl, BRPosterControl, ATVDataCollection, BRTextControl, ATVImage;

__attribute__((visibility("hidden")))
@interface ATVRadioStationControl : BRControl <BRContainerViewCell, BRMediaShelfViewCell> {
	ATVDataCollection *_radioStation;	// 84 = 0x54
	ATVImage *_stationPlaceholderImage;	// 88 = 0x58
	BRPosterControl *_visiblePosterControl;	// 92 = 0x5c
	BRTextControl *_stationName;	// 96 = 0x60
	BRAutoScrollingTextControl *_stationNameMarquee;	// 100 = 0x64
	BRImageControl *_speakerView;	// 104 = 0x68
	BRTextControl *_sharedSubscribedTextView;	// 108 = 0x6c
	BRImageControl *_sharedImageView;	// 112 = 0x70
	double _sponsoredStationTimeStamp;	// 116 = 0x74
}
@property(retain, nonatomic) ATVDataCollection *radioStation;	// G=0x7db15; S=0x7db25; @synthesize=_radioStation
@property(retain, nonatomic) BRImageControl *sharedImageView;	// G=0x7dc49; S=0x7dc59; @synthesize=_sharedImageView
@property(retain, nonatomic) BRTextControl *sharedSubscribedTextView;	// G=0x7dc11; S=0x7dc21; @synthesize=_sharedSubscribedTextView
@property(retain, nonatomic) BRImageControl *speakerView;	// G=0x7dc01; S=0x7c971; @synthesize=_speakerView
@property(assign, nonatomic) double sponsoredStationTimeStamp;	// G=0x7dc81; S=0x7dc99; @synthesize=_sponsoredStationTimeStamp
@property(retain, nonatomic) BRTextControl *stationName;	// G=0x7db91; S=0x7dba1; @synthesize=_stationName
@property(retain, nonatomic) BRAutoScrollingTextControl *stationNameMarquee;	// G=0x7dbc9; S=0x7dbd9; @synthesize=_stationNameMarquee
@property(assign, nonatomic) __weak ATVImage *stationPlaceholderImage;	// G=0x7db4d; S=0x7db6d; @synthesize=_stationPlaceholderImage
@property(retain, nonatomic) BRPosterControl *visiblePosterControl;	// G=0x7db81; S=0x7c90d; @synthesize=_visiblePosterControl
- (id)initWithStation:(id)station;	// 0x7b91d
- (void).cxx_destruct;	// 0x7dcad
- (id)_attributedStationName;	// 0x7ba29
- (BOOL)_isCurrentPlayingStation;	// 0x7d3c1
- (id)_posterWithImageProxy:(id)imageProxy subTitle:(id)title;	// 0x7d751
- (id)_posterWithTrack:(id)track;	// 0x7d531
- (void)_updateSubviews;	// 0x7c445
- (id)accessibilityLabel;	// 0x7d1d5
- (id)accessibilityRangeString;	// 0x7d379
- (void)cancelContainerViewLoad;	// 0x7d93d
- (void)controlWasActivated;	// 0x7bbd5
- (void)controlWasDeactivated;	// 0x7c365
- (void)controlWasFocused;	// 0x7c88d
- (void)controlWasUnfocused;	// 0x7c8cd
- (CGRect)focusCursorFrame;	// 0x7ca95
- (void)hideTextLayers;	// 0x7da21
- (BOOL)isAccessibilityElement;	// 0x7d1d1
- (void)layoutSubcontrols;	// 0x7cb95
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x7d8ed
// declared property getter: - (id)radioStation;	// 0x7db15
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x7d9ad
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x7d9e5
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x7dad9
// declared property setter: - (void)setRadioStation:(id)station;	// 0x7db25
- (void)setReadyToDisplay;	// 0x7d975
// declared property setter: - (void)setSharedImageView:(id)view;	// 0x7dc59
// declared property setter: - (void)setSharedSubscribedTextView:(id)view;	// 0x7dc21
// declared property setter: - (void)setSpeakerView:(id)view;	// 0x7c971
// declared property setter: - (void)setSponsoredStationTimeStamp:(double)stamp;	// 0x7dc99
// declared property setter: - (void)setStationName:(id)name;	// 0x7dba1
// declared property setter: - (void)setStationNameMarquee:(id)marquee;	// 0x7dbd9
// declared property setter: - (void)setStationPlaceholderImage:(id)image;	// 0x7db6d
// declared property setter: - (void)setVisiblePosterControl:(id)control;	// 0x7c90d
// declared property getter: - (id)sharedImageView;	// 0x7dc49
// declared property getter: - (id)sharedSubscribedTextView;	// 0x7dc11
// declared property getter: - (id)speakerView;	// 0x7dc01
// declared property getter: - (double)sponsoredStationTimeStamp;	// 0x7dc81
// declared property getter: - (id)stationName;	// 0x7db91
// declared property getter: - (id)stationNameMarquee;	// 0x7dbc9
// declared property getter: - (id)stationPlaceholderImage;	// 0x7db4d
// declared property getter: - (id)visiblePosterControl;	// 0x7db81
@end

