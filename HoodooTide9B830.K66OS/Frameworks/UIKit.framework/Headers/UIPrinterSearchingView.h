/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrinterSearchingView : UIView {
@private
	UILabel *_searchingLabel;	// 48 = 0x30
	UIActivityIndicatorView *_searchingIndicator;	// 52 = 0x34
}
- (id)initInView:(id)view;	// 0x30377665
- (void)dealloc;	// 0x303778bd
- (void)layoutSubviews;	// 0x30377ae1
- (void)searchTimeout;	// 0x3037791d
- (void)setSearching:(BOOL)searching;	// 0x303779a9
@end

