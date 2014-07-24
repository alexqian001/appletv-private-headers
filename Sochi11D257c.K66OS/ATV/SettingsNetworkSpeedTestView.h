/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRMenuView, BRTextControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface SettingsNetworkSpeedTestView : BRControl {
	BRMenuView *_menuView;	// 84 = 0x54
	BRProgressBarWidget *_progressView;	// 88 = 0x58
	BRTextControl *_progressRateView;	// 92 = 0x5c
}
@property(readonly, retain) BRMenuView *menuView;	// G=0x2ed81d; converted property
@property(readonly, retain) BRTextControl *progressRateView;	// G=0x2ed845; converted property
@property(readonly, retain) BRProgressBarWidget *progressView;	// G=0x2ed831; converted property
- (id)init;	// 0x2ed461
- (void).cxx_destruct;	// 0x2ed89d
- (id)accessibilityLabel;	// 0x2ed85d
- (id)accessibilitySecondaryLabel;	// 0x2ed87d
- (BOOL)isAccessibilityElement;	// 0x2ed859
- (void)layoutSubcontrols;	// 0x2ed5d5
// converted property getter: - (id)menuView;	// 0x2ed81d
// converted property getter: - (id)progressRateView;	// 0x2ed845
// converted property getter: - (id)progressView;	// 0x2ed831
@end
