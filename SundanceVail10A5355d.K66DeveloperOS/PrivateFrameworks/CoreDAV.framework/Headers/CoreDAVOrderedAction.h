/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVAction.h"

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction {
	int _absoluteOrder;	// 16 = 0x10
	NSURL *_priorURL;	// 20 = 0x14
}
@property(readonly, assign) int absoluteOrder;	// G=0x30470eb5; @synthesize=_absoluteOrder
@property(retain) NSURL *priorURL;	// G=0x30470ec9; S=0x30470edd; @synthesize=_priorURL
- (id)initWithAction:(int)action context:(id)context absoluteOrder:(int)order;	// 0x30470d91
// declared property getter: - (int)absoluteOrder;	// 0x30470eb5
- (void)dealloc;	// 0x30470dd1
- (id)description;	// 0x30470e1d
// declared property getter: - (id)priorURL;	// 0x30470ec9
// declared property setter: - (void)setPriorURL:(id)url;	// 0x30470edd
@end

