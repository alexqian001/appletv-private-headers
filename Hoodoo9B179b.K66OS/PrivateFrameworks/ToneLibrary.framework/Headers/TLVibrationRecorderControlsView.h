/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class TLVibrationRecorderProgressView;
@protocol TLVibrationRecorderControlsViewDelegate;

@interface TLVibrationRecorderControlsView : UIView {
	id<TLVibrationRecorderControlsViewDelegate> _delegate;	// 48 = 0x30
	TLVibrationRecorderProgressView *_progressView;	// 52 = 0x34
	id _leftButton;	// 56 = 0x38
	id _rightButton;	// 60 = 0x3c
}
@property(retain, nonatomic, setter=_setLeftButton:) id _leftButton;	// G=0x36e00175; S=0x36e00185; @synthesize
@property(retain, nonatomic, setter=_setRightButton:) id _rightButton;	// G=0x36e001a9; S=0x36e001b9; @synthesize
@property(assign, nonatomic) double currentTimeInterval;	// G=0x36dfff71; S=0x36dfff91; 
@property(assign, nonatomic) id<TLVibrationRecorderControlsViewDelegate> delegate;	// G=0x36e00155; S=0x36e00165; @synthesize=_delegate
@property(assign, nonatomic, getter=isLeftButtonEnabled) BOOL leftButtonEnabled;	// G=0x36dffec9; S=0x36dffef1; 
@property(assign, nonatomic, getter=isRightButtonEnabled) BOOL rightButtonEnabled;	// G=0x36dfff1d; S=0x36dfff45; 
@property(assign, nonatomic) unsigned roundedCornersCompensationDelayMode;	// G=0x36dfffb1; S=0x36dfffd1; 
+ (void)_loadImages;	// 0x36dff111
+ (float)defaultHeight;	// 0x36dff2b9
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x36dff315
- (void)_buttonTapped:(id)tapped;	// 0x36e000ed
// declared property getter: - (id)_leftButton;	// 0x36e00175
// declared property getter: - (id)_rightButton;	// 0x36e001a9
// declared property setter: - (void)_setLeftButton:(id)button;	// 0x36e00185
// declared property setter: - (void)_setRightButton:(id)button;	// 0x36e001b9
- (void)clearAllVibrationComponents;	// 0x36e00031
// declared property getter: - (double)currentTimeInterval;	// 0x36dfff71
- (void)dealloc;	// 0x36dff48d
// declared property getter: - (id)delegate;	// 0x36e00155
- (void)drawRect:(CGRect)rect;	// 0x36e00051
// declared property getter: - (BOOL)isLeftButtonEnabled;	// 0x36dffec9
// declared property getter: - (BOOL)isRightButtonEnabled;	// 0x36dfff1d
// declared property getter: - (unsigned)roundedCornersCompensationDelayMode;	// 0x36dfffb1
// declared property setter: - (void)setCurrentTimeInterval:(double)interval;	// 0x36dfff91
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36e00165
- (void)setLeftButtonColor:(int)color title:(id)title icon:(id)icon enabled:(BOOL)enabled rightButtonColor:(int)color5 title:(id)title6 icon:(id)icon7 enabled:(BOOL)enabled8 animationDuration:(double)duration completion:(id)completion;	// 0x36dff501
// declared property setter: - (void)setLeftButtonEnabled:(BOOL)enabled;	// 0x36dffef1
// declared property setter: - (void)setRightButtonEnabled:(BOOL)enabled;	// 0x36dfff45
// declared property setter: - (void)setRoundedCornersCompensationDelayMode:(unsigned)mode;	// 0x36dfffd1
- (void)vibrationComponentDidEnd;	// 0x36e00011
- (void)vibrationComponentDidStart;	// 0x36dffff1
@end
