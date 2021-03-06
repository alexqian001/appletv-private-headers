/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVMultiStatusItem.h"

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {
	NSString *_syncToken;	// 32 = 0x20
}
@property(readonly, assign) NSString *syncToken;	// G=0x30078a01; @synthesize=_syncToken
- (void)_setSyncTokenItem:(id)item;	// 0x300789a9
- (id)copyParseRules;	// 0x30078831
- (void)dealloc;	// 0x30078731
- (id)description;	// 0x3007877d
// declared property getter: - (id)syncToken;	// 0x30078a01
@end

