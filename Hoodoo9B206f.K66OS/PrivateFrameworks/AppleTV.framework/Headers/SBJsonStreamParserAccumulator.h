/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "SBJsonStreamParserAdapterDelegate.h"


__attribute__((visibility("hidden")))
@interface SBJsonStreamParserAccumulator : NSObject <SBJsonStreamParserAdapterDelegate> {
@private
	id value;	// 4 = 0x4
}
@property(readonly, assign) id value;	// G=0x36900881; @synthesize
- (void)dealloc;	// 0x369007e5
- (void)parser:(id)parser foundArray:(id)array;	// 0x36900831
- (void)parser:(id)parser foundObject:(id)object;	// 0x36900859
// declared property getter: - (id)value;	// 0x36900881
@end
