/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class NSArray, NSDictionary, BRSystemLanguages;

@interface ATVLanguageChooserController : BRViewController {
@private
	BRSystemLanguages *_systemLanguages;	// 84 = 0x54
	NSArray *_languageKeys;	// 88 = 0x58
	NSDictionary *_languageKeysAndPrompts;	// 92 = 0x5c
	BOOL _canBePopped;	// 96 = 0x60
	BOOL _useVoiceOverGreeting;	// 97 = 0x61
	double _lastPlayButtonPress;	// 100 = 0x64
	int _playButtonPressCount;	// 108 = 0x6c
}
@property(assign) BOOL canBePopped;	// G=0x330bac2d; S=0x330bac1d; converted property
@property(assign, nonatomic) BOOL useVoiceOverGreeting;	// G=0x330bac3d; S=0x330bac4d; @synthesize=_useVoiceOverGreeting
+ (id)controlOOB;	// 0x330ba575
- (id)init;	// 0x330ba5bd
- (id)initWithOOBLayout:(BOOL)ooblayout;	// 0x330ba5d1
- (void)_collectLanguages;	// 0x330bad11
- (long)_defaultIndex;	// 0x330bac5d
- (void)_performLanguageChange:(id)change;	// 0x330bb205
- (void)_showProgressForLanguage:(id)language;	// 0x330bb0ed
- (BOOL)brEventAction:(id)action;	// 0x330ba8e9
// converted property getter: - (BOOL)canBePopped;	// 0x330bac2d
- (void)dealloc;	// 0x330ba7dd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x330bab85
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x330baa81
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x330bab65
// converted property setter: - (void)setCanBePopped:(BOOL)popped;	// 0x330bac1d
// declared property setter: - (void)setUseVoiceOverGreeting:(BOOL)greeting;	// 0x330bac4d
// declared property getter: - (BOOL)useVoiceOverGreeting;	// 0x330bac3d
- (void)wasPushed;	// 0x330ba851
@end

