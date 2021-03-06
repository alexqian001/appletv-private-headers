/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIKit/UIControl.h>


@interface TPLegacyPhonePad : UIControl {
	int _downKey;	// 120 = 0x78
	int _highlightKey;	// 124 = 0x7c
	id _delegate;	// 128 = 0x80
	BOOL _playsSounds;	// 132 = 0x84
	BOOL _supportsHardPause;	// 133 = 0x85
	float _topHeight;	// 136 = 0x88
	float _midHeight;	// 140 = 0x8c
	float _bottomHeight;	// 144 = 0x90
	float _leftWidth;	// 148 = 0x94
	float _midWidth;	// 152 = 0x98
	float _rightWidth;	// 156 = 0x9c
	CFSetRef _inflightSounds;	// 160 = 0xa0
	CFDictionaryRef _keyToButtonMap;	// 164 = 0xa4
	unsigned _incompleteSounds;	// 168 = 0xa8
	unsigned _delegateSoundCallbacks : 1;	// 172 = 0xac
	unsigned _soundsActivated : 1;	// 172 = 0xac
}
@property(assign) BOOL supportsHardPause;	// G=0x329cb8b5; S=0x329cb8cd; @synthesize=_supportsHardPause
+ (void)_delayedDeactivate;	// 0x329ca0d5
+ (BOOL)launchFieldTestIfNeeded:(id)needed;	// 0x329c9ead
+ (BOOL)shouldStringAutoDial:(id)dial givenLastChar:(BOOL)aChar;	// 0x329c9d95
- (id)initWithFrame:(CGRect)frame;	// 0x329c9f09
- (void)_activateSounds:(BOOL)sounds;	// 0x329ca11d
- (void)_appResumed;	// 0x329ca2e1
- (void)_appSuspended;	// 0x329ca2cd
- (id)_buttonForKeyAtIndex:(unsigned)index;	// 0x329ca6f1
- (void)_handleKey:(id)key forUIEvent:(id)uievent;	// 0x329cafad
- (void)_handleKeyPressAndHold:(id)hold;	// 0x329cb295
- (id)_highlightedImage;	// 0x329ca8a5
- (id)_imageByCroppingImage:(id)image toRect:(CGRect)rect;	// 0x329ca955
- (int)_keyForPoint:(CGPoint)point;	// 0x329cb39d
- (id)_keypadImage;	// 0x329ca86d
- (CGPoint)_keypadOrigin;	// 0x329ca761
- (void)_notifySoundCompletionIfNecessary:(unsigned long)necessary;	// 0x329cb675
- (void)_playSoundForKey:(unsigned)key;	// 0x329cb6d5
- (id)_pressedImage;	// 0x329ca835
- (CGRect)_rectForKey:(unsigned)key;	// 0x329cb509
- (void)_stopAllSoundsForcingCallbacks:(BOOL)callbacks;	// 0x329cb7f5
- (void)_stopSoundForKey:(unsigned)key;	// 0x329cb7b5
- (CGRect)_updateRect:(CGRect)rect withScale:(float)scale;	// 0x329ca8e5
- (float)_yFudge;	// 0x329ca8dd
- (BOOL)cancelTouchTracking;	// 0x329caea9
- (void)dealloc;	// 0x329ca025
- (void)drawRect:(CGRect)rect;	// 0x329ca9fd
- (void)highlightKeyAtIndex:(int)index;	// 0x329c9d19
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x329cad35
- (int)indexForHighlightedKey;	// 0x329c9d85
- (void)movedFromWindow:(id)window;	// 0x329ca309
- (void)movedToWindow:(id)window;	// 0x329ca34d
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x329cad31
- (void)removeFromSuperview;	// 0x329ca26d
- (id)scriptingInfoWithChildren;	// 0x329cb8e5
- (void)setButton:(id)button forKeyAtIndex:(unsigned)index;	// 0x329ca62d
- (void)setDelegate:(id)delegate;	// 0x329ca3a1
- (void)setHighlighted:(BOOL)highlighted;	// 0x329cada9
- (void)setNeedsDisplayForKey:(int)key;	// 0x329ca70d
- (void)setPlaysSounds:(BOOL)sounds;	// 0x329ca439
// declared property setter: - (void)setSupportsHardPause:(BOOL)pause;	// 0x329cb8cd
// declared property getter: - (BOOL)supportsHardPause;	// 0x329cb8b5
@end

