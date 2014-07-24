/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSError;

__attribute__((visibility("hidden")))
@interface ATVOAuth2TokenResponse : XXUnknownSuperclass {
	NSString *_accessToken;	// 4 = 0x4
	NSString *_refreshToken;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
	double _expiresIn;	// 16 = 0x10
}
@property(retain) NSString *accessToken;	// G=0x34c89; S=0x34c9d; @synthesize=_accessToken
@property(retain) NSError *error;	// G=0x34d39; S=0x34d4d; @synthesize=_error
@property(assign) double expiresIn;	// G=0x34cd1; S=0x34d05; @synthesize=_expiresIn
@property(retain) NSString *refreshToken;	// G=0x34cad; S=0x34cc1; @synthesize=_refreshToken
+ (id)tokenResponseFromResponse:(id)response data:(id)data;	// 0x34a51
// declared property getter: - (id)accessToken;	// 0x34c89
- (void)dealloc;	// 0x34c11
// declared property getter: - (id)error;	// 0x34d39
// declared property getter: - (double)expiresIn;	// 0x34cd1
// declared property getter: - (id)refreshToken;	// 0x34cad
// declared property setter: - (void)setAccessToken:(id)token;	// 0x34c9d
// declared property setter: - (void)setError:(id)error;	// 0x34d4d
// declared property setter: - (void)setExpiresIn:(double)anIn;	// 0x34d05
// declared property setter: - (void)setRefreshToken:(id)token;	// 0x34cc1
@end
