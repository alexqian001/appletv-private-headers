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
@property(readonly, assign) NSMutableSet *outstandingTaskGroups;	// G=0x34226b09; @synthesize=_outstandingTaskGroups
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x34226af5; @synthesize=_principal
- (id)init;	// 0x342266d5
- (id)initWithPrincipal:(id)principal;	// 0x34226751
- (void)_tearDownAllTaskGroupsWithBlock:(id)block;	// 0x342268e9
- (void)bailWithError:(id)error;	// 0x34226a4d
- (void)cancelTaskGroup;	// 0x342269ed
- (void)dealloc;	// 0x342267f9
// declared property getter: - (id)outstandingTaskGroups;	// 0x34226b09
// declared property getter: - (id)principal;	// 0x34226af5
@end

