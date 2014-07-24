/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class _UIAsyncInvocation, NSString, UIBarButtonItem, _UIQueueingServiceWebViewControllerProxy, _UIRemoteWebViewController;
@protocol _UIWebViewControllerDelegate;

@interface _UIWebViewController : UIViewController {
	_UIAsyncInvocation *_cancelViewServiceRequest;	// 304 = 0x130
	_UIRemoteWebViewController *_remoteViewController;	// 308 = 0x134
	_UIQueueingServiceWebViewControllerProxy *_serviceProxy;	// 312 = 0x138
	BOOL _hasCalledBeginAppearanceTransition;	// 316 = 0x13c
	BOOL _hasCalledEndAppearanceTransition;	// 317 = 0x13d
	BOOL _canGoBack;	// 318 = 0x13e
	BOOL _canGoForward;	// 319 = 0x13f
	BOOL _loading;	// 320 = 0x140
	id<_UIWebViewControllerDelegate> _delegate;	// 324 = 0x144
	UIBarButtonItem *_backBarButtonItem;	// 328 = 0x148
	UIBarButtonItem *_forwardBarButtonItem;	// 332 = 0x14c
	float _estimatedProgress;	// 336 = 0x150
	NSString *_pageTitle;	// 340 = 0x154
	NSString *_URLString;	// 344 = 0x158
}
@property(copy, nonatomic) NSString *URLString;	// G=0x2f8d9f0d; S=0x2f8d9671; @synthesize=_URLString
@property(readonly, assign, nonatomic) UIBarButtonItem *backBarButtonItem;	// G=0x2f8d9e99; @synthesize=_backBarButtonItem
@property(readonly, assign, nonatomic) BOOL canGoBack;	// G=0x2f8d9eb9; @synthesize=_canGoBack
@property(readonly, assign, nonatomic) BOOL canGoForward;	// G=0x2f8d9ec9; @synthesize=_canGoForward
@property(assign, nonatomic) id<_UIWebViewControllerDelegate> delegate;	// G=0x2f8d9e89; S=0x2f8d9c0d; @synthesize=_delegate
@property(readonly, assign, nonatomic) float estimatedProgress;	// G=0x2f8d9ee9; @synthesize=_estimatedProgress
@property(readonly, assign, nonatomic) UIBarButtonItem *forwardBarButtonItem;	// G=0x2f8d9ea9; @synthesize=_forwardBarButtonItem
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;	// G=0x2f8d9ed9; @synthesize=_loading
@property(readonly, assign, nonatomic) NSString *pageTitle;	// G=0x2f8d9ef9; @synthesize=_pageTitle
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x2f8d9051
// declared property getter: - (id)URLString;	// 0x2f8d9f0d
- (void)_addRemoteView;	// 0x2f8d8c99
- (void)_connectToService;	// 0x2f8d8dc9
- (void)_decidePolicyForEncodedRequest:(id)encodedRequest inMainFrame:(BOOL)mainFrame navigationType:(id)type replyHandler:(id)handler;	// 0x2f8d9a45
- (void)_dispatchDidDismissViewController;	// 0x2f8d9bc5
- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(id)_dispatch;	// 0x2f8d9b0d
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)animated;	// 0x2f8d9cb1
- (void)_sendEndAppearanceTransitionIfReady;	// 0x2f8d9cf5
- (void)_setCanGoBack:(BOOL)back canGoForward:(BOOL)forward;	// 0x2f8d94f1
- (void)_setEstimatedProgress:(float)progress;	// 0x2f8d9391
- (void)_setLoading:(BOOL)loading error:(id)error;	// 0x2f8d9449
- (void)_setTitle:(id)title;	// 0x2f8d9569
- (void)_setURLString:(id)string;	// 0x2f8d95ed
- (void)_updateBarButtonItems;	// 0x2f8d8d5d
- (void)_webContentSizeWithReplyHandler:(id)replyHandler;	// 0x2f8d9979
// declared property getter: - (id)backBarButtonItem;	// 0x2f8d9e99
// declared property getter: - (BOOL)canGoBack;	// 0x2f8d9eb9
// declared property getter: - (BOOL)canGoForward;	// 0x2f8d9ec9
- (void)configureWithSettings:(id)settings;	// 0x2f8d993d
- (void)dealloc;	// 0x2f8d92a5
// declared property getter: - (id)delegate;	// 0x2f8d9e89
// declared property getter: - (float)estimatedProgress;	// 0x2f8d9ee9
// declared property getter: - (id)forwardBarButtonItem;	// 0x2f8d9ea9
- (void)goBack;	// 0x2f8d9851
- (void)goForward;	// 0x2f8d9871
// declared property getter: - (BOOL)isLoading;	// 0x2f8d9ed9
- (void)loadHTMLString:(id)string baseURL:(id)url;	// 0x2f8d9831
- (void)loadRequest:(id)request;	// 0x2f8d9755
- (void)loadView;	// 0x2f8d98d1
// declared property getter: - (id)pageTitle;	// 0x2f8d9ef9
- (void)queueingServiceProxy:(id)proxy willQueueInvocation:(id)invocation;	// 0x2f8d9241
- (void)reload;	// 0x2f8d9891
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f8d9c0d
// declared property setter: - (void)setURLString:(id)string;	// 0x2f8d9671
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x2f8d9cad
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f8d9c65
- (void)stopLoading;	// 0x2f8d98b1
- (void)viewDidAppear:(BOOL)view;	// 0x2f8d9d89
- (void)viewDidDisappear:(BOOL)view;	// 0x2f8d9e1d
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x2f8d96b1
- (void)viewWillAppear:(BOOL)view;	// 0x2f8d9d45
- (void)viewWillDisappear:(BOOL)view;	// 0x2f8d9dc9
@end
