/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIResponder, UIDelayedAction;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
	UIResponder<UITextInput> *_textInput;	// 104 = 0x68
	UIDelayedAction *_secondDelayTimer;	// 108 = 0x6c
	double _secondDelay;	// 112 = 0x70
	BOOL _secondDelayElapsed;	// 120 = 0x78
	id _userData;	// 124 = 0x7c
}
@property(assign, nonatomic) double secondDelay;	// G=0x3483319d; S=0x348331b5; @synthesize=_secondDelay
@property(readonly, assign, nonatomic) BOOL secondDelayElapsed;	// G=0x348331c9; @synthesize=_secondDelayElapsed
@property(assign, nonatomic) UIResponder<UITextInput> *textInput;	// G=0x3483317d; S=0x3483318d; @synthesize=_textInput
@property(assign, nonatomic) id userData;	// G=0x348331d9; S=0x348331e9; @synthesize=_userData
- (void)_resetGestureRecognizer;	// 0x34832dc5
- (void)clearTimer;	// 0x34833119
// declared property getter: - (double)secondDelay;	// 0x3483319d
// declared property getter: - (BOOL)secondDelayElapsed;	// 0x348331c9
- (void)secondDelayElapsed:(id)elapsed;	// 0x34832ed1
// declared property setter: - (void)setSecondDelay:(double)delay;	// 0x348331b5
- (void)setState:(int)state;	// 0x34832e11
// declared property setter: - (void)setTextInput:(id)input;	// 0x3483318d
// declared property setter: - (void)setUserData:(id)data;	// 0x348331e9
- (void)startTimer;	// 0x34832f25
// declared property getter: - (id)textInput;	// 0x3483317d
// declared property getter: - (id)userData;	// 0x348331d9
@end
