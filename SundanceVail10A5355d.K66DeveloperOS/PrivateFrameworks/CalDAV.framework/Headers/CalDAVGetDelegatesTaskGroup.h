/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVGetDelegatesBaseTaskGroup.h"

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
	int _state;	// 68 = 0x44
	NSMutableArray *_nestedGroupPrincipalURLs;	// 72 = 0x48
}
@property(retain) NSMutableArray *nestedGroupPrincipalURLs;	// G=0x31425e59; S=0x31425e6d; @synthesize=_nestedGroupPrincipalURLs
@property(assign) int state;	// G=0x31425e2d; S=0x31425e41; @synthesize=_state
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x31425325
- (void)_expandProperties;	// 0x31425409
- (void)_finishWithError:(id)error state:(int)state;	// 0x314253a5
- (void)_getChildProperties;	// 0x314256f1
- (void)_getGroupMembershipForURL:(id)url state:(int)state;	// 0x31425569
- (void)dealloc;	// 0x314252d9
// declared property getter: - (id)nestedGroupPrincipalURLs;	// 0x31425e59
// declared property setter: - (void)setNestedGroupPrincipalURLs:(id)urls;	// 0x31425e6d
// declared property setter: - (void)setState:(int)state;	// 0x31425e41
- (void)startTaskGroup;	// 0x314257ed
// declared property getter: - (int)state;	// 0x31425e2d
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3142584d
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x31425d3d
@end

