/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject {
	GEODirectionsFeedback *_currentDirectionsFeedback;	// 4 = 0x4
	GEODirectionsFeedbackCollection *_currentFeedbackCollection;	// 8 = 0x8
	NSMutableSet *_routeIDs;	// 12 = 0xc
}
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback;	// G=0x34b4a8fd; S=0x34b4a90d; @synthesize=_currentDirectionsFeedback
@property(retain, nonatomic) GEODirectionsFeedbackCollection *currentFeedbackCollection;	// G=0x34b4a8dd; S=0x34b4a8ed; @synthesize=_currentFeedbackCollection
@property(retain, nonatomic) NSMutableSet *routeIDs;	// G=0x34b4a91d; S=0x34b4a92d; @synthesize=_routeIDs
- (void)addRouteID:(id)anId stepID:(unsigned)anId2;	// 0x34b4a78d
// declared property getter: - (id)currentDirectionsFeedback;	// 0x34b4a8fd
// declared property getter: - (id)currentFeedbackCollection;	// 0x34b4a8dd
- (void)dealloc;	// 0x34b4a58d
- (void)endFeedbackSession;	// 0x34b4a865
- (void)reset;	// 0x34b4a5cd
// declared property getter: - (id)routeIDs;	// 0x34b4a91d
// declared property setter: - (void)setCurrentDirectionsFeedback:(id)feedback;	// 0x34b4a90d
// declared property setter: - (void)setCurrentFeedbackCollection:(id)collection;	// 0x34b4a8ed
// declared property setter: - (void)setRouteIDs:(id)ids;	// 0x34b4a92d
- (void)startFeedbackSessionForResponseID:(id)responseID;	// 0x34b4a639
@end
