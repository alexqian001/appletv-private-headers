/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSArray, SSAuthenticationContext;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {
	SSAuthenticationContext *_authenticationContext;	// 28 = 0x1c
	NSArray *_redeemCodes;	// 32 = 0x20
}
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x3283dc01; S=0x3283ddf1; 
@property(readonly, assign) NSArray *redeemCodes;	// G=0x3283ddb9; 
- (id)initWithRedeemCodes:(id)redeemCodes;	// 0x3283db49
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3283e0b5
// declared property getter: - (id)authenticationContext;	// 0x3283dc01
- (id)copyXPCEncoding;	// 0x3283e1a9
- (void)dealloc;	// 0x3283db9d
// declared property getter: - (id)redeemCodes;	// 0x3283ddb9
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3283ddf1
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3283e03d
- (void)startWithRedeemResponseBlock:(id)redeemResponseBlock;	// 0x3283ded1
@end
