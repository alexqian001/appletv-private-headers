/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIToolbar.h"

@class UISegmentedControl, UIBarButtonItem;
@protocol UIWebFormAccessoryDelegate;

__attribute__((visibility("hidden")))
@interface UIWebFormAccessory : UIToolbar {
@private
	UISegmentedControl *_tab;	// 96 = 0x60
	UIBarButtonItem *_autofill;	// 100 = 0x64
	UIBarButtonItem *_clearButton;	// 104 = 0x68
	id<UIWebFormAccessoryDelegate> delegate;	// 108 = 0x6c
}
@property(retain, nonatomic) UIBarButtonItem *_autofill;	// G=0x331e907d; S=0x331e908d; @synthesize
@property(retain, nonatomic) UIBarButtonItem *_clearButton;	// G=0x331e90b1; S=0x331e90c1; @synthesize
@property(retain, nonatomic) UISegmentedControl *_tab;	// G=0x331e9049; S=0x331e9059; @synthesize
@property(assign, nonatomic, getter=isAutoFillEnabled) BOOL autoFillEnabled;	// G=0x331e8b8d; S=0x331e8b61; 
@property(assign, nonatomic) id<UIWebFormAccessoryDelegate> delegate;	// G=0x331e90e5; S=0x331e90f5; @synthesize
@property(assign, nonatomic, getter=isNextEnabled) BOOL nextEnabled;	// G=0x331e8fd9; S=0x331e8fb9; 
@property(assign, nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;	// G=0x331e9021; S=0x331e9001; 
- (id)init;	// 0x331e866d
// declared property getter: - (id)_autofill;	// 0x331e907d
// declared property getter: - (id)_clearButton;	// 0x331e90b1
- (void)_orientationDidChange:(id)_orientation;	// 0x331e8a25
// declared property getter: - (id)_tab;	// 0x331e9049
- (void)_updateFrame;	// 0x331e8a35
- (void)autoFill:(id)fill;	// 0x331e8b21
- (void)clear:(id)clear;	// 0x331e8b41
- (void)dealloc;	// 0x331e898d
// declared property getter: - (id)delegate;	// 0x331e90e5
- (void)done:(id)done;	// 0x331e8aad
// declared property getter: - (BOOL)isAutoFillEnabled;	// 0x331e8b8d
// declared property getter: - (BOOL)isNextEnabled;	// 0x331e8fd9
// declared property getter: - (BOOL)isPreviousEnabled;	// 0x331e9021
// declared property setter: - (void)setAutoFillEnabled:(BOOL)enabled;	// 0x331e8b61
- (void)setAutoFillVisible:(BOOL)visible;	// 0x331e8bb9
- (void)setClearVisible:(BOOL)visible;	// 0x331e8dc9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x331e90f5
// declared property setter: - (void)setNextEnabled:(BOOL)enabled;	// 0x331e8fb9
// declared property setter: - (void)setPreviousEnabled:(BOOL)enabled;	// 0x331e9001
// declared property setter: - (void)set_autofill:(id)autofill;	// 0x331e908d
// declared property setter: - (void)set_clearButton:(id)button;	// 0x331e90c1
// declared property setter: - (void)set_tab:(id)tab;	// 0x331e9059
- (void)tab:(id)tab;	// 0x331e8acd
@end

