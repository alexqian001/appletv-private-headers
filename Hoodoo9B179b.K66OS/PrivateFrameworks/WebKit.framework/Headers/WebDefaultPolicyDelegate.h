/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDefaultPolicyDelegate : NSObject {
}
+ (id)sharedPolicyDelegate;	// 0x3451c86d
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x345469dd
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x34546af5
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x34546bd5
- (BOOL)webView:(id)view shouldGoToHistoryItem:(id)historyItem;	// 0x345469d9
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x345469d5
@end

