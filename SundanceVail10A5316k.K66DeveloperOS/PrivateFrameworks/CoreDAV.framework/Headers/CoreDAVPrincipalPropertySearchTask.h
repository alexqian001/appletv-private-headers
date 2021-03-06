/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {
	NSSet *_searchItems;	// 140 = 0x8c
	BOOL _applyToPrincipalCollectionSet;	// 144 = 0x90
	NSDictionary *_extraAttributes;	// 148 = 0x94
}
@property(assign) BOOL applyToPrincipalCollectionSet;	// G=0x35f7d181; S=0x35f7d199; @synthesize=_applyToPrincipalCollectionSet
@property(retain) NSDictionary *extraAttributes;	// G=0x35f7d15d; S=0x35f7d171; @synthesize=_extraAttributes
@property(retain) NSSet *searchItems;	// G=0x35f7d139; S=0x35f7d14d; @synthesize=_searchItems
- (id)initWithPropertiesToFind:(id)find atURL:(id)url;	// 0x35f7cd15
- (id)initWithPropertySearches:(id)propertySearches propertiesToFind:(id)find atURL:(id)url applyToPrincipalCollectionSet:(BOOL)principalCollectionSet extraAttributes:(id)attributes;	// 0x35f7cdbd
// declared property getter: - (BOOL)applyToPrincipalCollectionSet;	// 0x35f7d181
- (void)dealloc;	// 0x35f7cd59
// declared property getter: - (id)extraAttributes;	// 0x35f7d15d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35f7d0f5
- (id)httpMethod;	// 0x35f7ce2d
- (id)requestBody;	// 0x35f7ce39
// declared property getter: - (id)searchItems;	// 0x35f7d139
// declared property setter: - (void)setApplyToPrincipalCollectionSet:(BOOL)principalCollectionSet;	// 0x35f7d199
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x35f7d171
// declared property setter: - (void)setSearchItems:(id)items;	// 0x35f7d14d
@end

