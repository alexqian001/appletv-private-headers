/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject {
	int _state;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
	NSRange _range;	// 12 = 0xc
	int _timeLimit;	// 20 = 0x14
	NSString *_searchID;	// 24 = 0x18
	id<DASearchQueryConsumer> _consumer;	// 28 = 0x1c
}
@property(assign) id<DASearchQueryConsumer> consumer;	// G=0x34b3f7a5; S=0x34b3f7b9; @synthesize=_consumer
@property(assign) unsigned maxResults;	// G=0x34b3f69d; S=0x34b3f6b1; 
@property(assign) NSRange range;	// G=0x34b3f6fd; S=0x34b3f721; @synthesize=_range
@property(copy) NSString *searchID;	// G=0x34b3f6c5; S=0x34b3f6d9; @synthesize=_searchID
@property(readonly, assign) NSString *searchString;	// G=0x34b3f6e9; @synthesize=_searchString
@property(assign) int state;	// G=0x34b3f779; S=0x34b3f78d; @synthesize=_state
@property(assign) int timeLimit;	// G=0x34b3f74d; S=0x34b3f761; @synthesize=_timeLimit
+ (id)searchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x34b3f1d9
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x34b3f3c5
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x34b3f225
// declared property getter: - (id)consumer;	// 0x34b3f7a5
- (void)dealloc;	// 0x34b3f2d9
- (id)description;	// 0x34b3f34d
- (id)dictionaryRepresentation;	// 0x34b3f569
- (BOOL)isQueryRunning;	// 0x34b3f4e1
// declared property getter: - (unsigned)maxResults;	// 0x34b3f69d
// declared property getter: - (NSRange)range;	// 0x34b3f6fd
// declared property getter: - (id)searchID;	// 0x34b3f6c5
// declared property getter: - (id)searchString;	// 0x34b3f6e9
- (void)sendFinishedToConsumerWithError:(id)error;	// 0x34b3f531
- (void)sendResultsToConsumer:(id)consumer;	// 0x34b3f4f9
// declared property setter: - (void)setConsumer:(id)consumer;	// 0x34b3f7b9
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x34b3f6b1
// declared property setter: - (void)setRange:(NSRange)range;	// 0x34b3f721
// declared property setter: - (void)setSearchID:(id)anId;	// 0x34b3f6d9
// declared property setter: - (void)setState:(int)state;	// 0x34b3f78d
// declared property setter: - (void)setTimeLimit:(int)limit;	// 0x34b3f761
// declared property getter: - (int)state;	// 0x34b3f779
// declared property getter: - (int)timeLimit;	// 0x34b3f74d
@end
