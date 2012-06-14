/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMSetHttpCookieRequest : PBRequest {
	BOOL _hasGmmInstalled;	// 4 = 0x4
	BOOL _gmmInstalled;	// 5 = 0x5
	BOOL _gmmInvokedViaMimeType;	// 6 = 0x6
	BOOL _gmmInvokedViaUrl;	// 7 = 0x7
}
@property(assign, nonatomic) BOOL gmmInstalled;	// G=0x33a917d1; S=0x33a917f5; @synthesize=_gmmInstalled
@property(assign, nonatomic) BOOL gmmInvokedViaMimeType;	// G=0x33a91b35; S=0x33a91b45; @synthesize=_gmmInvokedViaMimeType
@property(assign, nonatomic) BOOL gmmInvokedViaUrl;	// G=0x33a91b55; S=0x33a91b65; @synthesize=_gmmInvokedViaUrl
@property(assign, nonatomic) BOOL hasGmmInstalled;	// G=0x33a91b15; S=0x33a91b25; @synthesize=_hasGmmInstalled
- (void)dealloc;	// 0x33a917a5
- (id)description;	// 0x33a91819
- (id)dictionaryRepresentation;	// 0x33a91889
// declared property getter: - (BOOL)gmmInstalled;	// 0x33a917d1
// declared property getter: - (BOOL)gmmInvokedViaMimeType;	// 0x33a91b35
// declared property getter: - (BOOL)gmmInvokedViaUrl;	// 0x33a91b55
// declared property getter: - (BOOL)hasGmmInstalled;	// 0x33a91b15
- (BOOL)readFrom:(id)from;	// 0x33a9198d
// declared property setter: - (void)setGmmInstalled:(BOOL)installed;	// 0x33a917f5
// declared property setter: - (void)setGmmInvokedViaMimeType:(BOOL)type;	// 0x33a91b45
// declared property setter: - (void)setGmmInvokedViaUrl:(BOOL)url;	// 0x33a91b65
// declared property setter: - (void)setHasGmmInstalled:(BOOL)installed;	// 0x33a91b25
- (void)writeTo:(id)to;	// 0x33a91a9d
@end
