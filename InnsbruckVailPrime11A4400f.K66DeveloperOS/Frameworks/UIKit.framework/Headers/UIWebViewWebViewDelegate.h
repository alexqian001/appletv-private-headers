/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class UIWebView;

__attribute__((visibility("hidden")))
@interface UIWebViewWebViewDelegate : NSObject {
	UIWebView *uiWebView;	// 4 = 0x4
}
- (id)initWithUIWebView:(id)uiwebView;	// 0x2f689dcd
- (void)_clearUIWebView;	// 0x2f68a259
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x2f689f85
- (id)webView:(id)view createWebViewWithRequest:(id)request;	// 0x2f689e0d
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x2f68a13d
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x2f68a025
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x2f689e65
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x2f689e45
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x2f68a239
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x2f689fc5
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x2f689f25
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x2f68a065
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x2f68a005
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x2f68a045
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x2f68a085
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x2f689fe5
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x2f689f45
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x2f689f05
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x2f689ec5
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x2f689ea5
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x2f68a15d
- (void)webView:(id)view printFrameView:(id)view2;	// 0x2f689ee5
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x2f68a1fd
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x2f68a1dd
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x2f68a19d
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x2f68a17d
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x2f68a1bd
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x2f689fa5
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x2f68a0c5
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x2f68a0e5
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x2f68a11d
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x2f689e85
- (void)webViewClose:(id)close;	// 0x2f68a0a5
- (void)webViewSupportedOrientationsUpdated:(id)updated;	// 0x2f689f65
@end

