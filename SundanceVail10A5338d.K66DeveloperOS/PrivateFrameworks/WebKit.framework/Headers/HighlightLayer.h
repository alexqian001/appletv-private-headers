/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <CALayer.h> // Unknown library

@class WebNodeHighlightView, WebView;

@interface HighlightLayer : CALayer {
	WebNodeHighlightView *_view;	// 48 = 0x30
	WebView *_webView;	// 52 = 0x34
}
- (id)initWithHighlightView:(id)highlightView webView:(id)view;	// 0x316b919d
- (id)actionForKey:(id)key;	// 0x316b92e5
- (void)layoutSublayers;	// 0x316b91f1
@end

