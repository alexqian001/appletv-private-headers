/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UILabel, NSTimer;
@protocol UIKeyboardCandidateExtendedInputTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtendedInputTextField : UIView {
@private
	BOOL _caretBlinking;	// 46 = 0x2e
	id<UIKeyboardCandidateExtendedInputTextFieldDelegate> _delegate;	// 48 = 0x30
	UILabel *_label;	// 52 = 0x34
	UIView *_caretView;	// 56 = 0x38
	NSTimer *_caretTimer;	// 60 = 0x3c
}
@property(assign, nonatomic) BOOL caretBlinking;	// G=0x35457945; S=0x354575b9; @synthesize=_caretBlinking
@property(retain, nonatomic) NSTimer *caretTimer;	// G=0x354579bd; S=0x354579cd; @synthesize=_caretTimer
@property(retain, nonatomic) UIView *caretView;	// G=0x35457849; S=0x35457999; @synthesize=_caretView
@property(assign, nonatomic) id<UIKeyboardCandidateExtendedInputTextFieldDelegate> delegate;	// G=0x35457955; S=0x35457965; @synthesize=_delegate
@property(retain, nonatomic) UILabel *label;	// G=0x354576c1; S=0x35457975; @synthesize=_label
@property(copy, nonatomic) NSString *text;	// G=0x3545754d; S=0x35457575; 
+ (id)font;	// 0x35456fe9
- (id)initWithFrame:(CGRect)frame;	// 0x35456ee1
// declared property getter: - (BOOL)caretBlinking;	// 0x35457945
// declared property getter: - (id)caretTimer;	// 0x354579bd
- (void)caretTimerFired:(id)fired;	// 0x354574a9
// declared property getter: - (id)caretView;	// 0x35457849
- (void)dealloc;	// 0x35456f4d
// declared property getter: - (id)delegate;	// 0x35457955
- (void)hideCaret;	// 0x354573fd
// declared property getter: - (id)label;	// 0x354576c1
- (void)layout;	// 0x35457099
// declared property setter: - (void)setCaretBlinking:(BOOL)blinking;	// 0x354575b9
// declared property setter: - (void)setCaretTimer:(id)timer;	// 0x354579cd
// declared property setter: - (void)setCaretView:(id)view;	// 0x35457999
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35457965
- (void)setFrame:(CGRect)frame;	// 0x35457505
// declared property setter: - (void)setLabel:(id)label;	// 0x35457975
// declared property setter: - (void)setText:(id)text;	// 0x35457575
- (void)showCaret;	// 0x35457345
// declared property getter: - (id)text;	// 0x3545754d
- (int)textEffectsVisibilityLevel;	// 0x35456fd5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3545700d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35457095
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35457015
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35457011
@end

