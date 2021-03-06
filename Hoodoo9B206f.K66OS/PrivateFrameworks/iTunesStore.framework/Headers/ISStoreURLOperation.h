/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _urlKnownToBeTrusted;	// 107 = 0x6b
	BOOL _useUserSpecificURLBag;	// 108 = 0x6c
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x30106d81; S=0x30106d95; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x3010549d; S=0x301054d9; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x30106db9; S=0x30106dc9; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x30106dd9; S=0x30106de9; @synthesize=_needsURLBag
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x30106df9; S=0x30106e09; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x30106e19; S=0x30106e29; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x30105cf1
+ (id)_restrictionsHeaderValue;	// 0x30106129
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x30105031
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x30105071
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x30105179
+ (id)pingOperationWithUrl:(id)url;	// 0x30105311
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x301053c1
- (id)init;	// 0x30104f91
- (id)_account;	// 0x30106449
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x301064b1
- (BOOL)_authenticateReturningError:(id *)error;	// 0x30106709
- (BOOL)_canSendTokenToURL:(id)url;	// 0x301067e1
- (id)_copyAuthenticationContext;	// 0x3010555d
- (id)_copyURLBagContext;	// 0x30106845
- (void)_runURLOperation;	// 0x30106969
- (id)_storeFrontIdentifier;	// 0x30106c91
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x30106d21
- (id)authenticatedAccountDSID;	// 0x30105519
// declared property getter: - (id)authenticatedDSID;	// 0x30106d81
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x3010549d
- (void)dealloc;	// 0x30104fdd
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider error:(id *)error;	// 0x301056c9
- (void)handleResponse:(id)response;	// 0x3010587d
// declared property getter: - (BOOL)needsAuthentication;	// 0x30106db9
// declared property getter: - (BOOL)needsURLBag;	// 0x30106dd9
- (id)newRequestWithURL:(id)url;	// 0x301058ed
- (void)run;	// 0x30105ac1
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x30106d95
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x301054d9
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x30106dc9
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x30106de9
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x30106e09
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x30106e29
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x30105c11
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x30106df9
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x30106e19
@end

