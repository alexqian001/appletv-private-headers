/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SALocalSearchRating, NSNumber, NSString, NSArray, NSURL;

@interface SALocalSearchReviewList : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *providerId;	// G=0x353f7349; S=0x353f73c5; 
@property(copy, nonatomic) NSString *providerId2;	// G=0x353f7425; S=0x353f7441; 
@property(retain, nonatomic) SALocalSearchRating *rating;	// G=0x353f7491; S=0x353f74e5; 
@property(copy, nonatomic) NSArray *selectReviews;	// G=0x353f7521; S=0x353f759d; 
@property(copy, nonatomic) NSNumber *totalReviewCount;	// G=0x353f7605; S=0x353f7621; 
+ (id)reviewList;	// 0x353f72b9
+ (id)reviewListWithDictionary:(id)dictionary context:(id)context;	// 0x353f72fd
- (id)encodedClassName;	// 0x353f72ad
- (id)groupIdentifier;	// 0x353f729d
// declared property getter: - (id)providerId;	// 0x353f7349
// declared property getter: - (id)providerId2;	// 0x353f7425
// declared property getter: - (id)rating;	// 0x353f7491
// declared property getter: - (id)selectReviews;	// 0x353f7521
// declared property setter: - (void)setProviderId2:(id)a2;	// 0x353f7441
// declared property setter: - (void)setProviderId:(id)anId;	// 0x353f73c5
// declared property setter: - (void)setRating:(id)rating;	// 0x353f74e5
// declared property setter: - (void)setSelectReviews:(id)reviews;	// 0x353f759d
// declared property setter: - (void)setTotalReviewCount:(id)count;	// 0x353f7621
// declared property getter: - (id)totalReviewCount;	// 0x353f7605
@end

