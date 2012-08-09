/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

@interface GEORating : PBCodable {
	double _maxScore;	// 4 = 0x4
	double _score;	// 12 = 0xc
	int _numberOfRatings;	// 20 = 0x14
	int _numberOfReviews;	// 24 = 0x18
	NSString *_provider;	// 28 = 0x1c
	NSMutableArray *_reviews;	// 32 = 0x20
	NSString *_uRL;	// 36 = 0x24
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL hasMaxScore;	// G=0x34549571; S=0x34549555; 
@property(assign, nonatomic) BOOL hasNumberOfRatings;	// G=0x345495cd; S=0x345495ad; 
@property(assign, nonatomic) BOOL hasNumberOfReviews;	// G=0x34549725; S=0x34549705; 
@property(readonly, assign, nonatomic) BOOL hasProvider;	// G=0x345495e1; 
@property(assign, nonatomic) BOOL hasScore;	// G=0x345494d9; S=0x345494b9; 
@property(readonly, assign, nonatomic) BOOL hasURL;	// G=0x345495f9; 
@property(assign, nonatomic) double maxScore;	// G=0x345494ed; S=0x34549521; @synthesize=_maxScore
@property(assign, nonatomic) int numberOfRatings;	// G=0x3454a7b1; S=0x34549585; @synthesize=_numberOfRatings
@property(assign, nonatomic) int numberOfReviews;	// G=0x3454a821; S=0x345496dd; @synthesize=_numberOfReviews
@property(retain, nonatomic) NSString *provider;	// G=0x3454a7c1; S=0x3454a7d1; @synthesize=_provider
@property(retain, nonatomic) NSMutableArray *reviews;	// G=0x3454a801; S=0x3454a811; @synthesize=_reviews
@property(assign, nonatomic) double score;	// G=0x3454a799; S=0x34549485; @synthesize=_score
@property(retain, nonatomic) NSString *uRL;	// G=0x3454a7e1; S=0x3454a7f1; @synthesize=_uRL
- (void)addReview:(id)review;	// 0x34549631
- (void)clearReviews;	// 0x34549611
- (void)copyTo:(id)to;	// 0x3454a1e1
- (void)dealloc;	// 0x34549419
- (id)description;	// 0x34549739
- (id)dictionaryRepresentation;	// 0x345497a9
// declared property getter: - (BOOL)hasMaxScore;	// 0x34549571
// declared property getter: - (BOOL)hasNumberOfRatings;	// 0x345495cd
// declared property getter: - (BOOL)hasNumberOfReviews;	// 0x34549725
// declared property getter: - (BOOL)hasProvider;	// 0x345495e1
// declared property getter: - (BOOL)hasScore;	// 0x345494d9
// declared property getter: - (BOOL)hasURL;	// 0x345495f9
- (unsigned)hash;	// 0x3454a5a1
- (BOOL)isEqual:(id)equal;	// 0x3454a3e1
// declared property getter: - (double)maxScore;	// 0x345494ed
// declared property getter: - (int)numberOfRatings;	// 0x3454a7b1
// declared property getter: - (int)numberOfReviews;	// 0x3454a821
// declared property getter: - (id)provider;	// 0x3454a7c1
- (BOOL)readFrom:(id)from;	// 0x34549f75
- (id)reviewAtIndex:(unsigned)index;	// 0x345496bd
// declared property getter: - (id)reviews;	// 0x3454a801
- (unsigned)reviewsCount;	// 0x3454969d
// declared property getter: - (double)score;	// 0x3454a799
// declared property setter: - (void)setHasMaxScore:(BOOL)score;	// 0x34549555
// declared property setter: - (void)setHasNumberOfRatings:(BOOL)ratings;	// 0x345495ad
// declared property setter: - (void)setHasNumberOfReviews:(BOOL)reviews;	// 0x34549705
// declared property setter: - (void)setHasScore:(BOOL)score;	// 0x345494b9
// declared property setter: - (void)setMaxScore:(double)score;	// 0x34549521
// declared property setter: - (void)setNumberOfRatings:(int)ratings;	// 0x34549585
// declared property setter: - (void)setNumberOfReviews:(int)reviews;	// 0x345496dd
// declared property setter: - (void)setProvider:(id)provider;	// 0x3454a7d1
// declared property setter: - (void)setReviews:(id)reviews;	// 0x3454a811
// declared property setter: - (void)setScore:(double)score;	// 0x34549485
// declared property setter: - (void)setURL:(id)url;	// 0x3454a7f1
// declared property getter: - (id)uRL;	// 0x3454a7e1
- (void)writeTo:(id)to;	// 0x34549f81
@end
