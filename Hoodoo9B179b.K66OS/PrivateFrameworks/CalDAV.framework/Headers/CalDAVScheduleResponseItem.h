/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {
	NSMutableSet *_responses;	// 24 = 0x18
	NSMutableSet *_successfulICS;	// 28 = 0x1c
	NSMutableSet *_failedResponseItems;	// 32 = 0x20
}
@property(retain) NSMutableSet *failedResponseItems;	// G=0x35a8b331; S=0x35a8b30d; @synthesize=_failedResponseItems
@property(retain) NSMutableSet *responses;	// G=0x35a8b2b9; S=0x35a8b295; @synthesize=_responses
@property(retain) NSMutableSet *successfulICS;	// G=0x35a8b2f5; S=0x35a8b2d1; @synthesize=_successfulICS
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35a8b601
- (void)addNewTopLevelItem:(id)item;	// 0x35a8b3b9
- (id)copyParseRules;	// 0x35a8a925
- (void)dealloc;	// 0x35a8b22d
- (id)description;	// 0x35a8b349
// declared property getter: - (id)failedResponseItems;	// 0x35a8b331
// declared property getter: - (id)responses;	// 0x35a8b2b9
// declared property setter: - (void)setFailedResponseItems:(id)items;	// 0x35a8b30d
// declared property setter: - (void)setResponses:(id)responses;	// 0x35a8b295
// declared property setter: - (void)setSuccessfulICS:(id)ics;	// 0x35a8b2d1
// declared property getter: - (id)successfulICS;	// 0x35a8b2f5
@end
