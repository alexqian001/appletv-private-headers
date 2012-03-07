/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class SSURLBagContext, SSNetworkConstraints, NSArray, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface ISURLBag : NSObject {
@private
	SSURLBagContext *_context;	// 4 = 0x4
	SSNetworkConstraints *_defaultConstraints;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSArray *_guidPatterns;	// 16 = 0x10
	NSSet *_guidSchemes;	// 20 = 0x14
	NSDictionary *_headerPatterns;	// 24 = 0x18
	double _invalidationTime;	// 28 = 0x1c
}
@property(copy, nonatomic) SSURLBagContext *URLBagContext;	// G=0x34322d9d; S=0x34322d59; 
@property(readonly, assign, nonatomic) NSDictionary *URLBagDictionary;	// G=0x34322dd5; 
@property(readonly, assign) NSSet *availableStorefrontItemKinds;	// G=0x34321e95; 
@property(assign, nonatomic) double invalidationTime;	// G=0x34323a99; S=0x34323ab1; @synthesize=_invalidationTime
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x34321fb5; 
+ (id)_copyFallbackContextForContext:(id)context;	// 0x34322e0d
+ (void)_loadItemKindURLBagKeyMap;	// 0x34321b8d
+ (id)_urlBagForContext:(id)context;	// 0x343219fd
+ (id)copyExtraHeadersForURL:(id)url inBagContext:(id)bagContext;	// 0x3432282d
+ (void)invalidateAllBags;	// 0x343216e9
+ (id)networkConstraintsForDownloadKind:(id)downloadKind inBagContext:(id)bagContext;	// 0x343228c9
+ (void)setURLBag:(id)bag forContext:(id)context;	// 0x343217bd
+ (BOOL)shouldSendGUIDForURL:(id)url inBagContext:(id)bagContext;	// 0x34322965
+ (id)storeFrontURLBagKeyForItemKind:(id)itemKind;	// 0x34321df5
+ (id)urlBagForContext:(id)context;	// 0x34321abd
+ (id)urlForKey:(id)key inBagContext:(id)bagContext;	// 0x34322a19
+ (BOOL)urlIsTrusted:(id)trusted inBagContext:(id)bagContext;	// 0x34322a8d
+ (id)valueForKey:(id)key inBagContext:(id)bagContext;	// 0x34322b41
- (id)init;	// 0x34320f55
- (id)initWithRawDictionary:(id)rawDictionary;	// 0x34320f9d
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x34321065
// declared property getter: - (id)URLBagContext;	// 0x34322d9d
// declared property getter: - (id)URLBagDictionary;	// 0x34322dd5
- (id)URLForURL:(id)url clientIdentifier:(id)identifier;	// 0x34322611
- (id)_copyGUIDPatternsFromDictionary:(id)dictionary;	// 0x34322e55
- (id)_copyGUIDSchemesFromDictionary:(id)dictionary;	// 0x34322ff5
- (id)_copyHeaderPatternsFromDictionary:(id)dictionary;	// 0x34323135
- (BOOL)_loadFromSignedDictionary:(id)signedDictionary returningError:(id *)error;	// 0x3432330d
- (id)_networkConstraintsCachePath;	// 0x3432356d
- (void)_setDictionary:(id)dictionary;	// 0x34323619
- (void)_writeNetworkConstraintsCacheFile;	// 0x343236bd
- (void)_writeURLResolutionCacheFile;	// 0x34323875
// declared property getter: - (id)availableStorefrontItemKinds;	// 0x34321e95
- (id)copyExtraHeadersForURL:(id)url;	// 0x34321255
- (void)dealloc;	// 0x343211b9
- (void)invalidate;	// 0x34322bdd
// declared property getter: - (double)invalidationTime;	// 0x34323a99
// declared property getter: - (BOOL)isValid;	// 0x34321fb5
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x34321475
- (id)networkConstraintsForDownloadKind:(id)downloadKind;	// 0x34322005
- (id)sanitizedURLForURL:(id)url;	// 0x34322c25
- (id)searchQueryParametersForClientIdentifier:(id)clientIdentifier networkType:(int)type;	// 0x343220d5
// declared property setter: - (void)setInvalidationTime:(double)time;	// 0x34323ab1
// declared property setter: - (void)setURLBagContext:(id)context;	// 0x34322d59
- (BOOL)shouldSendGUIDForURL:(id)url;	// 0x3432230d
- (id)urlForKey:(id)key;	// 0x3432249d
- (BOOL)urlIsTrusted:(id)trusted;	// 0x343224e9
- (id)valueForKey:(id)key;	// 0x3432280d
@end
