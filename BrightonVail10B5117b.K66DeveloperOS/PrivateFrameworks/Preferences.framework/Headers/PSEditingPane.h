/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIView.h> // Unknown library
#import "Preferences-Structs.h"

@class PSSpecifier;

@interface PSEditingPane : UIView {
	PSSpecifier *_specifier;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	unsigned _requiresKeyboard : 1;	// 92 = 0x5c
	CGRect _pinstripeRect;	// 96 = 0x60
	UIView *_pinstripeView;	// 112 = 0x70
}
@property(assign, nonatomic) CGRect pinstripeRect;	// G=0x354c4cb9; S=0x354c4b5d; 
@property(retain) id preferenceSpecifier;	// G=0x354c4b31; S=0x354c4aed; converted property
@property(retain) id preferenceValue;	// G=0x354c4b45; S=0x354c4b41; converted property
+ (id)defaultBackgroundColor;	// 0x354c49c1
+ (float)preferredHeight;	// 0x354c49fd
- (id)initWithFrame:(CGRect)frame;	// 0x354c4a05
- (void)addNewValue;	// 0x354c4d05
- (BOOL)changed;	// 0x354c4d15
- (CGRect)contentRect;	// 0x354c4a55
- (void)dealloc;	// 0x354c4a79
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x354c4d21
- (void)doneEditing;	// 0x354c4d0d
- (void)editMode;	// 0x354c4d09
- (BOOL)handlesDoneButton;	// 0x354c4d11
// declared property getter: - (CGRect)pinstripeRect;	// 0x354c4cb9
// converted property getter: - (id)preferenceSpecifier;	// 0x354c4b31
// converted property getter: - (id)preferenceValue;	// 0x354c4b45
- (BOOL)requiresKeyboard;	// 0x354c4b49
- (void)setDelegate:(id)delegate;	// 0x354c4add
// declared property setter: - (void)setPinstripeRect:(CGRect)rect;	// 0x354c4b5d
// converted property setter: - (void)setPreferenceSpecifier:(id)specifier;	// 0x354c4aed
// converted property setter: - (void)setPreferenceValue:(id)value;	// 0x354c4b41
- (id)specifierLabel;	// 0x354c4cdd
- (void)viewDidBecomeVisible;	// 0x354c4d01
- (BOOL)wantsNewButton;	// 0x354c4cfd
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354c4d1d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354c4d19
@end
