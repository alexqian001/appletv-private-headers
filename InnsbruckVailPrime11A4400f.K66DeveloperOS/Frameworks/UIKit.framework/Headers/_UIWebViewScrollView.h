/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebScrollView.h"

@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollView : UIWebScrollView {
	_UIWebViewScrollViewDelegateForwarder *_forwarder;	// 60 = 0x3c
	BOOL _bouncesSetExplicitly;	// 64 = 0x40
	UIWebBrowserView *_browserView;	// 68 = 0x44
}
@property(assign) id delegate;	// G=0x2f684f3d; S=0x2f684ed9; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x2f684d15
- (void)_setWebView:(id)view;	// 0x2f684f5d
- (void)_weaklySetBouncesHorizontally:(BOOL)horizontally;	// 0x2f684ddd
- (void)dealloc;	// 0x2f684d8d
// converted property getter: - (id)delegate;	// 0x2f684f3d
- (void)setBounces:(BOOL)bounces;	// 0x2f684e19
- (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x2f684e99
- (void)setBouncesVertically:(BOOL)vertically;	// 0x2f684e59
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2f684ed9
@end

