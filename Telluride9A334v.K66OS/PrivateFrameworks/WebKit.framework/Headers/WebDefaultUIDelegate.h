/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x339a9425
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x339d0c25
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x339d0c85
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x339d0c71
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x339d0c75
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x339d0c79
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x339d0c81
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x339d0d59
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x339ba601
- (void)webView:(id)view printFrameView:(id)view2;	// 0x339d0c6d
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x339d0c5d
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x339d0c61
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x339d0c65
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x339d0c69
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x339d0c59
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x339d0c55
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x339d0c4d
- (void)webView:(id)view setStatusText:(id)text;	// 0x339d0c39
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x339d0c45
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x339d0c7d
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x339d0c41
- (void)webViewClose:(id)close;	// 0x339d0c2d
- (id)webViewFirstResponder:(id)responder;	// 0x339d0da1
- (void)webViewFocus:(id)focus;	// 0x339d0c31
- (CGRect)webViewFrame:(id)frame;	// 0x339d0d0d
- (BOOL)webViewIsResizable:(id)resizable;	// 0x339d0c51
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x339d0c49
- (void)webViewShow:(id)show;	// 0x339d0c29
- (id)webViewStatusText:(id)text;	// 0x339d0c3d
- (void)webViewUnfocus:(id)unfocus;	// 0x339d0c35
@end
