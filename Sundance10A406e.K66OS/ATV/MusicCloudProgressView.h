/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "MusicCloudAdView.h"

@class BRWaitSpinnerControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface MusicCloudProgressView : MusicCloudAdView {
	BRProgressBarWidget *_progressBar;	// 84 = 0x54
	BRWaitSpinnerControl *_loadingSpinner;	// 88 = 0x58
}
- (id)init;	// 0x74075
- (void).cxx_destruct;	// 0x74605
- (void)_connectionProgressHandler:(id)handler;	// 0x743e9
- (id)accessibilityLabel;	// 0x7451d
- (void)dealloc;	// 0x7425d
- (BOOL)isAccessibilityElement;	// 0x74519
- (void)layoutSubcontrols;	// 0x742c9
@end
