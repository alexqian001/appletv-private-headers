/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASMeetingResponseSingularResponse : ASItem {
	NSString *_requestId;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_eventId;	// 48 = 0x30
}
@property(retain) NSString *eventId;	// G=0x343d68f1; S=0x343d6905; @synthesize=_eventId
@property(retain) NSString *requestId;	// G=0x343d6881; S=0x343d6895; @synthesize=_requestId
@property(retain) NSNumber *status;	// G=0x343d68b9; S=0x343d68cd; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x343d63cd
+ (BOOL)frontingBasicTypes;	// 0x343d64c9
+ (BOOL)notifyOfUnknownTokens;	// 0x343d651d
+ (BOOL)parsingLeafNode;	// 0x343d6421
+ (BOOL)parsingWithSubItems;	// 0x343d6475
- (id)asParseRules;	// 0x343d6571
- (void)dealloc;	// 0x343d680d
- (id)description;	// 0x343d6785
// declared property getter: - (id)eventId;	// 0x343d68f1
// declared property getter: - (id)requestId;	// 0x343d6881
// declared property setter: - (void)setEventId:(id)anId;	// 0x343d6905
// declared property setter: - (void)setRequestId:(id)anId;	// 0x343d6895
// declared property setter: - (void)setStatus:(id)status;	// 0x343d68cd
// declared property getter: - (id)status;	// 0x343d68b9
@end

