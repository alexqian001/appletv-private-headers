/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRTextField.h"

@class BRTextControl, ATVIPv4AddressSelectionControl;
@protocol BRTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressEntryControl : BRControl <BRTextField> {
	ATVIPv4AddressSelectionControl *_addressPicker;	// 84 = 0x54
	BRTextControl *_labelLayer;	// 88 = 0x58
	CGSize _addressPickerSize;	// 92 = 0x5c
	float _labelPadding;	// 100 = 0x64
	id<BRTextFieldDelegate> _textFieldDelegate;	// 104 = 0x68
}
- (id)init;	// 0x2159f9
- (void)_handlePlayPauseButton:(id)button;	// 0x216255
- (void)_layoutUI;	// 0x216371
- (id)accessibilityLabel;	// 0x216351
- (id)accessibilityTraitsList;	// 0x2162d1
- (BOOL)brEventAction:(id)action;	// 0x215e3d
- (void)dealloc;	// 0x215add
- (BOOL)isAccessibilityElement;	// 0x2162cd
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x215b41
- (void)reset;	// 0x215da1
- (void)setDelegate:(id)delegate;	// 0x215c2d
- (void)setFrame:(CGRect)frame;	// 0x215de9
- (void)setInitialAddress:(id)address;	// 0x215d81
- (void)setLabel:(id)label;	// 0x215c3d
- (void)setString:(id)string;	// 0x216235
- (id)stringValue;	// 0x216215
@end

