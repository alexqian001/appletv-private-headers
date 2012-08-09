/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol CalSearchDataSink;

@interface CalSpotlightSearch : NSObject {
	CalDatabase *_database;	// 4 = 0x4
	NSString *_titleString;	// 8 = 0x8
	NSString *_locationString;	// 12 = 0xc
	NSString *_descriptionString;	// 16 = 0x10
	NSString *_participantString;	// 20 = 0x14
	id<CalSearchDataSink> _dataSink;	// 24 = 0x18
	bool _moreResultsAvailable;	// 28 = 0x1c
	bool _onlySearchEvents;	// 29 = 0x1d
	CFArrayRef _partialResults;	// 32 = 0x20
	CFSetRef _matchedEventsSet;	// 36 = 0x24
	CFSetRef _matchedParticipantsSet;	// 40 = 0x28
	CFSetRef _matchedLocationsSet;	// 44 = 0x2c
	bool _implementsCancellationCallback;	// 48 = 0x30
	CFDictionaryRef _closestEventOccurrences;	// 52 = 0x34
	bool _cancelled;	// 56 = 0x38
}
+ (CFDictionaryRef)newQueryCache;	// 0x34b64e41
- (id)initWithDatabase:(CalDatabase *)database searchString:(CFStringRef)string dataSink:(id)sink queryCache:(CFDictionaryRef)cache;	// 0x34b64e59
- (id)initWithDatabase:(CalDatabase *)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 dataSink:(id)sink queryCache:(CFDictionaryRef)cache;	// 0x34b64ff1
- (id)initWithDatabase:(CalDatabase *)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 queryCache:(CFDictionaryRef)cache;	// 0x34b64e89
- (void)_addMatchedLocationIds:(CFArrayRef)ids;	// 0x34b654a1
- (void)_addMatchedParticipantIds:(CFArrayRef)ids;	// 0x34b652a5
- (CalLocationIdsSearchContext *)_createLocationIdsSearchContext;	// 0x34b65429
- (CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;	// 0x34b653b1
- (CalEventSpotlightContext *)_createSpotlightEventsContext;	// 0x34b657f9
- (void)_deleteLocationIdsSearchContext:(CalLocationIdsSearchContext *)context;	// 0x34b6547d
- (void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext *)context;	// 0x34b65405
- (void)_deleteSpotlightEventsContext:(CalEventSpotlightContext *)context;	// 0x34b65989
- (void)_getLocationSearchResults:(CalLocationIdsSearchContext *)results;	// 0x34b654e5
- (void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext *)results;	// 0x34b652e9
- (void)_getSpotlightEvents:(CalEventSpotlightContext *)events callback:(id)callback;	// 0x34b655a9
- (void)_startLoadingResults:(id)results;	// 0x34b65179
- (void)calculateSearchWindow:(CalEventSpotlightContext *)window;	// 0x34b65705
- (void)dealloc;	// 0x34b64ec1
- (void)performWithBlock:(id)block;	// 0x34b64fe1
- (void)startSearching;	// 0x34b64fb9
- (void)stopSearching;	// 0x34b64fcd
@end
