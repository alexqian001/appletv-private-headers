/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRStateMachineEventTuple : XXUnknownSuperclass {
	NSString *_event;	// 4 = 0x4
	id _context;	// 8 = 0x8
	NSDictionary *_userInfo;	// 12 = 0xc
}
@property(retain) id context;	// G=0x45db79; S=0x45db8d; @synthesize=_context
@property(retain) NSString *event;	// G=0x45db55; S=0x45db69; @synthesize=_event
@property(retain) NSDictionary *userInfo;	// G=0x45db9d; S=0x45dbb1; @synthesize=_userInfo
// declared property getter: - (id)context;	// 0x45db79
- (void)dealloc;	// 0x45dae9
// declared property getter: - (id)event;	// 0x45db55
// declared property setter: - (void)setContext:(id)context;	// 0x45db8d
// declared property setter: - (void)setEvent:(id)event;	// 0x45db69
// declared property setter: - (void)setUserInfo:(id)info;	// 0x45dbb1
// declared property getter: - (id)userInfo;	// 0x45db9d
@end
