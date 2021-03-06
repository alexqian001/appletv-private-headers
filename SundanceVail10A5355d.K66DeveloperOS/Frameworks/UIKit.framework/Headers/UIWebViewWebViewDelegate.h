/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIWebView;

__attribute__((visibility("hidden")))
@interface UIWebViewWebViewDelegate : NSObject {
	UIWebView *uiWebView;	// 4 = 0x4
}
- (id)initWithUIWebView:(id)uiwebView;	// 0x33b77e75
- (void)_clearUIWebView;	// 0x33b7a2fd
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x33c2ee59
- (id)webView:(id)view createWebViewWithRequest:(id)request;	// 0x33c2ed41
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x33c2ef8d
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x33c2eeb9
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x33b78771
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x33c2ed79
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x33c2f03d
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x33b7917d
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x33b78ce1
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x33c2eed9
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x33c2ee99
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x33b78e11
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x33b784d5
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x33c2ee79
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x33c2ee19
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x33b789d5
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x33c2edd9
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x33c2edb9
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x33b78b55
- (void)webView:(id)view printFrameView:(id)view2;	// 0x33c2edf9
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x33c2f00d
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x33c2efed
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x33c2efad
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x33b7920d
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x33c2efcd
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x33b78c25
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x33c2ef19
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x33c2ef39
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x33c2ef6d
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x33c2ed99
- (void)webViewClose:(id)close;	// 0x33c2eef9
- (void)webViewSupportedOrientationsUpdated:(id)updated;	// 0x33c2ee39
@end

