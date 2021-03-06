/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library

@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup {
	id<CalDAVPrincipal> _principal;	// 44 = 0x2c
	BOOL _isCancellingTaskGroups;	// 48 = 0x30
	NSMutableSet *_outstandingTaskGroups;	// 52 = 0x34
}
@property(readonly, assign) NSMutableSet *outstandingTaskGroups;	// G=0x33599b09; @synthesize=_outstandingTaskGroups
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x33599af5; @synthesize=_principal
- (id)init;	// 0x335996d5
- (id)initWithPrincipal:(id)principal;	// 0x33599751
- (void)_tearDownAllTaskGroupsWithBlock:(id)block;	// 0x335998e9
- (void)bailWithError:(id)error;	// 0x33599a4d
- (void)cancelTaskGroup;	// 0x335999ed
- (void)dealloc;	// 0x335997f9
// declared property getter: - (id)outstandingTaskGroups;	// 0x33599b09
// declared property getter: - (id)principal;	// 0x33599af5
@end

