/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIViewController.h> // Unknown library

@class _UIAsyncInvocation, SKRemoteProductViewController, SKInvocationQueueProxy, NSDictionary, NSString;
@protocol SKStoreProductViewControllerDelegatePrivate, SKStoreProductViewControllerDelegate, SKUIServiceProductPageViewController;

@interface SKStoreProductViewController : UIViewController {
	NSString *_affiliateIdentifier;	// 196 = 0xc4
	_UIAsyncInvocation *_cancelRequest;	// 200 = 0xc8
	NSString *_clientIdentifier;	// 204 = 0xcc
	id<SKStoreProductViewControllerDelegatePrivate> _delegate;	// 208 = 0xd0
	id _loadBlock;	// 212 = 0xd4
	int _productPageStyle;	// 216 = 0xd8
	SKRemoteProductViewController *_remoteViewController;	// 220 = 0xdc
	SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;	// 224 = 0xe0
	NSDictionary *_scriptContextDictionary;	// 228 = 0xe4
}
@property(copy, nonatomic) NSString *affiliateIdentifier;	// G=0x35121c55; S=0x351210f1; @synthesize=_affiliateIdentifier
@property(copy, nonatomic) NSString *clientIdentifier;	// G=0x35121c69; S=0x35121155; @synthesize=_clientIdentifier
@property(assign, nonatomic) id<SKStoreProductViewControllerDelegate> delegate;	// G=0x35121c7d; S=0x35121c8d; @synthesize=_delegate
@property(assign, nonatomic) int productPageStyle;	// G=0x35121c9d; S=0x351211b9; @synthesize=_productPageStyle
@property(copy, nonatomic) NSDictionary *scriptContextDictionary;	// G=0x35121cad; S=0x35121219; @synthesize=_scriptContextDictionary
+ (void)_validateURL:(id)url withSheetInfo:(id)sheetInfo completionBlock:(id)block;	// 0x351218d1
+ (void)getCanLoadURL:(id)url completionBlock:(id)block;	// 0x35120dc1
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x351209a9
- (void)_addRemoteView;	// 0x3512151d
- (void)_didFinish;	// 0x3512127d
- (void)_didFinishWithResult:(int)result;	// 0x351212e9
- (void)_loadDidFinishWithResult:(BOOL)_load error:(id)error;	// 0x35121379
- (void)_presentPageWithRequest:(id)request animated:(BOOL)animated;	// 0x351213b5
- (void)_requestRemoteViewController;	// 0x3512160d
- (void)_resetRemoteViewController;	// 0x35121431
- (void)_throwUnsupportedPresentationException;	// 0x3512187d
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x35120db1
// declared property getter: - (id)affiliateIdentifier;	// 0x35121c55
// declared property getter: - (id)clientIdentifier;	// 0x35121c69
- (void)dealloc;	// 0x35120a8d
// declared property getter: - (id)delegate;	// 0x35121c7d
- (void)loadProductWithParameters:(id)parameters completionBlock:(id)block;	// 0x35120b8d
- (void)loadProductWithRequest:(id)request completionBlock:(id)block;	// 0x35120fd1
- (void)loadProductWithURL:(id)url completionBlock:(id)block;	// 0x35121085
- (void)loadView;	// 0x35120bf9
// declared property getter: - (int)productPageStyle;	// 0x35121c9d
// declared property getter: - (id)scriptContextDictionary;	// 0x35121cad
// declared property setter: - (void)setAffiliateIdentifier:(id)identifier;	// 0x351210f1
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x35121155
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35121c8d
// declared property setter: - (void)setProductPageStyle:(int)style;	// 0x351211b9
// declared property setter: - (void)setScriptContextDictionary:(id)dictionary;	// 0x35121219
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x35120c99
- (void)viewDidAppear:(BOOL)view;	// 0x35120d39
- (void)viewWillAppear:(BOOL)view;	// 0x35120ce1
@end
