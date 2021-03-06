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
@property(retain, nonatomic) UIBarButtonItem *_autofill;	// G=0x353ddf85; S=0x353ddf95; @synthesize
@property(retain, nonatomic) UIBarButtonItem *_clearButton;	// G=0x353ddfb9; S=0x353ddfc9; @synthesize
@property(retain, nonatomic) UISegmentedControl *_tab;	// G=0x353ddf51; S=0x353ddf61; @synthesize
@property(assign, nonatomic, getter=isAutoFillEnabled) BOOL autoFillEnabled;	// G=0x353dda95; S=0x353dda69; 
@property(assign, nonatomic) id<UIWebFormAccessoryDelegate> delegate;	// G=0x353ddfed; S=0x353ddffd; @synthesize
@property(assign, nonatomic, getter=isNextEnabled) BOOL nextEnabled;	// G=0x353ddee1; S=0x353ddec1; 
@property(assign, nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;	// G=0x353ddf29; S=0x353ddf09; 
- (id)init;	// 0x353dd575
// declared property getter: - (id)_autofill;	// 0x353ddf85
// declared property getter: - (id)_clearButton;	// 0x353ddfb9
- (void)_orientationDidChange:(id)_orientation;	// 0x353dd92d
// declared property getter: - (id)_tab;	// 0x353ddf51
- (void)_updateFrame;	// 0x353dd93d
- (void)autoFill:(id)fill;	// 0x353dda29
- (void)clear:(id)clear;	// 0x353dda49
- (void)dealloc;	// 0x353dd895
// declared property getter: - (id)delegate;	// 0x353ddfed
- (void)done:(id)done;	// 0x353dd9b5
// declared property getter: - (BOOL)isAutoFillEnabled;	// 0x353dda95
// declared property getter: - (BOOL)isNextEnabled;	// 0x353ddee1
// declared property getter: - (BOOL)isPreviousEnabled;	// 0x353ddf29
// declared property setter: - (void)setAutoFillEnabled:(BOOL)enabled;	// 0x353dda69
- (void)setAutoFillVisible:(BOOL)visible;	// 0x353ddac1
- (void)setClearVisible:(BOOL)visible;	// 0x353ddcd1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x353ddffd
// declared property setter: - (void)setNextEnabled:(BOOL)enabled;	// 0x353ddec1
// declared property setter: - (void)setPreviousEnabled:(BOOL)enabled;	// 0x353ddf09
// declared property setter: - (void)set_autofill:(id)autofill;	// 0x353ddf95
// declared property setter: - (void)set_clearButton:(id)button;	// 0x353ddfc9
// declared property setter: - (void)set_tab:(id)tab;	// 0x353ddf61
- (void)tab:(id)tab;	// 0x353dd9d5
@end

