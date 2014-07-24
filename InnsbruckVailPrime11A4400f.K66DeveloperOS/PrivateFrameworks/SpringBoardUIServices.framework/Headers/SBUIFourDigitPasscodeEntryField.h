/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import "SBUINumericPasscodeEntryFieldBase.h"
#import "SpringBoardUIServices-Structs.h"

@class UIView, NSMutableArray;

@interface SBUIFourDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
	UIView *_leftPaddingView;	// 128 = 0x80
	UIView *_rightPaddingView;	// 132 = 0x84
	UIView *_characterIndicatorsContainerView;	// 136 = 0x88
	NSMutableArray *_characterIndicators;	// 140 = 0x8c
	float _backgroundAlpha;	// 144 = 0x90
	UIView *_springView;	// 148 = 0x94
	UIView *_springViewParent;	// 152 = 0x98
}
- (id)initWithDefaultSize;	// 0x327930f9
- (void)_appendString:(id)string;	// 0x32793a4d
- (void)_deleteLastCharacter;	// 0x32793ae5
- (CGRect)_entryFieldBoundsWithXOffset:(float)xoffset;	// 0x327941f9
- (float)_entryFieldIndicatorDiameter;	// 0x32794169
- (float)_entryFieldIndicatorWidthPadding;	// 0x327941b5
- (UIEdgeInsets)_entryFieldPaddingOutsideRing;	// 0x32794269
- (BOOL)_hasAnyCharacters;	// 0x32793be9
- (void)_resetForFailedPasscode:(BOOL)failedPasscode;	// 0x32793c19
- (void)_setLuminosityBoost:(float)boost;	// 0x32793b6d
- (CGSize)_viewSize;	// 0x327940e5
- (void)dealloc;	// 0x32793599
- (void)layoutSubviews;	// 0x32793949
- (void)reset;	// 0x327938c9
- (void)setBackgroundAlpha:(float)alpha;	// 0x3279364d
- (void)setCustomBackgroundColor:(id)color;	// 0x32793789
@end
