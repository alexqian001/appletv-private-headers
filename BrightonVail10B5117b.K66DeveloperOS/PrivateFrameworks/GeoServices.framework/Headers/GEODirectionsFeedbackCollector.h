/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEODirectionsFeedback, NSMutableSet, GEODirectionsFeedbackCollection;

@interface GEODirectionsFeedbackCollector : NSObject {
	GEODirectionsFeedback *_currentDirectionsFeedback;	// 4 = 0x4
	GEODirectionsFeedbackCollection *_currentFeedbackCollection;	// 8 = 0x8
	NSMutableSet *_routeIDs;	// 12 = 0xc
}
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback;	// G=0x341ae75d; S=0x341ae76d; @synthesize=_currentDirectionsFeedback
@property(retain, nonatomic) GEODirectionsFeedbackCollection *currentFeedbackCollection;	// G=0x341ae73d; S=0x341ae74d; @synthesize=_currentFeedbackCollection
@property(retain, nonatomic) NSMutableSet *routeIDs;	// G=0x341ae77d; S=0x341ae78d; @synthesize=_routeIDs
- (void)addRouteID:(id)anId stepID:(unsigned)anId2;	// 0x341ae5ed
// declared property getter: - (id)currentDirectionsFeedback;	// 0x341ae75d
// declared property getter: - (id)currentFeedbackCollection;	// 0x341ae73d
- (void)dealloc;	// 0x341ae3ed
- (void)endFeedbackSession;	// 0x341ae6c5
- (void)reset;	// 0x341ae42d
// declared property getter: - (id)routeIDs;	// 0x341ae77d
// declared property setter: - (void)setCurrentDirectionsFeedback:(id)feedback;	// 0x341ae76d
// declared property setter: - (void)setCurrentFeedbackCollection:(id)collection;	// 0x341ae74d
// declared property setter: - (void)setRouteIDs:(id)ids;	// 0x341ae78d
- (void)startFeedbackSessionForResponseID:(id)responseID;	// 0x341ae499
@end

