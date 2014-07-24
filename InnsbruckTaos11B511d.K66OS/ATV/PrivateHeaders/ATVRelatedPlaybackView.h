/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ATVRelatedPlaybackPlayerGlow, BRListView, BRBlueGlowSelectionLozengeLayer, BRCursorControl, BRScrollControl;
@protocol ATVRelatedPlaybackViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVRelatedPlaybackView : BRControl {
	BRControl *_playerView;	// 84 = 0x54
	BRControl *_relatedPlayerView;	// 88 = 0x58
	BRListView *_optionsView;	// 92 = 0x5c
	id<ATVRelatedPlaybackViewDelegate> _delegate;	// 96 = 0x60
	int _state;	// 100 = 0x64
	ATVRelatedPlaybackPlayerGlow *_playerGlow;	// 104 = 0x68
	BRScrollControl *_optionsScrollView;	// 108 = 0x6c
	BRCursorControl *_cursor;	// 112 = 0x70
	BRBlueGlowSelectionLozengeLayer *_optionsViewCursor;	// 116 = 0x74
	double _transitionAnimationDuration;	// 120 = 0x78
}
@property(retain, nonatomic) BRCursorControl *cursor;	// G=0x4b9649; S=0x4b9659; @synthesize=_cursor
@property(assign, nonatomic) __weak id<ATVRelatedPlaybackViewDelegate> delegate;	// G=0x4b9595; S=0x4b95b5; @synthesize=_delegate
@property(retain, nonatomic) BRScrollControl *optionsScrollView;	// G=0x4b9611; S=0x4b9621; @synthesize=_optionsScrollView
@property(retain, nonatomic) BRListView *optionsView;	// G=0x4b9585; S=0x4b7999; @synthesize=_optionsView
@property(retain, nonatomic) BRBlueGlowSelectionLozengeLayer *optionsViewCursor;	// G=0x4b9681; S=0x4b9691; @synthesize=_optionsViewCursor
@property(readonly, assign, nonatomic, getter=isPlayerFocused) BOOL playerFocused;	// G=0x4b7aa9; 
@property(retain, nonatomic) ATVRelatedPlaybackPlayerGlow *playerGlow;	// G=0x4b95d9; S=0x4b95e9; @synthesize=_playerGlow
@property(retain, nonatomic) BRControl *playerView;	// G=0x4b9565; S=0x4b78b1; @synthesize=_playerView
@property(retain, nonatomic) BRControl *relatedPlayerView;	// G=0x4b9575; S=0x4b790d; @synthesize=_relatedPlayerView
@property(assign, nonatomic) int state;	// G=0x4b95c9; S=0x4b7af9; @synthesize=_state
@property(assign, nonatomic) double transitionAnimationDuration;	// G=0x4b9539; S=0x4b9551; @synthesize=_transitionAnimationDuration
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x4b7a79; 
- (id)init;	// 0x4b76cd
- (void).cxx_destruct;	// 0x4b96b9
- (void)_focusChanged:(id)changed;	// 0x4b9441
- (BOOL)_isVisibleForState:(int)state;	// 0x4b863d
- (void)_setPresentationAnimationsTowardsPresentation:(BOOL)presentation;	// 0x4b8651
- (id)actingOptionsView;	// 0x4b94dd
- (BOOL)brEventAction:(id)action;	// 0x4b855d
- (void)controlWasActivated;	// 0x4b7c79
// declared property getter: - (id)cursor;	// 0x4b9649
- (void)dealloc;	// 0x4b7845
// declared property getter: - (id)delegate;	// 0x4b9595
// declared property getter: - (BOOL)isPlayerFocused;	// 0x4b7aa9
// declared property getter: - (BOOL)isVisible;	// 0x4b7a79
- (void)layoutSubcontrols;	// 0x4b7d35
// declared property getter: - (id)optionsScrollView;	// 0x4b9611
// declared property getter: - (id)optionsView;	// 0x4b9585
// declared property getter: - (id)optionsViewCursor;	// 0x4b9681
// declared property getter: - (id)playerGlow;	// 0x4b95d9
// declared property getter: - (id)playerView;	// 0x4b9565
// declared property getter: - (id)relatedPlayerView;	// 0x4b9575
// declared property setter: - (void)setCursor:(id)cursor;	// 0x4b9659
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4b95b5
// declared property setter: - (void)setOptionsScrollView:(id)view;	// 0x4b9621
// declared property setter: - (void)setOptionsView:(id)view;	// 0x4b7999
// declared property setter: - (void)setOptionsViewCursor:(id)cursor;	// 0x4b9691
// declared property setter: - (void)setPlayerGlow:(id)glow;	// 0x4b95e9
// declared property setter: - (void)setPlayerView:(id)view;	// 0x4b78b1
// declared property setter: - (void)setRelatedPlayerView:(id)view;	// 0x4b790d
// declared property setter: - (void)setState:(int)state;	// 0x4b7af9
// declared property setter: - (void)setTransitionAnimationDuration:(double)duration;	// 0x4b9551
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x4b7cd1
// declared property getter: - (int)state;	// 0x4b95c9
// declared property getter: - (double)transitionAnimationDuration;	// 0x4b9539
- (void)transitionBackWithAnimation:(BOOL)animation;	// 0x4b7b8d
@end
