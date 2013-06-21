/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {
	NSMutableSet *_responses;	// 28 = 0x1c
	NSMutableSet *_successfulICS;	// 32 = 0x20
	NSMutableSet *_failedResponseItems;	// 36 = 0x24
}
@property(retain) NSMutableSet *failedResponseItems;	// G=0x3358c18d; S=0x3358c1a1; @synthesize=_failedResponseItems
@property(retain) NSMutableSet *responses;	// G=0x3358c145; S=0x3358c159; @synthesize=_responses
@property(retain) NSMutableSet *successfulICS;	// G=0x3358c169; S=0x3358c17d; @synthesize=_successfulICS
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3358bd1d
- (void)addNewTopLevelItem:(id)item;	// 0x3358be91
- (id)copyParseRules;	// 0x3358bd8d
- (void)dealloc;	// 0x3358bcb1
- (id)description;	// 0x3358c0d5
// declared property getter: - (id)failedResponseItems;	// 0x3358c18d
// declared property getter: - (id)responses;	// 0x3358c145
// declared property setter: - (void)setFailedResponseItems:(id)items;	// 0x3358c1a1
// declared property setter: - (void)setResponses:(id)responses;	// 0x3358c159
// declared property setter: - (void)setSuccessfulICS:(id)ics;	// 0x3358c17d
// declared property getter: - (id)successfulICS;	// 0x3358c169
@end
