/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library


@interface CoreDAVAction : NSObject {
	int _action;	// 4 = 0x4
	id _context;	// 8 = 0x8
	id _changeContext;	// 12 = 0xc
}
@property(readonly, assign) int action;	// G=0x336f1a55; @synthesize=_action
@property(retain) id changeContext;	// G=0x336f1a7d; S=0x336f1a91; @synthesize=_changeContext
@property(readonly, assign) id context;	// G=0x336f1a69; @synthesize=_context
- (id)initWithAction:(int)action context:(id)context;	// 0x336f193d
// declared property getter: - (int)action;	// 0x336f1a55
// declared property getter: - (id)changeContext;	// 0x336f1a7d
// declared property getter: - (id)context;	// 0x336f1a69
- (void)dealloc;	// 0x336f18d9
- (id)description;	// 0x336f19a1
// declared property setter: - (void)setChangeContext:(id)context;	// 0x336f1a91
@end
