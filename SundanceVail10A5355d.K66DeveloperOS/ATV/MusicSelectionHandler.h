/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"

@class ATVDataClient;

__attribute__((visibility("hidden")))
@interface MusicSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	ATVDataClient *dataClient;	// 4 = 0x4
	unsigned long clientType;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned long clientType;	// G=0x1b6009; S=0x1b6019; @synthesize
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x1b5fe9; S=0x1b5ff9; @synthesize
// declared property getter: - (unsigned long)clientType;	// 0x1b6009
// declared property getter: - (id)dataClient;	// 0x1b5fe9
- (void)dealloc;	// 0x1b5fa5
- (BOOL)handleSelectionForControl:(id)control;	// 0x1b5c79
// declared property setter: - (void)setClientType:(unsigned long)type;	// 0x1b6019
// declared property setter: - (void)setDataClient:(id)client;	// 0x1b5ff9
@end
