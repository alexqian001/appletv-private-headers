/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSDictionary, MUMathExpressionDoubleBased, NSMutableDictionary, NSMutableArray, MCContainerParallelizer, NSString;

@interface MPAnimatedSet : NSObject <NSCoding> {
	NSString *mAnimatedSetID;	// 4 = 0x4
	NSDictionary *mDescription;	// 8 = 0x8
	MUMathExpressionDoubleBased *mTimeOfGoodPositionFormula;	// 12 = 0xc
	BOOL mTimeWraps;	// 16 = 0x10
	NSMutableDictionary *mSlides;	// 20 = 0x14
	NSMutableArray *mFeaturedSlidePositions;	// 24 = 0x18
	NSMutableArray *mFeaturingAttributes;	// 28 = 0x1c
	double mStartTime;	// 32 = 0x20
	double mIntroDuration;	// 40 = 0x28
	double mMainDuration;	// 48 = 0x30
	double mOutroDuration;	// 56 = 0x38
	double mTotalNumberOfIntervals;	// 64 = 0x40
	double mDefaultFeaturingDuration;	// 72 = 0x48
	double mDefaultFeaturingAnimationDuration;	// 80 = 0x50
	NSDictionary *mDefaultFeaturingAnimationAttributes;	// 88 = 0x58
	NSDictionary *mAttributes;	// 92 = 0x5c
	BOOL mEaseInEaseOutBetweenFeaturedSlides;	// 96 = 0x60
	BOOL mFirstSlideIsShared;	// 97 = 0x61
	BOOL mLastSlideIsShared;	// 98 = 0x62
	NSString *mIntroAnimationID;	// 100 = 0x64
	NSString *mOutroAnimationID;	// 104 = 0x68
	float mDistance;	// 108 = 0x6c
	float mSpeed;	// 112 = 0x70
	MCContainerParallelizer *mContainer;	// 116 = 0x74
}
@property(readonly, assign) NSString *animatedSetID;	// G=0x3425bdbd; @synthesize=mAnimatedSetID
@property(copy) NSDictionary *attributes;	// G=0x3425bf15; S=0x3425bf29; @synthesize=mAttributes
@property(readonly, assign) MCContainerParallelizer *container;	// G=0x3425c05d; @synthesize=mContainer
@property(assign) double defaultFeaturingAnimationDuration;	// G=0x3425bead; S=0x3425bee1; @synthesize=mDefaultFeaturingAnimationDuration
@property(assign) double defaultFeaturingDuration;	// G=0x3425be45; S=0x3425be79; @synthesize=mDefaultFeaturingDuration
@property(assign) float distance;	// G=0x3425c01d; S=0x3425c02d; @synthesize=mDistance
@property(assign) BOOL easeInEaseOutBetweenFeaturedSlides;	// G=0x3425bf4d; S=0x3425bf5d; @synthesize=mEaseInEaseOutBetweenFeaturedSlides
@property(assign) BOOL firstSlideIsShared;	// G=0x3425bf6d; S=0x3425bf7d; @synthesize=mFirstSlideIsShared
@property(readonly, assign) double fullDuration;	// G=0x3425bc21; 
@property(copy) NSString *introAnimationID;	// G=0x3425bfad; S=0x3425bfc1; @synthesize=mIntroAnimationID
@property(assign) BOOL lastSlideIsShared;	// G=0x3425bf8d; S=0x3425bf9d; @synthesize=mLastSlideIsShared
@property(readonly, assign) unsigned maximumNumberOfSlides;	// G=0x34259989; 
@property(readonly, assign) unsigned minimumNumberOfSlides;	// G=0x34259985; 
@property(readonly, assign) BOOL needsEvenNumberOfSlides;	// G=0x3425998d; 
@property(copy) NSString *outroAnimationID;	// G=0x3425bfe5; S=0x3425bff9; @synthesize=mOutroAnimationID
@property(assign) float speed;	// G=0x3425c03d; S=0x3425c04d; @synthesize=mSpeed
@property(assign) double startTime;	// G=0x3425bddd; S=0x3425be11; @synthesize=mStartTime
@property(readonly, assign) BOOL timeWraps;	// G=0x3425bdcd; @synthesize=mTimeWraps
- (id)initWithAnimatedSetID:(id)animatedSetID;	// 0x34258e35
- (id)initWithCoder:(id)coder;	// 0x342593c9
// declared property getter: - (id)animatedSetID;	// 0x3425bdbd
- (void)applyIntroAnimationPathsToPlug:(id)plug atPosition:(unsigned)position;	// 0x3425b165
// declared property getter: - (id)attributes;	// 0x3425bf15
- (void)chooseAnIntroAnimation;	// 0x3425bc65
- (void)chooseAnOutroAnimation;	// 0x3425bd11
- (void)computeAnimationPathsForTime:(double)time andPosition:(unsigned)position usingAnimationPaths:(id)paths otherAttributes:(id)attributes plugTimeOffset:(double)offset plugTimeOffsetKind:(int)kind plugAnimationPaths:(id)paths7;	// 0x3425a765
// declared property getter: - (id)container;	// 0x3425c05d
- (void)dealloc;	// 0x3425978d
- (void)decodeFromSlides:(id)slides;	// 0x34259991
// declared property getter: - (double)defaultFeaturingAnimationDuration;	// 0x3425bead
// declared property getter: - (double)defaultFeaturingDuration;	// 0x3425be45
// declared property getter: - (float)distance;	// 0x3425c01d
// declared property getter: - (BOOL)easeInEaseOutBetweenFeaturedSlides;	// 0x3425bf4d
- (void)encodeWithCoder:(id)coder;	// 0x342590a9
- (double)featuringTimeForSlideAtPosition:(unsigned)position;	// 0x34259db9
// declared property getter: - (BOOL)firstSlideIsShared;	// 0x3425bf6d
// declared property getter: - (double)fullDuration;	// 0x3425bc21
- (void)insertIntoContainer:(id)container;	// 0x3425a3a5
// declared property getter: - (id)introAnimationID;	// 0x3425bfad
// declared property getter: - (BOOL)lastSlideIsShared;	// 0x3425bf8d
// declared property getter: - (unsigned)maximumNumberOfSlides;	// 0x34259989
// declared property getter: - (unsigned)minimumNumberOfSlides;	// 0x34259985
// declared property getter: - (BOOL)needsEvenNumberOfSlides;	// 0x3425998d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x342598bd
// declared property getter: - (id)outroAnimationID;	// 0x3425bfe5
- (void)removeAllSlides;	// 0x34259ccd
- (void)removeSlideAtPosition:(unsigned)position;	// 0x34259b9d
- (void)setAnimationPaths:(id)paths onPlug:(id)plug atPosition:(unsigned)position atTimeOffset:(double)timeOffset withTimeOffsetKind:(int)timeOffsetKind forDuration:(double)duration withFunctionTimeOffset:(double)functionTimeOffset andFunctionTimeFactor:(double)factor easeIn:(BOOL)anIn easeOut:(BOOL)anOut otherAttributes:(id)attributes;	// 0x3425acfd
- (void)setAnimationPathsForPlug:(id)plug atPosition:(unsigned)position;	// 0x3425b2e9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3425bf29
// declared property setter: - (void)setDefaultFeaturingAnimationDuration:(double)duration;	// 0x3425bee1
// declared property setter: - (void)setDefaultFeaturingDuration:(double)duration;	// 0x3425be79
// declared property setter: - (void)setDistance:(float)distance;	// 0x3425c02d
// declared property setter: - (void)setEaseInEaseOutBetweenFeaturedSlides:(BOOL)easeOutBetweenFeaturedSlides;	// 0x3425bf5d
// declared property setter: - (void)setFirstSlideIsShared:(BOOL)shared;	// 0x3425bf7d
// declared property setter: - (void)setIntroAnimationID:(id)anId;	// 0x3425bfc1
// declared property setter: - (void)setLastSlideIsShared:(BOOL)shared;	// 0x3425bf9d
// declared property setter: - (void)setOutroAnimationID:(id)anId;	// 0x3425bff9
// declared property setter: - (void)setSpeed:(float)speed;	// 0x3425c04d
// declared property setter: - (void)setStartTime:(double)time;	// 0x3425be11
- (void)showSlide:(id)slide atPosition:(unsigned)position featuringAttributes:(id)attributes;	// 0x34259ae1
- (id)slides;	// 0x34259da9
// declared property getter: - (float)speed;	// 0x3425c03d
// declared property getter: - (double)startTime;	// 0x3425bddd
- (double)time1OfGoodPositionForPosition:(int)position;	// 0x3425c06d
- (double)time2OfGoodPositionForPosition:(int)position;	// 0x3425c269
- (double)timeOfGoodPositionForPosition:(int)position;	// 0x3425b021
// declared property getter: - (BOOL)timeWraps;	// 0x3425bdcd
- (void)updateContainer;	// 0x3425a091
@end
