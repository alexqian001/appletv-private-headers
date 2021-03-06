/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"

@class NSString, NSSet;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate {
	NSString *_searchString;	// 4 = 0x4
	NSSet *_properties;	// 8 = 0x8
}
@property(copy, nonatomic) NSSet *properties;	// G=0x3370a91d; S=0x3370a931; @synthesize=_properties
@property(copy, nonatomic) NSString *searchString;	// G=0x3370a8f9; S=0x3370a90d; @synthesize=_searchString
+ (id)predicateWithSearchString:(id)searchString forProperties:(id)properties;	// 0x3370a471
- (id)initWithCoder:(id)coder;	// 0x3370a64d
- (id)ML3PredicateForContainer;	// 0x3374eb71
- (id)ML3PredicateForTrack;	// 0x3374eb35
- (id)_ML3PredicateForEntityClass:(Class)entityClass;	// 0x3374e9d5
- (void)dealloc;	// 0x3370a5e9
- (id)description;	// 0x3370a7c5
- (void)encodeWithCoder:(id)coder;	// 0x3370a725
- (unsigned)hash;	// 0x3370a8b9
- (BOOL)isEqual:(id)equal;	// 0x3370a831
// declared property getter: - (id)properties;	// 0x3370a91d
// declared property getter: - (id)searchString;	// 0x3370a8f9
// declared property setter: - (void)setProperties:(id)properties;	// 0x3370a931
// declared property setter: - (void)setSearchString:(id)string;	// 0x3370a90d
@end

