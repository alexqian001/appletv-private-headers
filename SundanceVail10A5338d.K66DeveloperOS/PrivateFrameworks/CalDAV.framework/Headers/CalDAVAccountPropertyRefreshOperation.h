/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@protocol CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
	BOOL _fetchPrincipalSearchProperties;	// 56 = 0x38
}
@property(assign, nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;	// @dynamic
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x338e42b9; S=0x338e42d1; @synthesize=_fetchPrincipalSearchProperties
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x338e42b9
- (void)getAccountPropertiesTask:(id)task completedWithError:(id)error;	// 0x338e3f35
- (void)refreshProperties;	// 0x338e3e51
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x338e42d1
@end

