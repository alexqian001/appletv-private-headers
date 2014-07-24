/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UIViewController.h>
#import "UIWebViewDelegate.h"

@class UIToolbar, UIWebView;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {
	UIWebView *_webView;	// 304 = 0x130
	UIToolbar *_toolbar;	// 308 = 0x134
	id _delegate;	// 312 = 0x138
}
@property(readonly, assign, nonatomic) UIToolbar *toolbar;	// G=0x32694105; @synthesize=_toolbar
@property(readonly, assign, nonatomic) UIWebView *webView;	// G=0x32694139; @synthesize=_webView
- (void)dealloc;	// 0x3269416d
- (void)donePressed:(id)pressed;	// 0x32694315
- (void)loadURL:(id)url;	// 0x32694335
- (void)loadView;	// 0x32693ef1
- (void)setDelegate:(id)delegate;	// 0x32694305
// declared property getter: - (id)toolbar;	// 0x32694105
- (void)viewDidLayoutSubviews;	// 0x326941e5
// declared property getter: - (id)webView;	// 0x32694139
@end
