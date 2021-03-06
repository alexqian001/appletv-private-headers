/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class SSAuthenticationContext, NSString, SSLookupProperties;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {
	BOOL _authenticatesIfNeeded;	// 28 = 0x1c
	SSAuthenticationContext *_authenticationContext;	// 32 = 0x20
	SSLookupProperties *_properties;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) SSLookupProperties *_lookupProperties;	// G=0x37849645; 
@property(assign, nonatomic) BOOL authenticatesIfNeeded;	// G=0x37849815; S=0x37849825; @synthesize=_authenticatesIfNeeded
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext;	// G=0x37849835; S=0x37849849; @synthesize=_authenticationContext
@property(copy, nonatomic) NSString *keyProfile;	// G=0x378490e5; S=0x37849125; 
@property(assign, nonatomic) int localizationStyle;	// G=0x37849105; S=0x37849145; 
- (id)init;	// 0x37848ff5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x378496f5
// declared property getter: - (id)_lookupProperties;	// 0x37849645
// declared property getter: - (BOOL)authenticatesIfNeeded;	// 0x37849815
// declared property getter: - (id)authenticationContext;	// 0x37849835
- (id)copyXPCEncoding;	// 0x3784967d
- (void)dealloc;	// 0x37849081
// declared property getter: - (id)keyProfile;	// 0x378490e5
// declared property getter: - (int)localizationStyle;	// 0x37849105
// declared property setter: - (void)setAuthenticatesIfNeeded:(BOOL)needed;	// 0x37849825
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x37849849
// declared property setter: - (void)setKeyProfile:(id)profile;	// 0x37849125
// declared property setter: - (void)setLocalizationStyle:(int)style;	// 0x37849145
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x37849165
- (BOOL)start;	// 0x37849351
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x378494ed
- (void)startWithLookupBlock:(id)lookupBlock;	// 0x37849185
- (id)valueForRequestParameter:(id)requestParameter;	// 0x37849331
@end

