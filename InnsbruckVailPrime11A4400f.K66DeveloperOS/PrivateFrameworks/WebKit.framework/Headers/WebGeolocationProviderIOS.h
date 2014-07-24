/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebGeolocationProvider.h"
#import </libobjc.A.h>


@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider> {
	RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;	// 4 = 0x4
	RetainPtr<_WebCoreLocationUpdateThreadingProxy> _coreLocationUpdateListenerProxy;	// 8 = 0x8
	BOOL _enableHighAccuracy;	// 12 = 0xc
	BOOL _isSuspended;	// 13 = 0xd
	BOOL _shouldResetOnResume;	// 14 = 0xe
	HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > > _webViewsWaitingForCoreLocationStart;	// 16 = 0x10
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > _warmUpWebViews;	// 36 = 0x24
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > _pendingInitialPositionWebView;	// 56 = 0x38
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > _registeredWebViews;	// 76 = 0x4c
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > _trackedWebViews;	// 96 = 0x60
	RetainPtr<NSTimer> _sendLastPositionAsynchronouslyTimer;	// 116 = 0x74
	RetainPtr<WebGeolocationPosition> _lastPosition;	// 120 = 0x78
}
+ (id)sharedGeolocationProvider;	// 0x33936db9
- (id).cxx_construct;	// 0x33936df1
- (void).cxx_destruct;	// 0x33977fb9
- (void)_handlePendingInitialPosition:(id)position;	// 0x33976c29
- (void)_startCoreLocationDelegate;	// 0x3397692d
- (void)_stopCoreLocationDelegateIfNeeded;	// 0x33976b45
- (void)cancelWarmUpForWebView:(id)webView;	// 0x33977269
- (void)dealloc;	// 0x33976639
- (void)errorOccurred:(id)occurred;	// 0x33977af1
- (void)geolocationDelegateStarted;	// 0x339772bd
- (void)geolocationDelegateUnableToStart;	// 0x33977645
- (void)initializeGeolocationForWebView:(id)webView listener:(id)listener;	// 0x33977139
- (id)lastPosition;	// 0x33977075
- (void)positionChanged:(id)changed;	// 0x339778a5
- (void)registerWebView:(id)view;	// 0x33976e59
- (void)resetGeolocation;	// 0x33977cd1
- (void)resume;	// 0x339766f5
- (void)setEnableHighAccuracy:(BOOL)accuracy;	// 0x33977085
- (void)stopTrackingWebView:(id)view;	// 0x3397729d
- (void)suspend;	// 0x339448ed
- (void)unregisterWebView:(id)view;	// 0x33976fb1
@end
