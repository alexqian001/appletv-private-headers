/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVCloudQueryHandler.h"
#import <NSObject.h> // Unknown library

@class ML3MusicLibrary;

@protocol ATVCloudQueryHandler
+ (id)mlPredicatePropertyForATVProperty:(CFStringRef)atvproperty;
+ (id)mlPropertyForATVProperty:(CFStringRef)atvproperty;
+ (id)mlQueryPropertyForATVProperty:(CFStringRef)atvproperty;
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context;
@end

__attribute__((visibility("hidden")))
@interface ATVCloudQueryHandler : NSObject <ATVCloudQueryHandler> {
@private
	ML3MusicLibrary *mlLibrary;	// 4 = 0x4
	ATVDataClientRef cloudDataClient;	// 8 = 0x8
}
@property(retain, nonatomic) ATVDataClientRef cloudDataClient;	// G=0x333052bd; S=0x333052cd; @synthesize
@property(retain, nonatomic) ML3MusicLibrary *mlLibrary;	// G=0x33305289; S=0x33305299; @synthesize
+ (id)mlPredicatePropertyForATVProperty:(CFStringRef)atvproperty;	// 0x33305281
+ (id)mlPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x33305285
+ (id)mlQueryPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x3330527d
- (id)initWithLibrary:(id)library cloudDataClient:(ATVDataClientRef)client;	// 0x3330493d
// declared property getter: - (ATVDataClientRef)cloudDataClient;	// 0x333052bd
- (void)dealloc;	// 0x3330499d
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context;	// 0x33305279
- (int)mlComparisonForATVOperator:(int)atvoperator;	// 0x333051ed
// declared property getter: - (id)mlLibrary;	// 0x33305289
- (unsigned long)mlMediaTypeForATVMediaType:(ATVMediaTypeRef)atvmediaType;	// 0x3330521d
- (id)predicateForCompoundFilter:(ATVMediaCompoundFilterRef)compoundFilter;	// 0x3330506d
- (id)predicateForFilter:(ATVMediaFilterRef)filter;	// 0x33304b2d
- (id)predicateFromATVFilters:(id)atvfilters;	// 0x333049f5
- (id)predicateFromPredicates:(id)predicates withOperator:(int)anOperator;	// 0x3330516d
// declared property setter: - (void)setCloudDataClient:(ATVDataClientRef)client;	// 0x333052cd
// declared property setter: - (void)setMlLibrary:(id)library;	// 0x33305299
@end
